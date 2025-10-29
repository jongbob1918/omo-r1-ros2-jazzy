// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omo_r1_interfaces:srv/Onoff.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "omo_r1_interfaces/srv/onoff.hpp"


#ifndef OMO_R1_INTERFACES__SRV__DETAIL__ONOFF__BUILDER_HPP_
#define OMO_R1_INTERFACES__SRV__DETAIL__ONOFF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omo_r1_interfaces/srv/detail/onoff__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omo_r1_interfaces
{

namespace srv
{

namespace builder
{

class Init_Onoff_Request_set
{
public:
  Init_Onoff_Request_set()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::omo_r1_interfaces::srv::Onoff_Request set(::omo_r1_interfaces::srv::Onoff_Request::_set_type arg)
  {
    msg_.set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omo_r1_interfaces::srv::Onoff_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::omo_r1_interfaces::srv::Onoff_Request>()
{
  return omo_r1_interfaces::srv::builder::Init_Onoff_Request_set();
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
auto build<::omo_r1_interfaces::srv::Onoff_Response>()
{
  return ::omo_r1_interfaces::srv::Onoff_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace omo_r1_interfaces


namespace omo_r1_interfaces
{

namespace srv
{

namespace builder
{

class Init_Onoff_Event_response
{
public:
  explicit Init_Onoff_Event_response(::omo_r1_interfaces::srv::Onoff_Event & msg)
  : msg_(msg)
  {}
  ::omo_r1_interfaces::srv::Onoff_Event response(::omo_r1_interfaces::srv::Onoff_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omo_r1_interfaces::srv::Onoff_Event msg_;
};

class Init_Onoff_Event_request
{
public:
  explicit Init_Onoff_Event_request(::omo_r1_interfaces::srv::Onoff_Event & msg)
  : msg_(msg)
  {}
  Init_Onoff_Event_response request(::omo_r1_interfaces::srv::Onoff_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Onoff_Event_response(msg_);
  }

private:
  ::omo_r1_interfaces::srv::Onoff_Event msg_;
};

class Init_Onoff_Event_info
{
public:
  Init_Onoff_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Onoff_Event_request info(::omo_r1_interfaces::srv::Onoff_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Onoff_Event_request(msg_);
  }

private:
  ::omo_r1_interfaces::srv::Onoff_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::omo_r1_interfaces::srv::Onoff_Event>()
{
  return omo_r1_interfaces::srv::builder::Init_Onoff_Event_info();
}

}  // namespace omo_r1_interfaces

#endif  // OMO_R1_INTERFACES__SRV__DETAIL__ONOFF__BUILDER_HPP_
