// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from omo_r1_interfaces:srv/Calg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "omo_r1_interfaces/srv/calg.hpp"


#ifndef OMO_R1_INTERFACES__SRV__DETAIL__CALG__BUILDER_HPP_
#define OMO_R1_INTERFACES__SRV__DETAIL__CALG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "omo_r1_interfaces/srv/detail/calg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace omo_r1_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::omo_r1_interfaces::srv::Calg_Request>()
{
  return ::omo_r1_interfaces::srv::Calg_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
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
auto build<::omo_r1_interfaces::srv::Calg_Response>()
{
  return ::omo_r1_interfaces::srv::Calg_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace omo_r1_interfaces


namespace omo_r1_interfaces
{

namespace srv
{

namespace builder
{

class Init_Calg_Event_response
{
public:
  explicit Init_Calg_Event_response(::omo_r1_interfaces::srv::Calg_Event & msg)
  : msg_(msg)
  {}
  ::omo_r1_interfaces::srv::Calg_Event response(::omo_r1_interfaces::srv::Calg_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::omo_r1_interfaces::srv::Calg_Event msg_;
};

class Init_Calg_Event_request
{
public:
  explicit Init_Calg_Event_request(::omo_r1_interfaces::srv::Calg_Event & msg)
  : msg_(msg)
  {}
  Init_Calg_Event_response request(::omo_r1_interfaces::srv::Calg_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Calg_Event_response(msg_);
  }

private:
  ::omo_r1_interfaces::srv::Calg_Event msg_;
};

class Init_Calg_Event_info
{
public:
  Init_Calg_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Calg_Event_request info(::omo_r1_interfaces::srv::Calg_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Calg_Event_request(msg_);
  }

private:
  ::omo_r1_interfaces::srv::Calg_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::omo_r1_interfaces::srv::Calg_Event>()
{
  return omo_r1_interfaces::srv::builder::Init_Calg_Event_info();
}

}  // namespace omo_r1_interfaces

#endif  // OMO_R1_INTERFACES__SRV__DETAIL__CALG__BUILDER_HPP_
