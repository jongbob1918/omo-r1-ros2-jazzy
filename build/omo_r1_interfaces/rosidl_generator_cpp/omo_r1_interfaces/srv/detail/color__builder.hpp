// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omo_r1_interfaces:srv/Color.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "omo_r1_interfaces/srv/color.hpp"


#ifndef OMO_R1_INTERFACES__SRV__DETAIL__COLOR__BUILDER_HPP_
#define OMO_R1_INTERFACES__SRV__DETAIL__COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omo_r1_interfaces/srv/detail/color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omo_r1_interfaces
{

namespace srv
{

namespace builder
{

class Init_Color_Request_blue
{
public:
  explicit Init_Color_Request_blue(::omo_r1_interfaces::srv::Color_Request & msg)
  : msg_(msg)
  {}
  ::omo_r1_interfaces::srv::Color_Request blue(::omo_r1_interfaces::srv::Color_Request::_blue_type arg)
  {
    msg_.blue = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omo_r1_interfaces::srv::Color_Request msg_;
};

class Init_Color_Request_green
{
public:
  explicit Init_Color_Request_green(::omo_r1_interfaces::srv::Color_Request & msg)
  : msg_(msg)
  {}
  Init_Color_Request_blue green(::omo_r1_interfaces::srv::Color_Request::_green_type arg)
  {
    msg_.green = std::move(arg);
    return Init_Color_Request_blue(msg_);
  }

private:
  ::omo_r1_interfaces::srv::Color_Request msg_;
};

class Init_Color_Request_red
{
public:
  Init_Color_Request_red()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Color_Request_green red(::omo_r1_interfaces::srv::Color_Request::_red_type arg)
  {
    msg_.red = std::move(arg);
    return Init_Color_Request_green(msg_);
  }

private:
  ::omo_r1_interfaces::srv::Color_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::omo_r1_interfaces::srv::Color_Request>()
{
  return omo_r1_interfaces::srv::builder::Init_Color_Request_red();
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
auto build<::omo_r1_interfaces::srv::Color_Response>()
{
  return ::omo_r1_interfaces::srv::Color_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace omo_r1_interfaces


namespace omo_r1_interfaces
{

namespace srv
{

namespace builder
{

class Init_Color_Event_response
{
public:
  explicit Init_Color_Event_response(::omo_r1_interfaces::srv::Color_Event & msg)
  : msg_(msg)
  {}
  ::omo_r1_interfaces::srv::Color_Event response(::omo_r1_interfaces::srv::Color_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omo_r1_interfaces::srv::Color_Event msg_;
};

class Init_Color_Event_request
{
public:
  explicit Init_Color_Event_request(::omo_r1_interfaces::srv::Color_Event & msg)
  : msg_(msg)
  {}
  Init_Color_Event_response request(::omo_r1_interfaces::srv::Color_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Color_Event_response(msg_);
  }

private:
  ::omo_r1_interfaces::srv::Color_Event msg_;
};

class Init_Color_Event_info
{
public:
  Init_Color_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Color_Event_request info(::omo_r1_interfaces::srv::Color_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Color_Event_request(msg_);
  }

private:
  ::omo_r1_interfaces::srv::Color_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::omo_r1_interfaces::srv::Color_Event>()
{
  return omo_r1_interfaces::srv::builder::Init_Color_Event_info();
}

}  // namespace omo_r1_interfaces

#endif  // OMO_R1_INTERFACES__SRV__DETAIL__COLOR__BUILDER_HPP_
