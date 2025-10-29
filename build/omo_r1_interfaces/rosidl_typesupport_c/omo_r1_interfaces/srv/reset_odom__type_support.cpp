// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from omo_r1_interfaces:srv/ResetOdom.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "omo_r1_interfaces/srv/detail/reset_odom__struct.h"
#include "omo_r1_interfaces/srv/detail/reset_odom__type_support.h"
#include "omo_r1_interfaces/srv/detail/reset_odom__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace omo_r1_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ResetOdom_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetOdom_Request_type_support_ids_t;

static const _ResetOdom_Request_type_support_ids_t _ResetOdom_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ResetOdom_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetOdom_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetOdom_Request_type_support_symbol_names_t _ResetOdom_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, omo_r1_interfaces, srv, ResetOdom_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omo_r1_interfaces, srv, ResetOdom_Request)),
  }
};

typedef struct _ResetOdom_Request_type_support_data_t
{
  void * data[2];
} _ResetOdom_Request_type_support_data_t;

static _ResetOdom_Request_type_support_data_t _ResetOdom_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetOdom_Request_message_typesupport_map = {
  2,
  "omo_r1_interfaces",
  &_ResetOdom_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ResetOdom_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ResetOdom_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ResetOdom_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetOdom_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &omo_r1_interfaces__srv__ResetOdom_Request__get_type_hash,
  &omo_r1_interfaces__srv__ResetOdom_Request__get_type_description,
  &omo_r1_interfaces__srv__ResetOdom_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace omo_r1_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, omo_r1_interfaces, srv, ResetOdom_Request)() {
  return &::omo_r1_interfaces::srv::rosidl_typesupport_c::ResetOdom_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "omo_r1_interfaces/srv/detail/reset_odom__struct.h"
// already included above
// #include "omo_r1_interfaces/srv/detail/reset_odom__type_support.h"
// already included above
// #include "omo_r1_interfaces/srv/detail/reset_odom__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace omo_r1_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ResetOdom_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetOdom_Response_type_support_ids_t;

static const _ResetOdom_Response_type_support_ids_t _ResetOdom_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ResetOdom_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetOdom_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetOdom_Response_type_support_symbol_names_t _ResetOdom_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, omo_r1_interfaces, srv, ResetOdom_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omo_r1_interfaces, srv, ResetOdom_Response)),
  }
};

typedef struct _ResetOdom_Response_type_support_data_t
{
  void * data[2];
} _ResetOdom_Response_type_support_data_t;

static _ResetOdom_Response_type_support_data_t _ResetOdom_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetOdom_Response_message_typesupport_map = {
  2,
  "omo_r1_interfaces",
  &_ResetOdom_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ResetOdom_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ResetOdom_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ResetOdom_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetOdom_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &omo_r1_interfaces__srv__ResetOdom_Response__get_type_hash,
  &omo_r1_interfaces__srv__ResetOdom_Response__get_type_description,
  &omo_r1_interfaces__srv__ResetOdom_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace omo_r1_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, omo_r1_interfaces, srv, ResetOdom_Response)() {
  return &::omo_r1_interfaces::srv::rosidl_typesupport_c::ResetOdom_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "omo_r1_interfaces/srv/detail/reset_odom__struct.h"
// already included above
// #include "omo_r1_interfaces/srv/detail/reset_odom__type_support.h"
// already included above
// #include "omo_r1_interfaces/srv/detail/reset_odom__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace omo_r1_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ResetOdom_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetOdom_Event_type_support_ids_t;

static const _ResetOdom_Event_type_support_ids_t _ResetOdom_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ResetOdom_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetOdom_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetOdom_Event_type_support_symbol_names_t _ResetOdom_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, omo_r1_interfaces, srv, ResetOdom_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omo_r1_interfaces, srv, ResetOdom_Event)),
  }
};

typedef struct _ResetOdom_Event_type_support_data_t
{
  void * data[2];
} _ResetOdom_Event_type_support_data_t;

static _ResetOdom_Event_type_support_data_t _ResetOdom_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetOdom_Event_message_typesupport_map = {
  2,
  "omo_r1_interfaces",
  &_ResetOdom_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ResetOdom_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ResetOdom_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ResetOdom_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetOdom_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &omo_r1_interfaces__srv__ResetOdom_Event__get_type_hash,
  &omo_r1_interfaces__srv__ResetOdom_Event__get_type_description,
  &omo_r1_interfaces__srv__ResetOdom_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace omo_r1_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, omo_r1_interfaces, srv, ResetOdom_Event)() {
  return &::omo_r1_interfaces::srv::rosidl_typesupport_c::ResetOdom_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "omo_r1_interfaces/srv/detail/reset_odom__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace omo_r1_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _ResetOdom_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ResetOdom_type_support_ids_t;

static const _ResetOdom_type_support_ids_t _ResetOdom_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ResetOdom_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ResetOdom_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ResetOdom_type_support_symbol_names_t _ResetOdom_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, omo_r1_interfaces, srv, ResetOdom)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, omo_r1_interfaces, srv, ResetOdom)),
  }
};

typedef struct _ResetOdom_type_support_data_t
{
  void * data[2];
} _ResetOdom_type_support_data_t;

static _ResetOdom_type_support_data_t _ResetOdom_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ResetOdom_service_typesupport_map = {
  2,
  "omo_r1_interfaces",
  &_ResetOdom_service_typesupport_ids.typesupport_identifier[0],
  &_ResetOdom_service_typesupport_symbol_names.symbol_name[0],
  &_ResetOdom_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ResetOdom_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ResetOdom_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ResetOdom_Request_message_type_support_handle,
  &ResetOdom_Response_message_type_support_handle,
  &ResetOdom_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    omo_r1_interfaces,
    srv,
    ResetOdom
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    omo_r1_interfaces,
    srv,
    ResetOdom
  ),
  &omo_r1_interfaces__srv__ResetOdom__get_type_hash,
  &omo_r1_interfaces__srv__ResetOdom__get_type_description,
  &omo_r1_interfaces__srv__ResetOdom__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace omo_r1_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, omo_r1_interfaces, srv, ResetOdom)() {
  return &::omo_r1_interfaces::srv::rosidl_typesupport_c::ResetOdom_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
