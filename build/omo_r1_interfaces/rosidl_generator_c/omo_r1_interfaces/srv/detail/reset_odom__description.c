// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from omo_r1_interfaces:srv/ResetOdom.idl
// generated code does not contain a copyright notice

#include "omo_r1_interfaces/srv/detail/reset_odom__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_omo_r1_interfaces
const rosidl_type_hash_t *
omo_r1_interfaces__srv__ResetOdom__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x54, 0xdb, 0x47, 0xf8, 0x3a, 0x13, 0xd1, 0x30,
      0xc2, 0xa3, 0xfc, 0xd4, 0x5a, 0x40, 0xd8, 0x18,
      0xff, 0x7d, 0x12, 0x5b, 0x48, 0xe8, 0xc2, 0xbe,
      0x2f, 0x4f, 0x52, 0x4d, 0x78, 0xbc, 0xae, 0x59,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_omo_r1_interfaces
const rosidl_type_hash_t *
omo_r1_interfaces__srv__ResetOdom_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbc, 0xc2, 0x82, 0x11, 0x95, 0x63, 0x47, 0x2e,
      0xb0, 0x0e, 0xe6, 0xd4, 0xf9, 0x7f, 0x2d, 0xd0,
      0x34, 0x5e, 0xee, 0xec, 0x6e, 0xd7, 0x6f, 0xf1,
      0x91, 0x33, 0xbd, 0xec, 0x26, 0x5a, 0x8d, 0x59,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_omo_r1_interfaces
const rosidl_type_hash_t *
omo_r1_interfaces__srv__ResetOdom_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdf, 0xbe, 0x63, 0x05, 0xe0, 0x50, 0x75, 0x19,
      0x41, 0xa7, 0x91, 0xb0, 0x4c, 0x19, 0x73, 0xbb,
      0x3f, 0x98, 0xe3, 0x43, 0xa2, 0x8f, 0xa5, 0x7e,
      0xbd, 0x7e, 0xad, 0x6f, 0x64, 0xa0, 0x77, 0x2d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_omo_r1_interfaces
const rosidl_type_hash_t *
omo_r1_interfaces__srv__ResetOdom_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9f, 0x37, 0x48, 0x5d, 0x3d, 0x23, 0xbb, 0xb9,
      0x64, 0x60, 0x33, 0x1a, 0x9c, 0x9a, 0x99, 0x03,
      0x96, 0x94, 0x4b, 0xab, 0x18, 0xa1, 0xf8, 0x87,
      0x0e, 0xf9, 0xd5, 0x0b, 0x10, 0xc9, 0x52, 0x0c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char omo_r1_interfaces__srv__ResetOdom__TYPE_NAME[] = "omo_r1_interfaces/srv/ResetOdom";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char omo_r1_interfaces__srv__ResetOdom_Event__TYPE_NAME[] = "omo_r1_interfaces/srv/ResetOdom_Event";
