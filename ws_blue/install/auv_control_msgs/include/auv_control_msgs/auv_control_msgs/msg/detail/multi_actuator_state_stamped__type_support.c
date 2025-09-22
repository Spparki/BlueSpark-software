// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from auv_control_msgs:msg/MultiActuatorStateStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "auv_control_msgs/msg/detail/multi_actuator_state_stamped__rosidl_typesupport_introspection_c.h"
#include "auv_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "auv_control_msgs/msg/detail/multi_actuator_state_stamped__functions.h"
#include "auv_control_msgs/msg/detail/multi_actuator_state_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `reference_names`
// Member `output_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `reference`
// Member `output`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__MultiActuatorStateStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  auv_control_msgs__msg__MultiActuatorStateStamped__init(message_memory);
}

void auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__MultiActuatorStateStamped_fini_function(void * message_memory)
{
  auv_control_msgs__msg__MultiActuatorStateStamped__fini(message_memory);
}

size_t auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__size_function__MultiActuatorStateStamped__reference_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__get_const_function__MultiActuatorStateStamped__reference_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__get_function__MultiActuatorStateStamped__reference_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__fetch_function__MultiActuatorStateStamped__reference_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__get_const_function__MultiActuatorStateStamped__reference_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__assign_function__MultiActuatorStateStamped__reference_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__get_function__MultiActuatorStateStamped__reference_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__resize_function__MultiActuatorStateStamped__reference_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__size_function__MultiActuatorStateStamped__reference(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__get_const_function__MultiActuatorStateStamped__reference(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__get_function__MultiActuatorStateStamped__reference(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__fetch_function__MultiActuatorStateStamped__reference(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__get_const_function__MultiActuatorStateStamped__reference(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__assign_function__MultiActuatorStateStamped__reference(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__get_function__MultiActuatorStateStamped__reference(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__resize_function__MultiActuatorStateStamped__reference(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__size_function__MultiActuatorStateStamped__output_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__get_const_function__MultiActuatorStateStamped__output_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__get_function__MultiActuatorStateStamped__output_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__fetch_function__MultiActuatorStateStamped__output_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__get_const_function__MultiActuatorStateStamped__output_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__assign_function__MultiActuatorStateStamped__output_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__get_function__MultiActuatorStateStamped__output_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__resize_function__MultiActuatorStateStamped__output_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__size_function__MultiActuatorStateStamped__output(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__get_const_function__MultiActuatorStateStamped__output(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__get_function__MultiActuatorStateStamped__output(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__fetch_function__MultiActuatorStateStamped__output(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__get_const_function__MultiActuatorStateStamped__output(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__assign_function__MultiActuatorStateStamped__output(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__get_function__MultiActuatorStateStamped__output(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__resize_function__MultiActuatorStateStamped__output(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__MultiActuatorStateStamped_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_control_msgs__msg__MultiActuatorStateStamped, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reference_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_control_msgs__msg__MultiActuatorStateStamped, reference_names),  // bytes offset in struct
    NULL,  // default value
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__size_function__MultiActuatorStateStamped__reference_names,  // size() function pointer
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__get_const_function__MultiActuatorStateStamped__reference_names,  // get_const(index) function pointer
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__get_function__MultiActuatorStateStamped__reference_names,  // get(index) function pointer
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__fetch_function__MultiActuatorStateStamped__reference_names,  // fetch(index, &value) function pointer
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__assign_function__MultiActuatorStateStamped__reference_names,  // assign(index, value) function pointer
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__resize_function__MultiActuatorStateStamped__reference_names  // resize(index) function pointer
  },
  {
    "reference",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_control_msgs__msg__MultiActuatorStateStamped, reference),  // bytes offset in struct
    NULL,  // default value
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__size_function__MultiActuatorStateStamped__reference,  // size() function pointer
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__get_const_function__MultiActuatorStateStamped__reference,  // get_const(index) function pointer
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__get_function__MultiActuatorStateStamped__reference,  // get(index) function pointer
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__fetch_function__MultiActuatorStateStamped__reference,  // fetch(index, &value) function pointer
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__assign_function__MultiActuatorStateStamped__reference,  // assign(index, value) function pointer
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__resize_function__MultiActuatorStateStamped__reference  // resize(index) function pointer
  },
  {
    "output_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_control_msgs__msg__MultiActuatorStateStamped, output_names),  // bytes offset in struct
    NULL,  // default value
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__size_function__MultiActuatorStateStamped__output_names,  // size() function pointer
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__get_const_function__MultiActuatorStateStamped__output_names,  // get_const(index) function pointer
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__get_function__MultiActuatorStateStamped__output_names,  // get(index) function pointer
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__fetch_function__MultiActuatorStateStamped__output_names,  // fetch(index, &value) function pointer
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__assign_function__MultiActuatorStateStamped__output_names,  // assign(index, value) function pointer
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__resize_function__MultiActuatorStateStamped__output_names  // resize(index) function pointer
  },
  {
    "output",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_control_msgs__msg__MultiActuatorStateStamped, output),  // bytes offset in struct
    NULL,  // default value
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__size_function__MultiActuatorStateStamped__output,  // size() function pointer
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__get_const_function__MultiActuatorStateStamped__output,  // get_const(index) function pointer
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__get_function__MultiActuatorStateStamped__output,  // get(index) function pointer
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__fetch_function__MultiActuatorStateStamped__output,  // fetch(index, &value) function pointer
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__assign_function__MultiActuatorStateStamped__output,  // assign(index, value) function pointer
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__resize_function__MultiActuatorStateStamped__output  // resize(index) function pointer
  },
  {
    "time_step",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_control_msgs__msg__MultiActuatorStateStamped, time_step),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__MultiActuatorStateStamped_message_members = {
  "auv_control_msgs__msg",  // message namespace
  "MultiActuatorStateStamped",  // message name
  6,  // number of fields
  sizeof(auv_control_msgs__msg__MultiActuatorStateStamped),
  auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__MultiActuatorStateStamped_message_member_array,  // message members
  auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__MultiActuatorStateStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__MultiActuatorStateStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__MultiActuatorStateStamped_message_type_support_handle = {
  0,
  &auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__MultiActuatorStateStamped_message_members,
  get_message_typesupport_handle_function,
  &auv_control_msgs__msg__MultiActuatorStateStamped__get_type_hash,
  &auv_control_msgs__msg__MultiActuatorStateStamped__get_type_description,
  &auv_control_msgs__msg__MultiActuatorStateStamped__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_auv_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, auv_control_msgs, msg, MultiActuatorStateStamped)() {
  auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__MultiActuatorStateStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__MultiActuatorStateStamped_message_type_support_handle.typesupport_identifier) {
    auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__MultiActuatorStateStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &auv_control_msgs__msg__MultiActuatorStateStamped__rosidl_typesupport_introspection_c__MultiActuatorStateStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
