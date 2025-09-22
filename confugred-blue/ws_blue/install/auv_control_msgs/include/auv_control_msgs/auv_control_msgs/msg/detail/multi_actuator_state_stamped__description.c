// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from auv_control_msgs:msg/MultiActuatorStateStamped.idl
// generated code does not contain a copyright notice

#include "auv_control_msgs/msg/detail/multi_actuator_state_stamped__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_auv_control_msgs
const rosidl_type_hash_t *
auv_control_msgs__msg__MultiActuatorStateStamped__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xea, 0x84, 0x86, 0x86, 0xe5, 0x75, 0xfe, 0x52,
      0xa1, 0xf1, 0x57, 0x90, 0x7f, 0xc2, 0xab, 0x6b,
      0x16, 0x2c, 0xaf, 0x3c, 0x8a, 0xaa, 0xbb, 0x44,
      0xa3, 0x0c, 0x5e, 0xcf, 0x85, 0xf5, 0x3c, 0x10,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char auv_control_msgs__msg__MultiActuatorStateStamped__TYPE_NAME[] = "auv_control_msgs/msg/MultiActuatorStateStamped";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char auv_control_msgs__msg__MultiActuatorStateStamped__FIELD_NAME__header[] = "header";
static char auv_control_msgs__msg__MultiActuatorStateStamped__FIELD_NAME__reference_names[] = "reference_names";
static char auv_control_msgs__msg__MultiActuatorStateStamped__FIELD_NAME__reference[] = "reference";
static char auv_control_msgs__msg__MultiActuatorStateStamped__FIELD_NAME__output_names[] = "output_names";
static char auv_control_msgs__msg__MultiActuatorStateStamped__FIELD_NAME__output[] = "output";
static char auv_control_msgs__msg__MultiActuatorStateStamped__FIELD_NAME__time_step[] = "time_step";

static rosidl_runtime_c__type_description__Field auv_control_msgs__msg__MultiActuatorStateStamped__FIELDS[] = {
  {
    {auv_control_msgs__msg__MultiActuatorStateStamped__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {auv_control_msgs__msg__MultiActuatorStateStamped__FIELD_NAME__reference_names, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {auv_control_msgs__msg__MultiActuatorStateStamped__FIELD_NAME__reference, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {auv_control_msgs__msg__MultiActuatorStateStamped__FIELD_NAME__output_names, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {auv_control_msgs__msg__MultiActuatorStateStamped__FIELD_NAME__output, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {auv_control_msgs__msg__MultiActuatorStateStamped__FIELD_NAME__time_step, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription auv_control_msgs__msg__MultiActuatorStateStamped__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
auv_control_msgs__msg__MultiActuatorStateStamped__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {auv_control_msgs__msg__MultiActuatorStateStamped__TYPE_NAME, 46, 46},
      {auv_control_msgs__msg__MultiActuatorStateStamped__FIELDS, 6, 6},
    },
    {auv_control_msgs__msg__MultiActuatorStateStamped__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "\n"
  "# The joint names for the reference values.\n"
  "string[] reference_names\n"
  "\n"
  "# The controller reference values.\n"
  "float64[] reference\n"
  "\n"
  "# The names of the actuators.\n"
  "string[] output_names\n"
  "\n"
  "# Current output of the controller.\n"
  "float64[] output\n"
  "\n"
  "# Time between two consecutive updates/execution of the control law.\n"
  "float64 time_step";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
auv_control_msgs__msg__MultiActuatorStateStamped__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {auv_control_msgs__msg__MultiActuatorStateStamped__TYPE_NAME, 46, 46},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 344, 344},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
auv_control_msgs__msg__MultiActuatorStateStamped__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *auv_control_msgs__msg__MultiActuatorStateStamped__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
