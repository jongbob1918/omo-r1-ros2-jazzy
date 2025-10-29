// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from omo_r1_interfaces:srv/Color.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "omo_r1_interfaces/srv/detail/color__rosidl_typesupport_introspection_c.h"
#include "omo_r1_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "omo_r1_interfaces/srv/detail/color__functions.h"
#include "omo_r1_interfaces/srv/detail/color__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void omo_r1_interfaces__srv__Color_Request__rosidl_typesupport_introspection_c__Color_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  omo_r1_interfaces__srv__Color_Request__init(message_memory);
}

void omo_r1_interfaces__srv__Color_Request__rosidl_typesupport_introspection_c__Color_Request_fini_function(void * message_memory)
{
  omo_r1_interfaces__srv__Color_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember omo_r1_interfaces__srv__Color_Request__rosidl_typesupport_introspection_c__Color_Request_message_member_array[3] = {
  {
    "red",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omo_r1_interfaces__srv__Color_Request, red),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "green",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omo_r1_interfaces__srv__Color_Request, green),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "blue",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omo_r1_interfaces__srv__Color_Request, blue),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers omo_r1_interfaces__srv__Color_Request__rosidl_typesupport_introspection_c__Color_Request_message_members = {
  "omo_r1_interfaces__srv",  // message namespace
  "Color_Request",  // message name
  3,  // number of fields
  sizeof(omo_r1_interfaces__srv__Color_Request),
  false,  // has_any_key_member_
  omo_r1_interfaces__srv__Color_Request__rosidl_typesupport_introspection_c__Color_Request_message_member_array,  // message members
  omo_r1_interfaces__srv__Color_Request__rosidl_typesupport_introspection_c__Color_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  omo_r1_interfaces__srv__Color_Request__rosidl_typesupport_introspection_c__Color_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t omo_r1_interfaces__srv__Color_Request__rosidl_typesupport_introspection_c__Color_Request_message_type_support_handle = {
  0,
  &omo_r1_interfaces__srv__Color_Request__rosidl_typesupport_introspection_c__Color_Request_message_members,
  get_message_typesupport_handle_function,
  &omo_r1_interfaces__srv__Color_Request__get_type_hash,
  &omo_r1_interfaces__srv__Color_Request__get_type_description,
  &omo_r1_interfaces__srv__Color_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_omo_r1_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omo_r1_interfaces, srv, Color_Request)() {
  if (!omo_r1_interfaces__srv__Color_Request__rosidl_typesupport_introspection_c__Color_Request_message_type_support_handle.typesupport_identifier) {
    omo_r1_interfaces__srv__Color_Request__rosidl_typesupport_introspection_c__Color_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &omo_r1_interfaces__srv__Color_Request__rosidl_typesupport_introspection_c__Color_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "omo_r1_interfaces/srv/detail/color__rosidl_typesupport_introspection_c.h"
// already included above
// #include "omo_r1_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "omo_r1_interfaces/srv/detail/color__functions.h"
// already included above
// #include "omo_r1_interfaces/srv/detail/color__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void omo_r1_interfaces__srv__Color_Response__rosidl_typesupport_introspection_c__Color_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  omo_r1_interfaces__srv__Color_Response__init(message_memory);
}

void omo_r1_interfaces__srv__Color_Response__rosidl_typesupport_introspection_c__Color_Response_fini_function(void * message_memory)
{
  omo_r1_interfaces__srv__Color_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember omo_r1_interfaces__srv__Color_Response__rosidl_typesupport_introspection_c__Color_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omo_r1_interfaces__srv__Color_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers omo_r1_interfaces__srv__Color_Response__rosidl_typesupport_introspection_c__Color_Response_message_members = {
  "omo_r1_interfaces__srv",  // message namespace
  "Color_Response",  // message name
  1,  // number of fields
  sizeof(omo_r1_interfaces__srv__Color_Response),
  false,  // has_any_key_member_
  omo_r1_interfaces__srv__Color_Response__rosidl_typesupport_introspection_c__Color_Response_message_member_array,  // message members
  omo_r1_interfaces__srv__Color_Response__rosidl_typesupport_introspection_c__Color_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  omo_r1_interfaces__srv__Color_Response__rosidl_typesupport_introspection_c__Color_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t omo_r1_interfaces__srv__Color_Response__rosidl_typesupport_introspection_c__Color_Response_message_type_support_handle = {
  0,
  &omo_r1_interfaces__srv__Color_Response__rosidl_typesupport_introspection_c__Color_Response_message_members,
  get_message_typesupport_handle_function,
  &omo_r1_interfaces__srv__Color_Response__get_type_hash,
  &omo_r1_interfaces__srv__Color_Response__get_type_description,
  &omo_r1_interfaces__srv__Color_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_omo_r1_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omo_r1_interfaces, srv, Color_Response)() {
  if (!omo_r1_interfaces__srv__Color_Response__rosidl_typesupport_introspection_c__Color_Response_message_type_support_handle.typesupport_identifier) {
    omo_r1_interfaces__srv__Color_Response__rosidl_typesupport_introspection_c__Color_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &omo_r1_interfaces__srv__Color_Response__rosidl_typesupport_introspection_c__Color_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "omo_r1_interfaces/srv/detail/color__rosidl_typesupport_introspection_c.h"
// already included above
// #include "omo_r1_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "omo_r1_interfaces/srv/detail/color__functions.h"
// already included above
// #include "omo_r1_interfaces/srv/detail/color__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "omo_r1_interfaces/srv/color.h"
// Member `request`
// Member `response`
// already included above
// #include "omo_r1_interfaces/srv/detail/color__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__Color_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  omo_r1_interfaces__srv__Color_Event__init(message_memory);
}

void omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__Color_Event_fini_function(void * message_memory)
{
  omo_r1_interfaces__srv__Color_Event__fini(message_memory);
}

size_t omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__size_function__Color_Event__request(
  const void * untyped_member)
{
  const omo_r1_interfaces__srv__Color_Request__Sequence * member =
    (const omo_r1_interfaces__srv__Color_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__get_const_function__Color_Event__request(
  const void * untyped_member, size_t index)
{
  const omo_r1_interfaces__srv__Color_Request__Sequence * member =
    (const omo_r1_interfaces__srv__Color_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__get_function__Color_Event__request(
  void * untyped_member, size_t index)
{
  omo_r1_interfaces__srv__Color_Request__Sequence * member =
    (omo_r1_interfaces__srv__Color_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__fetch_function__Color_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const omo_r1_interfaces__srv__Color_Request * item =
    ((const omo_r1_interfaces__srv__Color_Request *)
    omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__get_const_function__Color_Event__request(untyped_member, index));
  omo_r1_interfaces__srv__Color_Request * value =
    (omo_r1_interfaces__srv__Color_Request *)(untyped_value);
  *value = *item;
}

void omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__assign_function__Color_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  omo_r1_interfaces__srv__Color_Request * item =
    ((omo_r1_interfaces__srv__Color_Request *)
    omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__get_function__Color_Event__request(untyped_member, index));
  const omo_r1_interfaces__srv__Color_Request * value =
    (const omo_r1_interfaces__srv__Color_Request *)(untyped_value);
  *item = *value;
}

bool omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__resize_function__Color_Event__request(
  void * untyped_member, size_t size)
{
  omo_r1_interfaces__srv__Color_Request__Sequence * member =
    (omo_r1_interfaces__srv__Color_Request__Sequence *)(untyped_member);
  omo_r1_interfaces__srv__Color_Request__Sequence__fini(member);
  return omo_r1_interfaces__srv__Color_Request__Sequence__init(member, size);
}

size_t omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__size_function__Color_Event__response(
  const void * untyped_member)
{
  const omo_r1_interfaces__srv__Color_Response__Sequence * member =
    (const omo_r1_interfaces__srv__Color_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__get_const_function__Color_Event__response(
  const void * untyped_member, size_t index)
{
  const omo_r1_interfaces__srv__Color_Response__Sequence * member =
    (const omo_r1_interfaces__srv__Color_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__get_function__Color_Event__response(
  void * untyped_member, size_t index)
{
  omo_r1_interfaces__srv__Color_Response__Sequence * member =
    (omo_r1_interfaces__srv__Color_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__fetch_function__Color_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const omo_r1_interfaces__srv__Color_Response * item =
    ((const omo_r1_interfaces__srv__Color_Response *)
    omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__get_const_function__Color_Event__response(untyped_member, index));
  omo_r1_interfaces__srv__Color_Response * value =
    (omo_r1_interfaces__srv__Color_Response *)(untyped_value);
  *value = *item;
}

void omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__assign_function__Color_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  omo_r1_interfaces__srv__Color_Response * item =
    ((omo_r1_interfaces__srv__Color_Response *)
    omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__get_function__Color_Event__response(untyped_member, index));
  const omo_r1_interfaces__srv__Color_Response * value =
    (const omo_r1_interfaces__srv__Color_Response *)(untyped_value);
  *item = *value;
}

bool omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__resize_function__Color_Event__response(
  void * untyped_member, size_t size)
{
  omo_r1_interfaces__srv__Color_Response__Sequence * member =
    (omo_r1_interfaces__srv__Color_Response__Sequence *)(untyped_member);
  omo_r1_interfaces__srv__Color_Response__Sequence__fini(member);
  return omo_r1_interfaces__srv__Color_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__Color_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(omo_r1_interfaces__srv__Color_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(omo_r1_interfaces__srv__Color_Event, request),  // bytes offset in struct
    NULL,  // default value
    omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__size_function__Color_Event__request,  // size() function pointer
    omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__get_const_function__Color_Event__request,  // get_const(index) function pointer
    omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__get_function__Color_Event__request,  // get(index) function pointer
    omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__fetch_function__Color_Event__request,  // fetch(index, &value) function pointer
    omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__assign_function__Color_Event__request,  // assign(index, value) function pointer
    omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__resize_function__Color_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(omo_r1_interfaces__srv__Color_Event, response),  // bytes offset in struct
    NULL,  // default value
    omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__size_function__Color_Event__response,  // size() function pointer
    omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__get_const_function__Color_Event__response,  // get_const(index) function pointer
    omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__get_function__Color_Event__response,  // get(index) function pointer
    omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__fetch_function__Color_Event__response,  // fetch(index, &value) function pointer
    omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__assign_function__Color_Event__response,  // assign(index, value) function pointer
    omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__resize_function__Color_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__Color_Event_message_members = {
  "omo_r1_interfaces__srv",  // message namespace
  "Color_Event",  // message name
  3,  // number of fields
  sizeof(omo_r1_interfaces__srv__Color_Event),
  false,  // has_any_key_member_
  omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__Color_Event_message_member_array,  // message members
  omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__Color_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__Color_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__Color_Event_message_type_support_handle = {
  0,
  &omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__Color_Event_message_members,
  get_message_typesupport_handle_function,
  &omo_r1_interfaces__srv__Color_Event__get_type_hash,
  &omo_r1_interfaces__srv__Color_Event__get_type_description,
  &omo_r1_interfaces__srv__Color_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_omo_r1_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omo_r1_interfaces, srv, Color_Event)() {
  omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__Color_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__Color_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omo_r1_interfaces, srv, Color_Request)();
  omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__Color_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omo_r1_interfaces, srv, Color_Response)();
  if (!omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__Color_Event_message_type_support_handle.typesupport_identifier) {
    omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__Color_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__Color_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "omo_r1_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "omo_r1_interfaces/srv/detail/color__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers omo_r1_interfaces__srv__detail__color__rosidl_typesupport_introspection_c__Color_service_members = {
  "omo_r1_interfaces__srv",  // service namespace
  "Color",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // omo_r1_interfaces__srv__detail__color__rosidl_typesupport_introspection_c__Color_Request_message_type_support_handle,
  NULL,  // response message
  // omo_r1_interfaces__srv__detail__color__rosidl_typesupport_introspection_c__Color_Response_message_type_support_handle
  NULL  // event_message
  // omo_r1_interfaces__srv__detail__color__rosidl_typesupport_introspection_c__Color_Response_message_type_support_handle
};


static rosidl_service_type_support_t omo_r1_interfaces__srv__detail__color__rosidl_typesupport_introspection_c__Color_service_type_support_handle = {
  0,
  &omo_r1_interfaces__srv__detail__color__rosidl_typesupport_introspection_c__Color_service_members,
  get_service_typesupport_handle_function,
  &omo_r1_interfaces__srv__Color_Request__rosidl_typesupport_introspection_c__Color_Request_message_type_support_handle,
  &omo_r1_interfaces__srv__Color_Response__rosidl_typesupport_introspection_c__Color_Response_message_type_support_handle,
  &omo_r1_interfaces__srv__Color_Event__rosidl_typesupport_introspection_c__Color_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    omo_r1_interfaces,
    srv,
    Color
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    omo_r1_interfaces,
    srv,
    Color
  ),
  &omo_r1_interfaces__srv__Color__get_type_hash,
  &omo_r1_interfaces__srv__Color__get_type_description,
  &omo_r1_interfaces__srv__Color__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omo_r1_interfaces, srv, Color_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omo_r1_interfaces, srv, Color_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omo_r1_interfaces, srv, Color_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_omo_r1_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omo_r1_interfaces, srv, Color)(void) {
  if (!omo_r1_interfaces__srv__detail__color__rosidl_typesupport_introspection_c__Color_service_type_support_handle.typesupport_identifier) {
    omo_r1_interfaces__srv__detail__color__rosidl_typesupport_introspection_c__Color_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)omo_r1_interfaces__srv__detail__color__rosidl_typesupport_introspection_c__Color_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omo_r1_interfaces, srv, Color_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omo_r1_interfaces, srv, Color_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omo_r1_interfaces, srv, Color_Event)()->data;
  }

  return &omo_r1_interfaces__srv__detail__color__rosidl_typesupport_introspection_c__Color_service_type_support_handle;
}
