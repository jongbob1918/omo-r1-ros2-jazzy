// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from omo_r1_interfaces:srv/Onoff.idl
// generated code does not contain a copyright notice

#include "omo_r1_interfaces/srv/detail/onoff__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_omo_r1_interfaces
const rosidl_type_hash_t *
omo_r1_interfaces__srv__Onoff__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd5, 0x04, 0x12, 0xd8, 0xa5, 0xae, 0xd8, 0x19,
      0x4b, 0x9b, 0x57, 0xb1, 0x84, 0x51, 0x14, 0x24,
      0xf1, 0xed, 0x06, 0x0b, 0x6e, 0xd3, 0xf0, 0x9b,
      0x75, 0xdb, 0xda, 0x90, 0xad, 0xbd, 0x40, 0xc5,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_omo_r1_interfaces
const rosidl_type_hash_t *
omo_r1_interfaces__srv__Onoff_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0b, 0x9c, 0x6b, 0xd0, 0x6e, 0xb3, 0xd0, 0xf5,
      0xdc, 0x99, 0xb8, 0xb8, 0xe9, 0x26, 0x7a, 0x28,
      0x9a, 0xa6, 0x73, 0x41, 0x30, 0xab, 0x0f, 0xcb,
      0xf9, 0x70, 0xb1, 0x64, 0x75, 0x49, 0xcc, 0x91,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_omo_r1_interfaces
const rosidl_type_hash_t *
omo_r1_interfaces__srv__Onoff_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3c, 0x21, 0x5d, 0x2f, 0x79, 0xf3, 0x30, 0x61,
      0xcf, 0x89, 0xc6, 0x59, 0x04, 0x00, 0xb7, 0x7b,
      0xe8, 0x1a, 0x3d, 0xd9, 0x11, 0x7a, 0xbd, 0xff,
      0xce, 0xae, 0x3d, 0x2a, 0x97, 0x8a, 0xc0, 0x6f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_omo_r1_interfaces
const rosidl_type_hash_t *
omo_r1_interfaces__srv__Onoff_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc4, 0x81, 0x86, 0xdc, 0x84, 0x73, 0x73, 0xf3,
      0x3a, 0x96, 0xaa, 0x1b, 0x57, 0x2a, 0xb6, 0x45,
      0x71, 0x4d, 0x6a, 0xd0, 0x75, 0x7d, 0x0c, 0x06,
      0x74, 0x41, 0x52, 0xf8, 0xbb, 0xf5, 0x19, 0xc6,
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

static char omo_r1_interfaces__srv__Onoff__TYPE_NAME[] = "omo_r1_interfaces/srv/Onoff";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char omo_r1_interfaces__srv__Onoff_Event__TYPE_NAME[] = "omo_r1_interfaces/srv/Onoff_Event";
static char omo_r1_interfaces__srv__Onoff_Request__TYPE_NAME[] = "omo_r1_interfaces/srv/Onoff_Request";
static char omo_r1_interfaces__srv__Onoff_Response__TYPE_NAME[] = "omo_r1_interfaces/srv/Onoff_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char omo_r1_interfaces__srv__Onoff__FIELD_NAME__request_message[] = "request_message";
static char omo_r1_interfaces__srv__Onoff__FIELD_NAME__response_message[] = "response_message";
static char omo_r1_interfaces__srv__Onoff__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field omo_r1_interfaces__srv__Onoff__FIELDS[] = {
  {
    {omo_r1_interfaces__srv__Onoff__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omo_r1_interfaces__srv__Onoff_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Onoff__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omo_r1_interfaces__srv__Onoff_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Onoff__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omo_r1_interfaces__srv__Onoff_Event__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription omo_r1_interfaces__srv__Onoff__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Onoff_Event__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Onoff_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Onoff_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omo_r1_interfaces__srv__Onoff__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omo_r1_interfaces__srv__Onoff__TYPE_NAME, 27, 27},
      {omo_r1_interfaces__srv__Onoff__FIELDS, 3, 3},
    },
    {omo_r1_interfaces__srv__Onoff__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = omo_r1_interfaces__srv__Onoff_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = omo_r1_interfaces__srv__Onoff_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = omo_r1_interfaces__srv__Onoff_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char omo_r1_interfaces__srv__Onoff_Request__FIELD_NAME__set[] = "set";

static rosidl_runtime_c__type_description__Field omo_r1_interfaces__srv__Onoff_Request__FIELDS[] = {
  {
    {omo_r1_interfaces__srv__Onoff_Request__FIELD_NAME__set, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omo_r1_interfaces__srv__Onoff_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omo_r1_interfaces__srv__Onoff_Request__TYPE_NAME, 35, 35},
      {omo_r1_interfaces__srv__Onoff_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char omo_r1_interfaces__srv__Onoff_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field omo_r1_interfaces__srv__Onoff_Response__FIELDS[] = {
  {
    {omo_r1_interfaces__srv__Onoff_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
omo_r1_interfaces__srv__Onoff_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omo_r1_interfaces__srv__Onoff_Response__TYPE_NAME, 36, 36},
      {omo_r1_interfaces__srv__Onoff_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char omo_r1_interfaces__srv__Onoff_Event__FIELD_NAME__info[] = "info";
static char omo_r1_interfaces__srv__Onoff_Event__FIELD_NAME__request[] = "request";
static char omo_r1_interfaces__srv__Onoff_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field omo_r1_interfaces__srv__Onoff_Event__FIELDS[] = {
  {
    {omo_r1_interfaces__srv__Onoff_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Onoff_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {omo_r1_interfaces__srv__Onoff_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Onoff_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {omo_r1_interfaces__srv__Onoff_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription omo_r1_interfaces__srv__Onoff_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Onoff_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Onoff_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omo_r1_interfaces__srv__Onoff_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omo_r1_interfaces__srv__Onoff_Event__TYPE_NAME, 33, 33},
      {omo_r1_interfaces__srv__Onoff_Event__FIELDS, 3, 3},
    },
    {omo_r1_interfaces__srv__Onoff_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = omo_r1_interfaces__srv__Onoff_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = omo_r1_interfaces__srv__Onoff_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool set\n"
  "---";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
omo_r1_interfaces__srv__Onoff__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omo_r1_interfaces__srv__Onoff__TYPE_NAME, 27, 27},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 13, 13},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
omo_r1_interfaces__srv__Onoff_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omo_r1_interfaces__srv__Onoff_Request__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
omo_r1_interfaces__srv__Onoff_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omo_r1_interfaces__srv__Onoff_Response__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
omo_r1_interfaces__srv__Onoff_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omo_r1_interfaces__srv__Onoff_Event__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omo_r1_interfaces__srv__Onoff__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omo_r1_interfaces__srv__Onoff__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *omo_r1_interfaces__srv__Onoff_Event__get_individual_type_description_source(NULL);
    sources[3] = *omo_r1_interfaces__srv__Onoff_Request__get_individual_type_description_source(NULL);
    sources[4] = *omo_r1_interfaces__srv__Onoff_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omo_r1_interfaces__srv__Onoff_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omo_r1_interfaces__srv__Onoff_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omo_r1_interfaces__srv__Onoff_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omo_r1_interfaces__srv__Onoff_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omo_r1_interfaces__srv__Onoff_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omo_r1_interfaces__srv__Onoff_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *omo_r1_interfaces__srv__Onoff_Request__get_individual_type_description_source(NULL);
    sources[3] = *omo_r1_interfaces__srv__Onoff_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
