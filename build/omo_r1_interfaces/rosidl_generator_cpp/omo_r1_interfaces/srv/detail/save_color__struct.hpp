// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from omo_r1_interfaces:srv/SaveColor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "omo_r1_interfaces/srv/save_color.hpp"


#ifndef OMO_R1_INTERFACES__SRV__DETAIL__SAVE_COLOR__STRUCT_HPP_
#define OMO_R1_INTERFACES__SRV__DETAIL__SAVE_COLOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__omo_r1_interfaces__srv__SaveColor_Request __attribute__((deprecated))
#else
# define DEPRECATED__omo_r1_interfaces__srv__SaveColor_Request __declspec(deprecated)
#endif

namespace omo_r1_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SaveColor_Request_
{
  using Type = SaveColor_Request_<ContainerAllocator>;

  explicit SaveColor_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red = 0ll;
      this->green = 0ll;
      this->blue = 0ll;
    }
  }

  explicit SaveColor_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->red = 0ll;
      this->green = 0ll;
      this->blue = 0ll;
    }
  }

  // field types and members
  using _red_type =
    int64_t;
  _red_type red;
  using _green_type =
    int64_t;
  _green_type green;
  using _blue_type =
    int64_t;
  _blue_type blue;

  // setters for named parameter idiom
  Type & set__red(
    const int64_t & _arg)
  {
    this->red = _arg;
    return *this;
  }
  Type & set__green(
    const int64_t & _arg)
  {
    this->green = _arg;
    return *this;
  }
  Type & set__blue(
    const int64_t & _arg)
  {
    this->blue = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    omo_r1_interfaces::srv::SaveColor_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const omo_r1_interfaces::srv::SaveColor_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omo_r1_interfaces::srv::SaveColor_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omo_r1_interfaces::srv::SaveColor_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omo_r1_interfaces::srv::SaveColor_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omo_r1_interfaces::srv::SaveColor_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omo_r1_interfaces::srv::SaveColor_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omo_r1_interfaces::srv::SaveColor_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omo_r1_interfaces::srv::SaveColor_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omo_r1_interfaces::srv::SaveColor_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omo_r1_interfaces__srv__SaveColor_Request
    std::shared_ptr<omo_r1_interfaces::srv::SaveColor_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omo_r1_interfaces__srv__SaveColor_Request
    std::shared_ptr<omo_r1_interfaces::srv::SaveColor_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveColor_Request_ & other) const
  {
    if (this->red != other.red) {
      return false;
    }
    if (this->green != other.green) {
      return false;
    }
    if (this->blue != other.blue) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveColor_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveColor_Request_

// alias to use template instance with default allocator
using SaveColor_Request =
  omo_r1_interfaces::srv::SaveColor_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace omo_r1_interfaces


#ifndef _WIN32
# define DEPRECATED__omo_r1_interfaces__srv__SaveColor_Response __attribute__((deprecated))
#else
# define DEPRECATED__omo_r1_interfaces__srv__SaveColor_Response __declspec(deprecated)
#endif

namespace omo_r1_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SaveColor_Response_
{
  using Type = SaveColor_Response_<ContainerAllocator>;

  explicit SaveColor_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SaveColor_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    omo_r1_interfaces::srv::SaveColor_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const omo_r1_interfaces::srv::SaveColor_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omo_r1_interfaces::srv::SaveColor_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omo_r1_interfaces::srv::SaveColor_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omo_r1_interfaces::srv::SaveColor_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omo_r1_interfaces::srv::SaveColor_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omo_r1_interfaces::srv::SaveColor_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omo_r1_interfaces::srv::SaveColor_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omo_r1_interfaces::srv::SaveColor_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omo_r1_interfaces::srv::SaveColor_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omo_r1_interfaces__srv__SaveColor_Response
    std::shared_ptr<omo_r1_interfaces::srv::SaveColor_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omo_r1_interfaces__srv__SaveColor_Response
    std::shared_ptr<omo_r1_interfaces::srv::SaveColor_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveColor_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveColor_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveColor_Response_

// alias to use template instance with default allocator
using SaveColor_Response =
  omo_r1_interfaces::srv::SaveColor_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace omo_r1_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__omo_r1_interfaces__srv__SaveColor_Event __attribute__((deprecated))
#else
# define DEPRECATED__omo_r1_interfaces__srv__SaveColor_Event __declspec(deprecated)
#endif

namespace omo_r1_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SaveColor_Event_
{
  using Type = SaveColor_Event_<ContainerAllocator>;

  explicit SaveColor_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SaveColor_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<omo_r1_interfaces::srv::SaveColor_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<omo_r1_interfaces::srv::SaveColor_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<omo_r1_interfaces::srv::SaveColor_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<omo_r1_interfaces::srv::SaveColor_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<omo_r1_interfaces::srv::SaveColor_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<omo_r1_interfaces::srv::SaveColor_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<omo_r1_interfaces::srv::SaveColor_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<omo_r1_interfaces::srv::SaveColor_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    omo_r1_interfaces::srv::SaveColor_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const omo_r1_interfaces::srv::SaveColor_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<omo_r1_interfaces::srv::SaveColor_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<omo_r1_interfaces::srv::SaveColor_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      omo_r1_interfaces::srv::SaveColor_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<omo_r1_interfaces::srv::SaveColor_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      omo_r1_interfaces::srv::SaveColor_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<omo_r1_interfaces::srv::SaveColor_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<omo_r1_interfaces::srv::SaveColor_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<omo_r1_interfaces::srv::SaveColor_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__omo_r1_interfaces__srv__SaveColor_Event
    std::shared_ptr<omo_r1_interfaces::srv::SaveColor_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__omo_r1_interfaces__srv__SaveColor_Event
    std::shared_ptr<omo_r1_interfaces::srv::SaveColor_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveColor_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveColor_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveColor_Event_

// alias to use template instance with default allocator
using SaveColor_Event =
  omo_r1_interfaces::srv::SaveColor_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace omo_r1_interfaces

namespace omo_r1_interfaces
{

namespace srv
{

struct SaveColor
{
  using Request = omo_r1_interfaces::srv::SaveColor_Request;
  using Response = omo_r1_interfaces::srv::SaveColor_Response;
  using Event = omo_r1_interfaces::srv::SaveColor_Event;
};

}  // namespace srv

}  // namespace omo_r1_interfaces

#endif  // OMO_R1_INTERFACES__SRV__DETAIL__SAVE_COLOR__STRUCT_HPP_
