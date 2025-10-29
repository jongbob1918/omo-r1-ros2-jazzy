// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from omo_r1_interfaces:srv/Battery.idl
// generated code does not contain a copyright notice

#include "omo_r1_interfaces/srv/detail/battery__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_omo_r1_interfaces
const rosidl_type_hash_t *
omo_r1_interfaces__srv__Battery__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x03, 0x89, 0xeb, 0xfc, 0x6f, 0xf8, 0xb2, 0x68,
      0x43, 0xb6, 0x12, 0x5a, 0x45, 0xbf, 0xa5, 0x2f,
      0xd6, 0x81, 0x4f, 0xfb, 0x86, 0x95, 0xc1, 0xbe,
      0xcc, 0x1b, 0x01, 0xe9, 0x8b, 0x66, 0x08, 0xec,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_omo_r1_interfaces
const rosidl_type_hash_t *
omo_r1_interfaces__srv__Battery_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb2, 0x41, 0x8e, 0xcc, 0x26, 0xef, 0x4e, 0x5c,
      0x1f, 0x70, 0x8e, 0xc4, 0xad, 0xb6, 0xb3, 0xf9,
      0x2a, 0xa2, 0xe5, 0xe3, 0x8e, 0x71, 0xdc, 0x24,
      0xe1, 0x76, 0xd2, 0x28, 0xeb, 0xfc, 0xf8, 0x8f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_omo_r1_interfaces
const rosidl_type_hash_t *
omo_r1_interfaces__srv__Battery_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x06, 0x6e, 0xd9, 0x8c, 0x5b, 0xd5, 0x04, 0xc5,
      0x1a, 0xa2, 0xb1, 0xbb, 0xd7, 0x5d, 0x68, 0x6c,
      0x5c, 0x8e, 0x02, 0x31, 0xdc, 0xe8, 0x51, 0x37,
      0x76, 0x81, 0x84, 0x1e, 0x64, 0xcd, 0x48, 0x84,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_omo_r1_interfaces
const rosidl_type_hash_t *
omo_r1_interfaces__srv__Battery_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x32, 0x52, 0xd8, 0x2e, 0xe1, 0xd1, 0x70, 0x9c,
      0xe1, 0xc9, 0x43, 0xe0, 0x48, 0xc7, 0x36, 0xb7,
      0x62, 0x1a, 0x69, 0x62, 0x3c, 0x91, 0x43, 0xb7,
      0xc3, 0xc9, 0x55, 0x39, 0x5c, 0x47, 0x3e, 0xf9,
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

