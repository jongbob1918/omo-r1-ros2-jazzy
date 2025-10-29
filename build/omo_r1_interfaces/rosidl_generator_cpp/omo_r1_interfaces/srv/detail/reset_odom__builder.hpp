// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omo_r1_interfaces:srv/ResetOdom.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "omo_r1_interfaces/srv/reset_odom.hpp"


#ifndef OMO_R1_INTERFACES__SRV__DETAIL__RESET_ODOM__BUILDER_HPP_
#define OMO_R1_INTERFACES__SRV__DETAIL__RESET_ODOM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omo_r1_interfaces/srv/detail/reset_odom__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omo_r1_interfaces
{

namespace srv
{

namespace builder
{

class Init_ResetOdom_Request_theta
{
public:
  explicit Init_ResetOdom_Request_theta(::omo_r1_interfaces::srv::ResetOdom_Request & msg)
  : msg_(msg)
  {}
  ::omo_r1_interfaces::srv::ResetOdom_Request theta(::omo_r1_interfaces::srv::ResetOdom_Request::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omo_r1_interfaces::srv::ResetOdom_Request msg_;
};

class Init_ResetOdom_Request_y
{
public:
  explicit Init_ResetOdom_Request_y(::omo_r1_interfaces::srv::ResetOdom_Request & msg)
  : msg_(msg)
  {}
  Init_ResetOdom_Request_theta y(::omo_r1_interfaces::srv::ResetOdom_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ResetOdom_Request_theta(msg_);
  }

private:
  ::omo_r1_interfaces::srv::ResetOdom_Request msg_;
};

class Init_ResetOdom_Request_x
{
public:
  Init_ResetOdom_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResetOdom_Request_y x(::omo_r1_interfaces::srv::ResetOdom_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ResetOdom_Request_y(msg_);
  }

private:
  ::omo_r1_interfaces::srv::ResetOdom_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::omo_r1_interfaces::srv::ResetOdom_Request>()
{
  return omo_r1_interfaces::srv::builder::Init_ResetOdom_Request_x();
}

}  // namespace omo_r1_interfaces


namespace omo_r1_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::omo_r1_interfaces::srv::ResetOdom_Response>()
{
  return ::omo_r1_interfaces::srv::ResetOdom_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace omo_r1_interfaces


namespace omo_r1_interfaces
{

namespace srv
{

namespace builder
{

class Init_ResetOdom_Event_response
{
public:
  explicit Init_ResetOdom_Event_response(::omo_r1_interfaces::srv::ResetOdom_Event & msg)
  : msg_(msg)
  {}
  ::omo_r1_interfaces::srv::ResetOdom_Event response(::omo_r1_interfaces::srv::ResetOdom_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omo_r1_interfaces::srv::ResetOdom_Event msg_;
};

class Init_ResetOdom_Event_request
{
public:
  explicit Init_ResetOdom_Event_request(::omo_r1_interfaces::srv::ResetOdom_Event & msg)
  : msg_(msg)
  {}
  Init_ResetOdom_Event_response request(::omo_r1_interfaces::srv::ResetOdom_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ResetOdom_Event_response(msg_);
  }

private:
  ::omo_r1_interfaces::srv::ResetOdom_Event msg_;
};

class Init_ResetOdom_Event_info
{
public:
  Init_ResetOdom_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResetOdom_Event_request info(::omo_r1_interfaces::srv::ResetOdom_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ResetOdom_Event_request(msg_);
  }

private:
  ::omo_r1_interfaces::srv::ResetOdom_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::omo_r1_interfaces::srv::ResetOdom_Event>()
{
  return omo_r1_interfaces::srv::builder::Init_ResetOdom_Event_info();
}

}  // namespace omo_r1_interfaces

#endif  // OMO_R1_INTERFACES__SRV__DETAIL__RESET_ODOM__BUILDER_HPP_
