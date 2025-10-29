/*
 *  YDLIDAR SYSTEM
 *  YDLIDAR ROS 2 Node (Jazzy compatible)
 *
 *  Copyright 2017 - 2020 EAI TEAM
 *  http://www.eaibot.com
 */

#ifdef _MSC_VER
#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif
#endif

#include "src/CYdLidar.h"
#include <cmath>
#include <chrono>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <signal.h>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "std_srvs/srv/empty.hpp"

#define ROS2Verision "1.0.1"

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("ydlidar_ros2_driver_node");

  RCLCPP_INFO(node->get_logger(),
              "[YDLIDAR INFO] Current ROS Driver Version: %s",
              ((std::string)ROS2Verision).c_str());

  CYdLidar laser;

  // ---- string params ----
  std::string port       = node->declare_parameter<std::string>("port", "/dev/ydlidar");
  std::string ignore_str = node->declare_parameter<std::string>("ignore_array", "");
  std::string frame_id   = node->declare_parameter<std::string>("frame_id", "laser_frame");
  laser.setlidaropt(LidarPropSerialPort, port.c_str(), port.size());
  laser.setlidaropt(LidarPropIgnoreArray, ignore_str.c_str(), ignore_str.size());

  // ---- int params ----
  int baudrate               = node->declare_parameter<int>("baudrate", 230400);
  int lidar_type             = node->declare_parameter<int>("lidar_type", TYPE_TRIANGLE);
  int device_type            = node->declare_parameter<int>("device_type", YDLIDAR_TYPE_SERIAL);
  int sample_rate            = node->declare_parameter<int>("sample_rate", 9);
  int abnormal_check_count   = node->declare_parameter<int>("abnormal_check_count", 4);
  laser.setlidaropt(LidarPropSerialBaudrate, &baudrate, sizeof(int));
  laser.setlidaropt(LidarPropLidarType, &lidar_type, sizeof(int));
  laser.setlidaropt(LidarPropDeviceType, &device_type, sizeof(int));
  laser.setlidaropt(LidarPropSampleRate, &sample_rate, sizeof(int));
  laser.setlidaropt(LidarPropAbnormalCheckCount, &abnormal_check_count, sizeof(int));

  // ---- bool params ----
  bool fixed_resolution     = node->declare_parameter<bool>("fixed_resolution", false);
  bool reversion            = node->declare_parameter<bool>("reversion", true);
  bool inverted             = node->declare_parameter<bool>("inverted", true);
  bool auto_reconnect       = node->declare_parameter<bool>("auto_reconnect", true);
  bool isSingleChannel      = node->declare_parameter<bool>("isSingleChannel", false);
  bool intensity            = node->declare_parameter<bool>("intensity", false);
  bool support_motor_dtr    = node->declare_parameter<bool>("support_motor_dtr", false);
  bool invalid_range_is_inf = node->declare_parameter<bool>("invalid_range_is_inf", false);
  laser.setlidaropt(LidarPropFixedResolution, &fixed_resolution, sizeof(bool));
  laser.setlidaropt(LidarPropReversion, &reversion, sizeof(bool));
  laser.setlidaropt(LidarPropInverted, &inverted, sizeof(bool));
  laser.setlidaropt(LidarPropAutoReconnect, &auto_reconnect, sizeof(bool));
  laser.setlidaropt(LidarPropSingleChannel, &isSingleChannel, sizeof(bool));
  laser.setlidaropt(LidarPropIntenstiy, &intensity, sizeof(bool));
  laser.setlidaropt(LidarPropSupportMotorDtrCtrl, &support_motor_dtr, sizeof(bool));

  // ---- float/double params ----
  // (declare_parameter는 double을 권장하므로 받아서 float로 변환)
  float angle_max = static_cast<float>(node->declare_parameter<double>("angle_max", 180.0));
  float angle_min = static_cast<float>(node->declare_parameter<double>("angle_min", -180.0));
  float range_max = static_cast<float>(node->declare_parameter<double>("range_max", 64.0));
  float range_min = static_cast<float>(node->declare_parameter<double>("range_min", 0.1));
  float frequency = static_cast<float>(node->declare_parameter<double>("frequency", 10.0));
  laser.setlidaropt(LidarPropMaxAngle, &angle_max, sizeof(float));
  laser.setlidaropt(LidarPropMinAngle, &angle_min, sizeof(float));
  laser.setlidaropt(LidarPropMaxRange, &range_max, sizeof(float));
  laser.setlidaropt(LidarPropMinRange, &range_min, sizeof(float));
  laser.setlidaropt(LidarPropScanFrequency, &frequency, sizeof(float));

  // ---- init & start ----
  bool ret = laser.initialize();
  if (ret) {
    ret = laser.turnOn();
  } else {
    RCLCPP_ERROR(node->get_logger(), "%s", laser.DescribeError());
  }

  auto laser_pub = node->create_publisher<sensor_msgs::msg::LaserScan>(
      "scan", rclcpp::SensorDataQoS());

  // Services (unused args는 캡처만 하고 미사용)
  auto stop_scan_service =
      [&laser](const std::shared_ptr<rmw_request_id_t> /*request_header*/,
               const std::shared_ptr<std_srvs::srv::Empty::Request> /*req*/,
               std::shared_ptr<std_srvs::srv::Empty::Response> /*response*/) -> bool {
        return laser.turnOff();
      };
  auto start_scan_service =
      [&laser](const std::shared_ptr<rmw_request_id_t> /*request_header*/,
               const std::shared_ptr<std_srvs::srv::Empty::Request> /*req*/,
               std::shared_ptr<std_srvs::srv::Empty::Response> /*response*/) -> bool {
        return laser.turnOn();
      };

  auto stop_service  = node->create_service<std_srvs::srv::Empty>("stop_scan",  stop_scan_service);
  auto start_service = node->create_service<std_srvs::srv::Empty>("start_scan", start_scan_service);

  rclcpp::WallRate loop_rate(20);

  while (ret && rclcpp::ok()) {
    LaserScan scan;

    if (laser.doProcessSimple(scan)) {
      auto scan_msg = std::make_shared<sensor_msgs::msg::LaserScan>();

      scan_msg->header.stamp.sec     = RCL_NS_TO_S(scan.stamp);
      scan_msg->header.stamp.nanosec = scan.stamp - RCL_S_TO_NS(scan_msg->header.stamp.sec);
      scan_msg->header.frame_id      = frame_id;

      scan_msg->angle_min        = scan.config.min_angle;
      scan_msg->angle_max        = scan.config.max_angle;
      scan_msg->angle_increment  = scan.config.angle_increment;
      scan_msg->scan_time        = scan.config.scan_time;
      scan_msg->time_increment   = scan.config.time_increment;
      scan_msg->range_min        = scan.config.min_range;
      scan_msg->range_max        = scan.config.max_range;

      int size = static_cast<int>(
          (scan.config.max_angle - scan.config.min_angle) / scan.config.angle_increment) + 1;
      scan_msg->ranges.resize(size);
      scan_msg->intensities.resize(size);

      for (size_t i = 0; i < scan.points.size(); ++i) {
        int index = static_cast<int>(std::ceil(
            (scan.points[i].angle - scan.config.min_angle) / scan.config.angle_increment));
        if (index >= 0 && index < size) {
          scan_msg->ranges[index]      = invalid_range_is_inf && (scan.points[i].range <= 0.0f)
                                         ? std::numeric_limits<float>::infinity()
                                         : scan.points[i].range;
          scan_msg->intensities[index] = scan.points[i].intensity;
        }
      }

      laser_pub->publish(*scan_msg);
    } else {
      RCLCPP_ERROR(node->get_logger(), "Failed to get scan");
    }

    if (!rclcpp::ok()) break;
    rclcpp::spin_some(node);
    loop_rate.sleep();
  }

  RCLCPP_INFO(node->get_logger(), "[YDLIDAR INFO] Now YDLIDAR is stopping .......");
  laser.turnOff();
  laser.disconnecting();
  rclcpp::shutdown();
  return 0;
}
