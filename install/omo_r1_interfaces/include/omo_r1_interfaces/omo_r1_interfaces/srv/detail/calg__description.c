// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from omo_r1_interfaces:srv/Calg.idl
// generated code does not contain a copyright notice

#include "omo_r1_interfaces/srv/detail/calg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_omo_r1_interfaces
const rosidl_type_hash_t *
omo_r1_interfaces__srv__Calg__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2c, 0x12, 0x93, 0xd2, 0x7e, 0xc6, 0x30, 0x4a,
      0x68, 0xb6, 0x2b, 0x11, 0xe9, 0x77, 0xd4, 0xac,
      0xd2, 0xa5, 0xd1, 0x32, 0xdd, 0x17, 0x69, 0xca,
      0x33, 0x47, 0x52, 0x10, 0x06, 0xea, 0xbb, 0x9e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_omo_r1_interfaces
const rosidl_type_hash_t *
omo_r1_interfaces__srv__Calg_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0b, 0xc7, 0xf4, 0x66, 0x16, 0x76, 0x0d, 0x4e,
      0x78, 0x85, 0xd3, 0x9c, 0xa7, 0x1a, 0x88, 0x57,
      0xfe, 0xa4, 0x62, 0x4d, 0x74, 0x67, 0xf3, 0x74,
      0x70, 0xa3, 0x39, 0xc5, 0x10, 0x8b, 0xb5, 0xf4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_omo_r1_interfaces
const rosidl_type_hash_t *
omo_r1_interfaces__srv__Calg_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcd, 0xb2, 0xcc, 0x31, 0xb1, 0xc0, 0x6b, 0x5a,
      0x28, 0xa4, 0x2f, 0xae, 0x9a, 0x0b, 0x3f, 0x34,
      0x1f, 0xc8, 0xff, 0x38, 0xcf, 0x7b, 0xec, 0x21,
      0x99, 0xd7, 0x75, 0xd7, 0x34, 0x38, 0x1f, 0xe4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_omo_r1_interfaces
const rosidl_type_hash_t *
omo_r1_interfaces__srv__Calg_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdd, 0xa6, 0x1b, 0x0a, 0xe5, 0x4b, 0x73, 0x82,
      0x1d, 0x35, 0x0e, 0x65, 0x3f, 0xdd, 0x80, 0xa7,
      0x34, 0x53, 0xa3, 0x38, 0x3a, 0x2e, 0xab, 0xbd,
      0x50, 0xd2, 0xfc, 0x8b, 0x06, 0xaa, 0x37, 0xbe,
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

static char omo_r1_interfaces__srv__Calg__TYPE_NAME[] = "omo_r1_interfaces/srv/Calg";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char omo_r1_interfaces__srv__Calg_Event__TYPE_NAME[] = "omo_r1_interfaces/srv/Calg_Event";
static char omo_r1_interfaces__srv__Calg_Request__TYPE_NAME[] = "omo_r1_interfaces/srv/Calg_Request";
static char omo_r1_interfaces__srv__Calg_Response__TYPE_NAME[] = "omo_r1_interfaces/srv/Calg_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char omo_r1_interfaces__srv__Calg__FIELD_NAME__request_message[] = "request_message";
static char omo_r1_interfaces__srv__Calg__FIELD_NAME__response_message[] = "response_message";
static char omo_r1_interfaces__srv__Calg__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field omo_r1_interfaces__srv__Calg__FIELDS[] = {
  {
    {omo_r1_interfaces__srv__Calg__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omo_r1_interfaces__srv__Calg_Request__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Calg__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omo_r1_interfaces__srv__Calg_Response__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Calg__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omo_r1_interfaces__srv__Calg_Event__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription omo_r1_interfaces__srv__Calg__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Calg_Event__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Calg_Request__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Calg_Response__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omo_r1_interfaces__srv__Calg__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omo_r1_interfaces__srv__Calg__TYPE_NAME, 26, 26},
      {omo_r1_interfaces__srv__Calg__FIELDS, 3, 3},
    },
    {omo_r1_interfaces__srv__Calg__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = omo_r1_interfaces__srv__Calg_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = omo_r1_interfaces__srv__Calg_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = omo_r1_interfaces__srv__Calg_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char omo_r1_interfaces__srv__Calg_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field omo_r1_interfaces__srv__Calg_Request__FIELDS[] = {
  {
    {omo_r1_interfaces__srv__Calg_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
omo_r1_interfaces__srv__Calg_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omo_r1_interfaces__srv__Calg_Request__TYPE_NAME, 34, 34},
      {omo_r1_interfaces__srv__Calg_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char omo_r1_interfaces__srv__Calg_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field omo_r1_interfaces__srv__Calg_Response__FIELDS[] = {
  {
    {omo_r1_interfaces__srv__Calg_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
omo_r1_interfaces__srv__Calg_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omo_r1_interfaces__srv__Calg_Response__TYPE_NAME, 35, 35},
      {omo_r1_interfaces__srv__Calg_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char omo_r1_interfaces__srv__Calg_Event__FIELD_NAME__info[] = "info";
static char omo_r1_interfaces__srv__Calg_Event__FIELD_NAME__request[] = "request";
static char omo_r1_interfaces__srv__Calg_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field omo_r1_interfaces__srv__Calg_Event__FIELDS[] = {
  {
    {omo_r1_interfaces__srv__Calg_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Calg_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {omo_r1_interfaces__srv__Calg_Request__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Calg_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {omo_r1_interfaces__srv__Calg_Response__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription omo_r1_interfaces__srv__Calg_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Calg_Request__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Calg_Response__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omo_r1_interfaces__srv__Calg_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omo_r1_interfaces__srv__Calg_Event__TYPE_NAME, 32, 32},
      {omo_r1_interfaces__srv__Calg_Event__FIELDS, 3, 3},
    },
    {omo_r1_interfaces__srv__Calg_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = omo_r1_interfaces__srv__Calg_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = omo_r1_interfaces__srv__Calg_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "---";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
omo_r1_interfaces__srv__Calg__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omo_r1_interfaces__srv__Calg__TYPE_NAME, 26, 26},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 5, 5},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
omo_r1_interfaces__srv__Calg_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omo_r1_interfaces__srv__Calg_Request__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
omo_r1_interfaces__srv__Calg_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omo_r1_interfaces__srv__Calg_Response__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
omo_r1_interfaces__srv__Calg_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omo_r1_interfaces__srv__Calg_Event__TYPE_NAME, 32, 32},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omo_r1_interfaces__srv__Calg__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omo_r1_interfaces__srv__Calg__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *omo_r1_interfaces__srv__Calg_Event__get_individual_type_description_source(NULL);
    sources[3] = *omo_r1_interfaces__srv__Calg_Request__get_individual_type_description_source(NULL);
    sources[4] = *omo_r1_interfaces__srv__Calg_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omo_r1_interfaces__srv__Calg_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omo_r1_interfaces__srv__Calg_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omo_r1_interfaces__srv__Calg_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omo_r1_interfaces__srv__Calg_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omo_r1_interfaces__srv__Calg_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omo_r1_interfaces__srv__Calg_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *omo_r1_interfaces__srv__Calg_Request__get_individual_type_description_source(NULL);
    sources[3] = *omo_r1_interfaces__srv__Calg_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
