// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from auv_control_msgs:msg/MultiActuatorStateStamped.idl
// generated code does not contain a copyright notice

#ifndef AUV_CONTROL_MSGS__MSG__DETAIL__MULTI_ACTUATOR_STATE_STAMPED__BUILDER_HPP_
#define AUV_CONTROL_MSGS__MSG__DETAIL__MULTI_ACTUATOR_STATE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "auv_control_msgs/msg/detail/multi_actuator_state_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace auv_control_msgs
{

namespace msg
{

namespace builder
{

class Init_MultiActuatorStateStamped_time_step
{
public:
  explicit Init_MultiActuatorStateStamped_time_step(::auv_control_msgs::msg::MultiActuatorStateStamped & msg)
  : msg_(msg)
  {}
  ::auv_control_msgs::msg::MultiActuatorStateStamped time_step(::auv_control_msgs::msg::MultiActuatorStateStamped::_time_step_type arg)
  {
    msg_.time_step = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auv_control_msgs::msg::MultiActuatorStateStamped msg_;
};

class Init_MultiActuatorStateStamped_output
{
public:
  explicit Init_MultiActuatorStateStamped_output(::auv_control_msgs::msg::MultiActuatorStateStamped & msg)
  : msg_(msg)
  {}
  Init_MultiActuatorStateStamped_time_step output(::auv_control_msgs::msg::MultiActuatorStateStamped::_output_type arg)
  {
    msg_.output = std::move(arg);
    return Init_MultiActuatorStateStamped_time_step(msg_);
  }

private:
  ::auv_control_msgs::msg::MultiActuatorStateStamped msg_;
};

class Init_MultiActuatorStateStamped_output_names
{
public:
  explicit Init_MultiActuatorStateStamped_output_names(::auv_control_msgs::msg::MultiActuatorStateStamped & msg)
  : msg_(msg)
  {}
  Init_MultiActuatorStateStamped_output output_names(::auv_control_msgs::msg::MultiActuatorStateStamped::_output_names_type arg)
  {
    msg_.output_names = std::move(arg);
    return Init_MultiActuatorStateStamped_output(msg_);
  }

private:
  ::auv_control_msgs::msg::MultiActuatorStateStamped msg_;
};

class Init_MultiActuatorStateStamped_reference
{
public:
  explicit Init_MultiActuatorStateStamped_reference(::auv_control_msgs::msg::MultiActuatorStateStamped & msg)
  : msg_(msg)
  {}
  Init_MultiActuatorStateStamped_output_names reference(::auv_control_msgs::msg::MultiActuatorStateStamped::_reference_type arg)
  {
    msg_.reference = std::move(arg);
    return Init_MultiActuatorStateStamped_output_names(msg_);
  }

private:
  ::auv_control_msgs::msg::MultiActuatorStateStamped msg_;
};

class Init_MultiActuatorStateStamped_reference_names
{
public:
  explicit Init_MultiActuatorStateStamped_reference_names(::auv_control_msgs::msg::MultiActuatorStateStamped & msg)
  : msg_(msg)
  {}
  Init_MultiActuatorStateStamped_reference reference_names(::auv_control_msgs::msg::MultiActuatorStateStamped::_reference_names_type arg)
  {
    msg_.reference_names = std::move(arg);
    return Init_MultiActuatorStateStamped_reference(msg_);
  }

private:
  ::auv_control_msgs::msg::MultiActuatorStateStamped msg_;
};

class Init_MultiActuatorStateStamped_header
{
public:
  Init_MultiActuatorStateStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiActuatorStateStamped_reference_names header(::auv_control_msgs::msg::MultiActuatorStateStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MultiActuatorStateStamped_reference_names(msg_);
  }

private:
  ::auv_control_msgs::msg::MultiActuatorStateStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::auv_control_msgs::msg::MultiActuatorStateStamped>()
{
  return auv_control_msgs::msg::builder::Init_MultiActuatorStateStamped_header();
}

}  // namespace auv_control_msgs

#endif  // AUV_CONTROL_MSGS__MSG__DETAIL__MULTI_ACTUATOR_STATE_STAMPED__BUILDER_HPP_
