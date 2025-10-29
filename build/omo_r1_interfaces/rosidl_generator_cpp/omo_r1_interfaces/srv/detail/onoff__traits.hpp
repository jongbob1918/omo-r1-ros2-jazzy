// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from omo_r1_interfaces:srv/Onoff.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "omo_r1_interfaces/srv/onoff.hpp"


#ifndef OMO_R1_INTERFACES__SRV__DETAIL__ONOFF__TRAITS_HPP_
#define OMO_R1_INTERFACES__SRV__DETAIL__ONOFF__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "omo_r1_interfaces/srv/detail/onoff__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace omo_r1_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Onoff_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: set
  {
    out << "set: ";
    rosidl_generator_traits::value_to_yaml(msg.set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Onoff_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set: ";
    rosidl_generator_traits::value_to_yaml(msg.set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Onoff_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace omo_r1_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use omo_r1_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const omo_r1_interfaces::srv::Onoff_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  omo_r1_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use omo_r1_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const omo_r1_interfaces::srv::Onoff_Request & msg)
{
  return omo_r1_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<omo_r1_interfaces::srv::Onoff_Request>()
{
  return "omo_r1_interfaces::srv::Onoff_Request";
}

template<>
inline const char * name<omo_r1_interfaces::srv::Onoff_Request>()
{
  return "omo_r1_interfaces/srv/Onoff_Request";
}

template<>
struct has_fixed_size<omo_r1_interfaces::srv::Onoff_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<omo_r1_interfaces::srv::Onoff_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<omo_r1_interfaces::srv::Onoff_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace omo_r1_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Onoff_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Onoff_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Onoff_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace omo_r1_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use omo_r1_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const omo_r1_interfaces::srv::Onoff_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  omo_r1_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use omo_r1_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const omo_r1_interfaces::srv::Onoff_Response & msg)
{
  return omo_r1_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<omo_r1_interfaces::srv::Onoff_Response>()
{
  return "omo_r1_interfaces::srv::Onoff_Response";
}

template<>
inline const char * name<omo_r1_interfaces::srv::Onoff_Response>()
{
  return "omo_r1_interfaces/srv/Onoff_Response";
}

template<>
struct has_fixed_size<omo_r1_interfaces::srv::Onoff_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<omo_r1_interfaces::srv::Onoff_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<omo_r1_interfaces::srv::Onoff_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace omo_r1_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Onoff_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Onoff_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Onoff_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace omo_r1_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use omo_r1_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const omo_r1_interfaces::srv::Onoff_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  omo_r1_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use omo_r1_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const omo_r1_interfaces::srv::Onoff_Event & msg)
{
  return omo_r1_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<omo_r1_interfaces::srv::Onoff_Event>()
{
  return "omo_r1_interfaces::srv::Onoff_Event";
}

template<>
inline const char * name<omo_r1_interfaces::srv::Onoff_Event>()
{
  return "omo_r1_interfaces/srv/Onoff_Event";
}

template<>
struct has_fixed_size<omo_r1_interfaces::srv::Onoff_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<omo_r1_interfaces::srv::Onoff_Event>
  : std::integral_constant<bool, has_bounded_size<omo_r1_interfaces::srv::Onoff_Request>::value && has_bounded_size<omo_r1_interfaces::srv::Onoff_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<omo_r1_interfaces::srv::Onoff_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<omo_r1_interfaces::srv::Onoff>()
{
  return "omo_r1_interfaces::srv::Onoff";
}

template<>
inline const char * name<omo_r1_interfaces::srv::Onoff>()
{
  return "omo_r1_interfaces/srv/Onoff";
}

template<>
struct has_fixed_size<omo_r1_interfaces::srv::Onoff>
  : std::integral_constant<
    bool,
    has_fixed_size<omo_r1_interfaces::srv::Onoff_Request>::value &&
    has_fixed_size<omo_r1_interfaces::srv::Onoff_Response>::value
  >
{
};

template<>
struct has_bounded_size<omo_r1_interfaces::srv::Onoff>
  : std::integral_constant<
    bool,
    has_bounded_size<omo_r1_interfaces::srv::Onoff_Request>::value &&
    has_bounded_size<omo_r1_interfaces::srv::Onoff_Response>::value
  >
{
};

template<>
struct is_service<omo_r1_interfaces::srv::Onoff>
  : std::true_type
{
};

template<>
struct is_service_request<omo_r1_interfaces::srv::Onoff_Request>
  : std::true_type
{
};

template<>
struct is_service_response<omo_r1_interfaces::srv::Onoff_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OMO_R1_INTERFACES__SRV__DETAIL__ONOFF__TRAITS_HPP_
