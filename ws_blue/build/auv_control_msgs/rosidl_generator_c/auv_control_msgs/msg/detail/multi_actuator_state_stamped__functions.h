// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from auv_control_msgs:msg/MultiActuatorStateStamped.idl
// generated code does not contain a copyright notice

#ifndef AUV_CONTROL_MSGS__MSG__DETAIL__MULTI_ACTUATOR_STATE_STAMPED__FUNCTIONS_H_
#define AUV_CONTROL_MSGS__MSG__DETAIL__MULTI_ACTUATOR_STATE_STAMPED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "auv_control_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "auv_control_msgs/msg/detail/multi_actuator_state_stamped__struct.h"

/// Initialize msg/MultiActuatorStateStamped message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * auv_control_msgs__msg__MultiActuatorStateStamped
 * )) before or use
 * auv_control_msgs__msg__MultiActuatorStateStamped__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control_msgs
bool
auv_control_msgs__msg__MultiActuatorStateStamped__init(auv_control_msgs__msg__MultiActuatorStateStamped * msg);

/// Finalize msg/MultiActuatorStateStamped message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control_msgs
void
auv_control_msgs__msg__MultiActuatorStateStamped__fini(auv_control_msgs__msg__MultiActuatorStateStamped * msg);

/// Create msg/MultiActuatorStateStamped message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * auv_control_msgs__msg__MultiActuatorStateStamped__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control_msgs
auv_control_msgs__msg__MultiActuatorStateStamped *
auv_control_msgs__msg__MultiActuatorStateStamped__create();

/// Destroy msg/MultiActuatorStateStamped message.
/**
 * It calls
 * auv_control_msgs__msg__MultiActuatorStateStamped__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control_msgs
void
auv_control_msgs__msg__MultiActuatorStateStamped__destroy(auv_control_msgs__msg__MultiActuatorStateStamped * msg);

/// Check for msg/MultiActuatorStateStamped message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control_msgs
bool
auv_control_msgs__msg__MultiActuatorStateStamped__are_equal(const auv_control_msgs__msg__MultiActuatorStateStamped * lhs, const auv_control_msgs__msg__MultiActuatorStateStamped * rhs);

/// Copy a msg/MultiActuatorStateStamped message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control_msgs
bool
auv_control_msgs__msg__MultiActuatorStateStamped__copy(
  const auv_control_msgs__msg__MultiActuatorStateStamped * input,
  auv_control_msgs__msg__MultiActuatorStateStamped * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_auv_control_msgs
const rosidl_type_hash_t *
auv_control_msgs__msg__MultiActuatorStateStamped__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_auv_control_msgs
const rosidl_runtime_c__type_description__TypeDescription *
auv_control_msgs__msg__MultiActuatorStateStamped__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_auv_control_msgs
const rosidl_runtime_c__type_description__TypeSource *
auv_control_msgs__msg__MultiActuatorStateStamped__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_auv_control_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
auv_control_msgs__msg__MultiActuatorStateStamped__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/MultiActuatorStateStamped messages.
/**
 * It allocates the memory for the number of elements and calls
 * auv_control_msgs__msg__MultiActuatorStateStamped__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control_msgs
bool
auv_control_msgs__msg__MultiActuatorStateStamped__Sequence__init(auv_control_msgs__msg__MultiActuatorStateStamped__Sequence * array, size_t size);

/// Finalize array of msg/MultiActuatorStateStamped messages.
/**
 * It calls
 * auv_control_msgs__msg__MultiActuatorStateStamped__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control_msgs
void
auv_control_msgs__msg__MultiActuatorStateStamped__Sequence__fini(auv_control_msgs__msg__MultiActuatorStateStamped__Sequence * array);

/// Create array of msg/MultiActuatorStateStamped messages.
/**
 * It allocates the memory for the array and calls
 * auv_control_msgs__msg__MultiActuatorStateStamped__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control_msgs
auv_control_msgs__msg__MultiActuatorStateStamped__Sequence *
auv_control_msgs__msg__MultiActuatorStateStamped__Sequence__create(size_t size);

/// Destroy array of msg/MultiActuatorStateStamped messages.
/**
 * It calls
 * auv_control_msgs__msg__MultiActuatorStateStamped__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control_msgs
void
auv_control_msgs__msg__MultiActuatorStateStamped__Sequence__destroy(auv_control_msgs__msg__MultiActuatorStateStamped__Sequence * array);

/// Check for msg/MultiActuatorStateStamped message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control_msgs
bool
auv_control_msgs__msg__MultiActuatorStateStamped__Sequence__are_equal(const auv_control_msgs__msg__MultiActuatorStateStamped__Sequence * lhs, const auv_control_msgs__msg__MultiActuatorStateStamped__Sequence * rhs);

/// Copy an array of msg/MultiActuatorStateStamped messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_auv_control_msgs
bool
auv_control_msgs__msg__MultiActuatorStateStamped__Sequence__copy(
  const auv_control_msgs__msg__MultiActuatorStateStamped__Sequence * input,
  auv_control_msgs__msg__MultiActuatorStateStamped__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AUV_CONTROL_MSGS__MSG__DETAIL__MULTI_ACTUATOR_STATE_STAMPED__FUNCTIONS_H_
