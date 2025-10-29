// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from omo_r1_interfaces:srv/Calg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "omo_r1_interfaces/srv/calg.h"


#ifndef OMO_R1_INTERFACES__SRV__DETAIL__CALG__STRUCT_H_
#define OMO_R1_INTERFACES__SRV__DETAIL__CALG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Calg in the package omo_r1_interfaces.
typedef struct omo_r1_interfaces__srv__Calg_Request
{
  uint8_t structure_needs_at_least_one_member;
} omo_r1_interfaces__srv__Calg_Request;

// Struct for a sequence of omo_r1_interfaces__srv__Calg_Request.
typedef struct omo_r1_interfaces__srv__Calg_Request__Sequence
{
  omo_r1_interfaces__srv__Calg_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omo_r1_interfaces__srv__Calg_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/Calg in the package omo_r1_interfaces.
typedef struct omo_r1_interfaces__srv__Calg_Response
{
  uint8_t structure_needs_at_least_one_member;
} omo_r1_interfaces__srv__Calg_Response;

// Struct for a sequence of omo_r1_interfaces__srv__Calg_Response.
typedef struct omo_r1_interfaces__srv__Calg_Response__Sequence
{
  omo_r1_interfaces__srv__Calg_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omo_r1_interfaces__srv__Calg_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  omo_r1_interfaces__srv__Calg_Event__request__MAX_SIZE = 1
};
// response
enum
{
  omo_r1_interfaces__srv__Calg_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Calg in the package omo_r1_interfaces.
typedef struct omo_r1_interfaces__srv__Calg_Event
{
  service_msgs__msg__ServiceEventInfo info;
  omo_r1_interfaces__srv__Calg_Request__Sequence request;
  omo_r1_interfaces__srv__Calg_Response__Sequence response;
} omo_r1_interfaces__srv__Calg_Event;

// Struct for a sequence of omo_r1_interfaces__srv__Calg_Event.
typedef struct omo_r1_interfaces__srv__Calg_Event__Sequence
{
  omo_r1_interfaces__srv__Calg_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} omo_r1_interfaces__srv__Calg_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OMO_R1_INTERFACES__SRV__DETAIL__CALG__STRUCT_H_