static char omo_r1_interfaces__srv__Battery__TYPE_NAME[] = "omo_r1_interfaces/srv/Battery";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char omo_r1_interfaces__srv__Battery_Event__TYPE_NAME[] = "omo_r1_interfaces/srv/Battery_Event";
static char omo_r1_interfaces__srv__Battery_Request__TYPE_NAME[] = "omo_r1_interfaces/srv/Battery_Request";
static char omo_r1_interfaces__srv__Battery_Response__TYPE_NAME[] = "omo_r1_interfaces/srv/Battery_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char omo_r1_interfaces__srv__Battery__FIELD_NAME__request_message[] = "request_message";
static char omo_r1_interfaces__srv__Battery__FIELD_NAME__response_message[] = "response_message";
static char omo_r1_interfaces__srv__Battery__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field omo_r1_interfaces__srv__Battery__FIELDS[] = {
  {
    {omo_r1_interfaces__srv__Battery__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omo_r1_interfaces__srv__Battery_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Battery__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omo_r1_interfaces__srv__Battery_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Battery__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {omo_r1_interfaces__srv__Battery_Event__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription omo_r1_interfaces__srv__Battery__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Battery_Event__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Battery_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Battery_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omo_r1_interfaces__srv__Battery__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omo_r1_interfaces__srv__Battery__TYPE_NAME, 29, 29},
      {omo_r1_interfaces__srv__Battery__FIELDS, 3, 3},
    },
    {omo_r1_interfaces__srv__Battery__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = omo_r1_interfaces__srv__Battery_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = omo_r1_interfaces__srv__Battery_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = omo_r1_interfaces__srv__Battery_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char omo_r1_interfaces__srv__Battery_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field omo_r1_interfaces__srv__Battery_Request__FIELDS[] = {
  {
    {omo_r1_interfaces__srv__Battery_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
omo_r1_interfaces__srv__Battery_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omo_r1_interfaces__srv__Battery_Request__TYPE_NAME, 37, 37},
      {omo_r1_interfaces__srv__Battery_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char omo_r1_interfaces__srv__Battery_Response__FIELD_NAME__volt[] = "volt";
static char omo_r1_interfaces__srv__Battery_Response__FIELD_NAME__soc[] = "soc";
static char omo_r1_interfaces__srv__Battery_Response__FIELD_NAME__current[] = "current";

static rosidl_runtime_c__type_description__Field omo_r1_interfaces__srv__Battery_Response__FIELDS[] = {
  {
    {omo_r1_interfaces__srv__Battery_Response__FIELD_NAME__volt, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Battery_Response__FIELD_NAME__soc, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Battery_Response__FIELD_NAME__current, 7, 7},
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
omo_r1_interfaces__srv__Battery_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omo_r1_interfaces__srv__Battery_Response__TYPE_NAME, 38, 38},
      {omo_r1_interfaces__srv__Battery_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char omo_r1_interfaces__srv__Battery_Event__FIELD_NAME__info[] = "info";
static char omo_r1_interfaces__srv__Battery_Event__FIELD_NAME__request[] = "request";
static char omo_r1_interfaces__srv__Battery_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field omo_r1_interfaces__srv__Battery_Event__FIELDS[] = {
  {
    {omo_r1_interfaces__srv__Battery_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Battery_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {omo_r1_interfaces__srv__Battery_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Battery_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {omo_r1_interfaces__srv__Battery_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription omo_r1_interfaces__srv__Battery_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Battery_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {omo_r1_interfaces__srv__Battery_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
omo_r1_interfaces__srv__Battery_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {omo_r1_interfaces__srv__Battery_Event__TYPE_NAME, 35, 35},
      {omo_r1_interfaces__srv__Battery_Event__FIELDS, 3, 3},
    },
    {omo_r1_interfaces__srv__Battery_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = omo_r1_interfaces__srv__Battery_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = omo_r1_interfaces__srv__Battery_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "float64 volt\n"
  "float64 soc\n"
  "float64 current";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
omo_r1_interfaces__srv__Battery__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omo_r1_interfaces__srv__Battery__TYPE_NAME, 29, 29},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 44, 44},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
omo_r1_interfaces__srv__Battery_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omo_r1_interfaces__srv__Battery_Request__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
omo_r1_interfaces__srv__Battery_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omo_r1_interfaces__srv__Battery_Response__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
omo_r1_interfaces__srv__Battery_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {omo_r1_interfaces__srv__Battery_Event__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omo_r1_interfaces__srv__Battery__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omo_r1_interfaces__srv__Battery__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *omo_r1_interfaces__srv__Battery_Event__get_individual_type_description_source(NULL);
    sources[3] = *omo_r1_interfaces__srv__Battery_Request__get_individual_type_description_source(NULL);
    sources[4] = *omo_r1_interfaces__srv__Battery_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omo_r1_interfaces__srv__Battery_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omo_r1_interfaces__srv__Battery_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omo_r1_interfaces__srv__Battery_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omo_r1_interfaces__srv__Battery_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
omo_r1_interfaces__srv__Battery_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *omo_r1_interfaces__srv__Battery_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *omo_r1_interfaces__srv__Battery_Request__get_individual_type_description_source(NULL);
    sources[3] = *omo_r1_interfaces__srv__Battery_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