static char omo_r1_interfaces__srv__ResetOdom_Request__TYPE_NAME[] = "omo_r1_interfaces/srv/ResetOdom_Request";
static char omo_r1_interfaces__srv__ResetOdom_Response__TYPE_NAME[] = "omo_r1_interfaces/srv/ResetOdom_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char omo_r1_interfaces__srv__ResetOdom__FIELD_NAME__request_message[] = "request_message";
static char omo_r1_interfaces__srv__ResetOdom__FIELD_NAME__response_message[] = "response_message";
static char omo_r1_interfaces__srv__ResetOdom__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field omo_r1_interfaces__srv__ResetOdom__FIELDS[] = {
  {
    {omo_r1_interfaces__srv__ResetOdom__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omo_r1_interfaces__srv__ResetOdom_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__ResetOdom__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omo_r1_interfaces__srv__ResetOdom_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__ResetOdom__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omo_r1_interfaces__srv__ResetOdom_Event__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription omo_r1_interfaces__srv__ResetOdom__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__ResetOdom_Event__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__ResetOdom_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__ResetOdom_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omo_r1_interfaces__srv__ResetOdom__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omo_r1_interfaces__srv__ResetOdom__TYPE_NAME, 31, 31},
      {omo_r1_interfaces__srv__ResetOdom__FIELDS, 3, 3},
    },
    {omo_r1_interfaces__srv__ResetOdom__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = omo_r1_interfaces__srv__ResetOdom_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = omo_r1_interfaces__srv__ResetOdom_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = omo_r1_interfaces__srv__ResetOdom_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char omo_r1_interfaces__srv__ResetOdom_Request__FIELD_NAME__x[] = "x";
static char omo_r1_interfaces__srv__ResetOdom_Request__FIELD_NAME__y[] = "y";
static char omo_r1_interfaces__srv__ResetOdom_Request__FIELD_NAME__theta[] = "theta";

static rosidl_runtime_c__type_description__Field omo_r1_interfaces__srv__ResetOdom_Request__FIELDS[] = {
  {
    {omo_r1_interfaces__srv__ResetOdom_Request__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__ResetOdom_Request__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__ResetOdom_Request__FIELD_NAME__theta, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omo_r1_interfaces__srv__ResetOdom_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omo_r1_interfaces__srv__ResetOdom_Request__TYPE_NAME, 39, 39},
      {omo_r1_interfaces__srv__ResetOdom_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char omo_r1_interfaces__srv__ResetOdom_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field omo_r1_interfaces__srv__ResetOdom_Response__FIELDS[] = {
  {
    {omo_r1_interfaces__srv__ResetOdom_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omo_r1_interfaces__srv__ResetOdom_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omo_r1_interfaces__srv__ResetOdom_Response__TYPE_NAME, 40, 40},
      {omo_r1_interfaces__srv__ResetOdom_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char omo_r1_interfaces__srv__ResetOdom_Event__FIELD_NAME__info[] = "info";
static char omo_r1_interfaces__srv__ResetOdom_Event__FIELD_NAME__request[] = "request";
static char omo_r1_interfaces__srv__ResetOdom_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field omo_r1_interfaces__srv__ResetOdom_Event__FIELDS[] = {
  {
    {omo_r1_interfaces__srv__ResetOdom_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__ResetOdom_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {omo_r1_interfaces__srv__ResetOdom_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__ResetOdom_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {omo_r1_interfaces__srv__ResetOdom_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription omo_r1_interfaces__srv__ResetOdom_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__ResetOdom_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__ResetOdom_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omo_r1_interfaces__srv__ResetOdom_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omo_r1_interfaces__srv__ResetOdom_Event__TYPE_NAME, 37, 37},
      {omo_r1_interfaces__srv__ResetOdom_Event__FIELDS, 3, 3},
    },
    {omo_r1_interfaces__srv__ResetOdom_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = omo_r1_interfaces__srv__ResetOdom_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = omo_r1_interfaces__srv__ResetOdom_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 x\n"
  "float64 y\n"
  "float64 theta\n"
  "---";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
omo_r1_interfaces__srv__ResetOdom__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omo_r1_interfaces__srv__ResetOdom__TYPE_NAME, 31, 31},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 38, 38},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
omo_r1_interfaces__srv__ResetOdom_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omo_r1_interfaces__srv__ResetOdom_Request__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
omo_r1_interfaces__srv__ResetOdom_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omo_r1_interfaces__srv__ResetOdom_Response__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
omo_r1_interfaces__srv__ResetOdom_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omo_r1_interfaces__srv__ResetOdom_Event__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omo_r1_interfaces__srv__ResetOdom__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omo_r1_interfaces__srv__ResetOdom__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *omo_r1_interfaces__srv__ResetOdom_Event__get_individual_type_description_source(NULL);
    sources[3] = *omo_r1_interfaces__srv__ResetOdom_Request__get_individual_type_description_source(NULL);
    sources[4] = *omo_r1_interfaces__srv__ResetOdom_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omo_r1_interfaces__srv__ResetOdom_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omo_r1_interfaces__srv__ResetOdom_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omo_r1_interfaces__srv__ResetOdom_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omo_r1_interfaces__srv__ResetOdom_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omo_r1_interfaces__srv__ResetOdom_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omo_r1_interfaces__srv__ResetOdom_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *omo_r1_interfaces__srv__ResetOdom_Request__get_individual_type_description_source(NULL);
    sources[3] = *omo_r1_interfaces__srv__ResetOdom_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
