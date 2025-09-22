// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from auv_control_msgs:msg/MultiActuatorStateStamped.idl
// generated code does not contain a copyright notice

#ifndef AUV_CONTROL_MSGS__MSG__DETAIL__MULTI_ACTUATOR_STATE_STAMPED__TRAITS_HPP_
#define AUV_CONTROL_MSGS__MSG__DETAIL__MULTI_ACTUATOR_STATE_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "auv_control_msgs/msg/detail/multi_actuator_state_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace auv_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MultiActuatorStateStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: reference_names
  {
    if (msg.reference_names.size() == 0) {
      out << "reference_names: []";
    } else {
      out << "reference_names: [";
      size_t pending_items = msg.reference_names.size();
      for (auto item : msg.reference_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: reference
  {
    if (msg.reference.size() == 0) {
      out << "reference: []";
    } else {
      out << "reference: [";
      size_t pending_items = msg.reference.size();
      for (auto item : msg.reference) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: output_names
  {
    if (msg.output_names.size() == 0) {
      out << "output_names: []";
    } else {
      out << "output_names: [";
      size_t pending_items = msg.output_names.size();
      for (auto item : msg.output_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: output
  {
    if (msg.output.size() == 0) {
      out << "output: []";
    } else {
      out << "output: [";
      size_t pending_items = msg.output.size();
      for (auto item : msg.output) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: time_step
  {
    out << "time_step: ";
    rosidl_generator_traits::value_to_yaml(msg.time_step, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MultiActuatorStateStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: reference_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reference_names.size() == 0) {
      out << "reference_names: []\n";
    } else {
      out << "reference_names:\n";
      for (auto item : msg.reference_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: reference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reference.size() == 0) {
      out << "reference: []\n";
    } else {
      out << "reference:\n";
      for (auto item : msg.reference) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: output_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.output_names.size() == 0) {
      out << "output_names: []\n";
    } else {
      out << "output_names:\n";
      for (auto item : msg.output_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.output.size() == 0) {
      out << "output: []\n";
    } else {
      out << "output:\n";
      for (auto item : msg.output) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: time_step
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_step: ";
    rosidl_generator_traits::value_to_yaml(msg.time_step, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MultiActuatorStateStamped & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace auv_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use auv_control_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const auv_control_msgs::msg::MultiActuatorStateStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  auv_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use auv_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const auv_control_msgs::msg::MultiActuatorStateStamped & msg)
{
  return auv_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<auv_control_msgs::msg::MultiActuatorStateStamped>()
{
  return "auv_control_msgs::msg::MultiActuatorStateStamped";
}

template<>
inline const char * name<auv_control_msgs::msg::MultiActuatorStateStamped>()
{
  return "auv_control_msgs/msg/MultiActuatorStateStamped";
}

template<>
struct has_fixed_size<auv_control_msgs::msg::MultiActuatorStateStamped>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<auv_control_msgs::msg::MultiActuatorStateStamped>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<auv_control_msgs::msg::MultiActuatorStateStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUV_CONTROL_MSGS__MSG__DETAIL__MULTI_ACTUATOR_STATE_STAMPED__TRAITS_HPP_
