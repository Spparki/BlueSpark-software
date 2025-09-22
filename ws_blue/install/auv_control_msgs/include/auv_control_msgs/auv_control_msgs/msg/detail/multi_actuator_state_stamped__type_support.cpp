// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from auv_control_msgs:msg/MultiActuatorStateStamped.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "auv_control_msgs/msg/detail/multi_actuator_state_stamped__functions.h"
#include "auv_control_msgs/msg/detail/multi_actuator_state_stamped__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace auv_control_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MultiActuatorStateStamped_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) auv_control_msgs::msg::MultiActuatorStateStamped(_init);
}

void MultiActuatorStateStamped_fini_function(void * message_memory)
{
  auto typed_message = static_cast<auv_control_msgs::msg::MultiActuatorStateStamped *>(message_memory);
  typed_message->~MultiActuatorStateStamped();
}

size_t size_function__MultiActuatorStateStamped__reference_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiActuatorStateStamped__reference_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiActuatorStateStamped__reference_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__MultiActuatorStateStamped__reference_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__MultiActuatorStateStamped__reference_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__MultiActuatorStateStamped__reference_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__MultiActuatorStateStamped__reference_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__MultiActuatorStateStamped__reference_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MultiActuatorStateStamped__reference(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiActuatorStateStamped__reference(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiActuatorStateStamped__reference(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MultiActuatorStateStamped__reference(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MultiActuatorStateStamped__reference(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MultiActuatorStateStamped__reference(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MultiActuatorStateStamped__reference(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MultiActuatorStateStamped__reference(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MultiActuatorStateStamped__output_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiActuatorStateStamped__output_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiActuatorStateStamped__output_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__MultiActuatorStateStamped__output_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__MultiActuatorStateStamped__output_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__MultiActuatorStateStamped__output_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__MultiActuatorStateStamped__output_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__MultiActuatorStateStamped__output_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MultiActuatorStateStamped__output(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MultiActuatorStateStamped__output(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MultiActuatorStateStamped__output(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MultiActuatorStateStamped__output(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MultiActuatorStateStamped__output(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MultiActuatorStateStamped__output(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MultiActuatorStateStamped__output(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MultiActuatorStateStamped__output(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MultiActuatorStateStamped_message_member_array[6] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_control_msgs::msg::MultiActuatorStateStamped, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reference_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_control_msgs::msg::MultiActuatorStateStamped, reference_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiActuatorStateStamped__reference_names,  // size() function pointer
    get_const_function__MultiActuatorStateStamped__reference_names,  // get_const(index) function pointer
    get_function__MultiActuatorStateStamped__reference_names,  // get(index) function pointer
    fetch_function__MultiActuatorStateStamped__reference_names,  // fetch(index, &value) function pointer
    assign_function__MultiActuatorStateStamped__reference_names,  // assign(index, value) function pointer
    resize_function__MultiActuatorStateStamped__reference_names  // resize(index) function pointer
  },
  {
    "reference",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_control_msgs::msg::MultiActuatorStateStamped, reference),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiActuatorStateStamped__reference,  // size() function pointer
    get_const_function__MultiActuatorStateStamped__reference,  // get_const(index) function pointer
    get_function__MultiActuatorStateStamped__reference,  // get(index) function pointer
    fetch_function__MultiActuatorStateStamped__reference,  // fetch(index, &value) function pointer
    assign_function__MultiActuatorStateStamped__reference,  // assign(index, value) function pointer
    resize_function__MultiActuatorStateStamped__reference  // resize(index) function pointer
  },
  {
    "output_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_control_msgs::msg::MultiActuatorStateStamped, output_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiActuatorStateStamped__output_names,  // size() function pointer
    get_const_function__MultiActuatorStateStamped__output_names,  // get_const(index) function pointer
    get_function__MultiActuatorStateStamped__output_names,  // get(index) function pointer
    fetch_function__MultiActuatorStateStamped__output_names,  // fetch(index, &value) function pointer
    assign_function__MultiActuatorStateStamped__output_names,  // assign(index, value) function pointer
    resize_function__MultiActuatorStateStamped__output_names  // resize(index) function pointer
  },
  {
    "output",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_control_msgs::msg::MultiActuatorStateStamped, output),  // bytes offset in struct
    nullptr,  // default value
    size_function__MultiActuatorStateStamped__output,  // size() function pointer
    get_const_function__MultiActuatorStateStamped__output,  // get_const(index) function pointer
    get_function__MultiActuatorStateStamped__output,  // get(index) function pointer
    fetch_function__MultiActuatorStateStamped__output,  // fetch(index, &value) function pointer
    assign_function__MultiActuatorStateStamped__output,  // assign(index, value) function pointer
    resize_function__MultiActuatorStateStamped__output  // resize(index) function pointer
  },
  {
    "time_step",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(auv_control_msgs::msg::MultiActuatorStateStamped, time_step),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MultiActuatorStateStamped_message_members = {
  "auv_control_msgs::msg",  // message namespace
  "MultiActuatorStateStamped",  // message name
  6,  // number of fields
  sizeof(auv_control_msgs::msg::MultiActuatorStateStamped),
  MultiActuatorStateStamped_message_member_array,  // message members
  MultiActuatorStateStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  MultiActuatorStateStamped_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MultiActuatorStateStamped_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MultiActuatorStateStamped_message_members,
  get_message_typesupport_handle_function,
  &auv_control_msgs__msg__MultiActuatorStateStamped__get_type_hash,
  &auv_control_msgs__msg__MultiActuatorStateStamped__get_type_description,
  &auv_control_msgs__msg__MultiActuatorStateStamped__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace auv_control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<auv_control_msgs::msg::MultiActuatorStateStamped>()
{
  return &::auv_control_msgs::msg::rosidl_typesupport_introspection_cpp::MultiActuatorStateStamped_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, auv_control_msgs, msg, MultiActuatorStateStamped)() {
  return &::auv_control_msgs::msg::rosidl_typesupport_introspection_cpp::MultiActuatorStateStamped_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
