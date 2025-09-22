// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from auv_control_msgs:msg/MultiActuatorStateStamped.idl
// generated code does not contain a copyright notice

#ifndef AUV_CONTROL_MSGS__MSG__DETAIL__MULTI_ACTUATOR_STATE_STAMPED__STRUCT_HPP_
#define AUV_CONTROL_MSGS__MSG__DETAIL__MULTI_ACTUATOR_STATE_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__auv_control_msgs__msg__MultiActuatorStateStamped __attribute__((deprecated))
#else
# define DEPRECATED__auv_control_msgs__msg__MultiActuatorStateStamped __declspec(deprecated)
#endif

namespace auv_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MultiActuatorStateStamped_
{
  using Type = MultiActuatorStateStamped_<ContainerAllocator>;

  explicit MultiActuatorStateStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_step = 0.0;
    }
  }

  explicit MultiActuatorStateStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_step = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _reference_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _reference_names_type reference_names;
  using _reference_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _reference_type reference;
  using _output_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _output_names_type output_names;
  using _output_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _output_type output;
  using _time_step_type =
    double;
  _time_step_type time_step;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__reference_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->reference_names = _arg;
    return *this;
  }
  Type & set__reference(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->reference = _arg;
    return *this;
  }
  Type & set__output_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->output_names = _arg;
    return *this;
  }
  Type & set__output(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->output = _arg;
    return *this;
  }
  Type & set__time_step(
    const double & _arg)
  {
    this->time_step = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    auv_control_msgs::msg::MultiActuatorStateStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const auv_control_msgs::msg::MultiActuatorStateStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<auv_control_msgs::msg::MultiActuatorStateStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<auv_control_msgs::msg::MultiActuatorStateStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      auv_control_msgs::msg::MultiActuatorStateStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<auv_control_msgs::msg::MultiActuatorStateStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      auv_control_msgs::msg::MultiActuatorStateStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<auv_control_msgs::msg::MultiActuatorStateStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<auv_control_msgs::msg::MultiActuatorStateStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<auv_control_msgs::msg::MultiActuatorStateStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__auv_control_msgs__msg__MultiActuatorStateStamped
    std::shared_ptr<auv_control_msgs::msg::MultiActuatorStateStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__auv_control_msgs__msg__MultiActuatorStateStamped
    std::shared_ptr<auv_control_msgs::msg::MultiActuatorStateStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiActuatorStateStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->reference_names != other.reference_names) {
      return false;
    }
    if (this->reference != other.reference) {
      return false;
    }
    if (this->output_names != other.output_names) {
      return false;
    }
    if (this->output != other.output) {
      return false;
    }
    if (this->time_step != other.time_step) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultiActuatorStateStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultiActuatorStateStamped_

// alias to use template instance with default allocator
using MultiActuatorStateStamped =
  auv_control_msgs::msg::MultiActuatorStateStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace auv_control_msgs

#endif  // AUV_CONTROL_MSGS__MSG__DETAIL__MULTI_ACTUATOR_STATE_STAMPED__STRUCT_HPP_
