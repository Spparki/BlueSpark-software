// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from auv_control_msgs:msg/MultiActuatorStateStamped.idl
// generated code does not contain a copyright notice

#ifndef AUV_CONTROL_MSGS__MSG__DETAIL__MULTI_ACTUATOR_STATE_STAMPED__STRUCT_H_
#define AUV_CONTROL_MSGS__MSG__DETAIL__MULTI_ACTUATOR_STATE_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'reference_names'
// Member 'output_names'
#include "rosidl_runtime_c/string.h"
// Member 'reference'
// Member 'output'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/MultiActuatorStateStamped in the package auv_control_msgs.
typedef struct auv_control_msgs__msg__MultiActuatorStateStamped
{
  std_msgs__msg__Header header;
  /// The joint names for the reference values.
  rosidl_runtime_c__String__Sequence reference_names;
  /// The controller reference values.
  rosidl_runtime_c__double__Sequence reference;
  /// The names of the actuators.
  rosidl_runtime_c__String__Sequence output_names;
  /// Current output of the controller.
  rosidl_runtime_c__double__Sequence output;
  /// Time between two consecutive updates/execution of the control law.
  double time_step;
} auv_control_msgs__msg__MultiActuatorStateStamped;

// Struct for a sequence of auv_control_msgs__msg__MultiActuatorStateStamped.
typedef struct auv_control_msgs__msg__MultiActuatorStateStamped__Sequence
{
  auv_control_msgs__msg__MultiActuatorStateStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} auv_control_msgs__msg__MultiActuatorStateStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUV_CONTROL_MSGS__MSG__DETAIL__MULTI_ACTUATOR_STATE_STAMPED__STRUCT_H_
