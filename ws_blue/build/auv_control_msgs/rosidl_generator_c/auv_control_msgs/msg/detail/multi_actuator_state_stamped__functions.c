// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from auv_control_msgs:msg/MultiActuatorStateStamped.idl
// generated code does not contain a copyright notice
#include "auv_control_msgs/msg/detail/multi_actuator_state_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `reference_names`
// Member `output_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `reference`
// Member `output`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
auv_control_msgs__msg__MultiActuatorStateStamped__init(auv_control_msgs__msg__MultiActuatorStateStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    auv_control_msgs__msg__MultiActuatorStateStamped__fini(msg);
    return false;
  }
  // reference_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->reference_names, 0)) {
    auv_control_msgs__msg__MultiActuatorStateStamped__fini(msg);
    return false;
  }
  // reference
  if (!rosidl_runtime_c__double__Sequence__init(&msg->reference, 0)) {
    auv_control_msgs__msg__MultiActuatorStateStamped__fini(msg);
    return false;
  }
  // output_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->output_names, 0)) {
    auv_control_msgs__msg__MultiActuatorStateStamped__fini(msg);
    return false;
  }
  // output
  if (!rosidl_runtime_c__double__Sequence__init(&msg->output, 0)) {
    auv_control_msgs__msg__MultiActuatorStateStamped__fini(msg);
    return false;
  }
  // time_step
  return true;
}

void
auv_control_msgs__msg__MultiActuatorStateStamped__fini(auv_control_msgs__msg__MultiActuatorStateStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // reference_names
  rosidl_runtime_c__String__Sequence__fini(&msg->reference_names);
  // reference
  rosidl_runtime_c__double__Sequence__fini(&msg->reference);
  // output_names
  rosidl_runtime_c__String__Sequence__fini(&msg->output_names);
  // output
  rosidl_runtime_c__double__Sequence__fini(&msg->output);
  // time_step
}

bool
auv_control_msgs__msg__MultiActuatorStateStamped__are_equal(const auv_control_msgs__msg__MultiActuatorStateStamped * lhs, const auv_control_msgs__msg__MultiActuatorStateStamped * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // reference_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->reference_names), &(rhs->reference_names)))
  {
    return false;
  }
  // reference
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->reference), &(rhs->reference)))
  {
    return false;
  }
  // output_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->output_names), &(rhs->output_names)))
  {
    return false;
  }
  // output
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->output), &(rhs->output)))
  {
    return false;
  }
  // time_step
  if (lhs->time_step != rhs->time_step) {
    return false;
  }
  return true;
}

bool
auv_control_msgs__msg__MultiActuatorStateStamped__copy(
  const auv_control_msgs__msg__MultiActuatorStateStamped * input,
  auv_control_msgs__msg__MultiActuatorStateStamped * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // reference_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->reference_names), &(output->reference_names)))
  {
    return false;
  }
  // reference
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->reference), &(output->reference)))
  {
    return false;
  }
  // output_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->output_names), &(output->output_names)))
  {
    return false;
  }
  // output
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->output), &(output->output)))
  {
    return false;
  }
  // time_step
  output->time_step = input->time_step;
  return true;
}

auv_control_msgs__msg__MultiActuatorStateStamped *
auv_control_msgs__msg__MultiActuatorStateStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auv_control_msgs__msg__MultiActuatorStateStamped * msg = (auv_control_msgs__msg__MultiActuatorStateStamped *)allocator.allocate(sizeof(auv_control_msgs__msg__MultiActuatorStateStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(auv_control_msgs__msg__MultiActuatorStateStamped));
  bool success = auv_control_msgs__msg__MultiActuatorStateStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
auv_control_msgs__msg__MultiActuatorStateStamped__destroy(auv_control_msgs__msg__MultiActuatorStateStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    auv_control_msgs__msg__MultiActuatorStateStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
auv_control_msgs__msg__MultiActuatorStateStamped__Sequence__init(auv_control_msgs__msg__MultiActuatorStateStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auv_control_msgs__msg__MultiActuatorStateStamped * data = NULL;

  if (size) {
    data = (auv_control_msgs__msg__MultiActuatorStateStamped *)allocator.zero_allocate(size, sizeof(auv_control_msgs__msg__MultiActuatorStateStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = auv_control_msgs__msg__MultiActuatorStateStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        auv_control_msgs__msg__MultiActuatorStateStamped__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
auv_control_msgs__msg__MultiActuatorStateStamped__Sequence__fini(auv_control_msgs__msg__MultiActuatorStateStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      auv_control_msgs__msg__MultiActuatorStateStamped__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

auv_control_msgs__msg__MultiActuatorStateStamped__Sequence *
auv_control_msgs__msg__MultiActuatorStateStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  auv_control_msgs__msg__MultiActuatorStateStamped__Sequence * array = (auv_control_msgs__msg__MultiActuatorStateStamped__Sequence *)allocator.allocate(sizeof(auv_control_msgs__msg__MultiActuatorStateStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = auv_control_msgs__msg__MultiActuatorStateStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
auv_control_msgs__msg__MultiActuatorStateStamped__Sequence__destroy(auv_control_msgs__msg__MultiActuatorStateStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    auv_control_msgs__msg__MultiActuatorStateStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
auv_control_msgs__msg__MultiActuatorStateStamped__Sequence__are_equal(const auv_control_msgs__msg__MultiActuatorStateStamped__Sequence * lhs, const auv_control_msgs__msg__MultiActuatorStateStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!auv_control_msgs__msg__MultiActuatorStateStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
auv_control_msgs__msg__MultiActuatorStateStamped__Sequence__copy(
  const auv_control_msgs__msg__MultiActuatorStateStamped__Sequence * input,
  auv_control_msgs__msg__MultiActuatorStateStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(auv_control_msgs__msg__MultiActuatorStateStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    auv_control_msgs__msg__MultiActuatorStateStamped * data =
      (auv_control_msgs__msg__MultiActuatorStateStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!auv_control_msgs__msg__MultiActuatorStateStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          auv_control_msgs__msg__MultiActuatorStateStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!auv_control_msgs__msg__MultiActuatorStateStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
