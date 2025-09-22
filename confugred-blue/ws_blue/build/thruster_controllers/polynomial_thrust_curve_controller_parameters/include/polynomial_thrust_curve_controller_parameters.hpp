// auto-generated DO NOT EDIT

#pragma once

#include <algorithm>
#include <array>
#include <functional>
#include <limits>
#include <mutex>
#include <rclcpp/node.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <rclcpp/logger.hpp>
#include <set>
#include <sstream>
#include <string>
#include <type_traits>
#include <vector>

#include <fmt/core.h>
#include <fmt/format.h>
#include <fmt/ranges.h>

#include <parameter_traits/parameter_traits.hpp>

#include <rsl/static_string.hpp>
#include <rsl/static_vector.hpp>
#include <rsl/parameter_validators.hpp>



namespace polynomial_thrust_curve_controller {

// Use validators from RSL
using rsl::unique;
using rsl::subset_of;
using rsl::fixed_size;
using rsl::size_gt;
using rsl::size_lt;
using rsl::not_empty;
using rsl::element_bounds;
using rsl::lower_element_bounds;
using rsl::upper_element_bounds;
using rsl::bounds;
using rsl::lt;
using rsl::gt;
using rsl::lt_eq;
using rsl::gt_eq;
using rsl::one_of;
using rsl::to_parameter_result_msg;

// temporarily needed for backwards compatibility for custom validators
using namespace parameter_traits;

template <typename T>
[[nodiscard]] auto to_parameter_value(T value) {
    return rclcpp::ParameterValue(value);
}

template <size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticString<capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_string(value));
}

template <typename T, size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticVector<T, capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_vector(value));
}
    struct Params {
        std::string thruster = "";
        std::vector<double> thrust_curve_coefficients = {};
        double min_thrust = 0.0;
        double max_thrust = 0.0;
        int64_t min_deadband_pwm = 0;
        int64_t max_deadband_pwm = 0;
        int64_t neutral_pwm = 0;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        double min_thrust = 0.0;
        double max_thrust = 0.0;
        int64_t min_deadband_pwm = 0;
        int64_t max_deadband_pwm = 0;
        int64_t neutral_pwm = 0;
    };

  class ParamListener{
  public:
    // throws rclcpp::exceptions::InvalidParameterValueException on initialization if invalid parameter are loaded
    ParamListener(rclcpp::Node::SharedPtr node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(rclcpp_lifecycle::LifecycleNode::SharedPtr node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  std::string const& prefix = "")
    : ParamListener(parameters_interface, rclcpp::get_logger("polynomial_thrust_curve_controller"), prefix) {
      RCLCPP_DEBUG(logger_, "ParameterListener: Not using node logger, recommend using other constructors to use a node logger");
    }

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  rclcpp::Logger logger, std::string const& prefix = "") {
      logger_ = logger;
      prefix_ = prefix;
      if (!prefix_.empty() && prefix_.back() != '.') {
        prefix_ += ".";
      }

      parameters_interface_ = parameters_interface;
      declare_params();
      auto update_param_cb = [this](const std::vector<rclcpp::Parameter> &parameters){return this->update(parameters);};
      handle_ = parameters_interface_->add_on_set_parameters_callback(update_param_cb);
      clock_ = rclcpp::Clock();
    }

    Params get_params() const{
      std::lock_guard<std::mutex> lock(mutex_);
      return params_;
    }

    bool is_old(Params const& other) const {
      std::lock_guard<std::mutex> lock(mutex_);
      return params_.__stamp != other.__stamp;
    }

    StackParams get_stack_params() {
      Params params = get_params();
      StackParams output;
      output.min_thrust = params.min_thrust;
      output.max_thrust = params.max_thrust;
      output.min_deadband_pwm = params.min_deadband_pwm;
      output.max_deadband_pwm = params.max_deadband_pwm;
      output.neutral_pwm = params.neutral_pwm;

      return output;
    }

    void refresh_dynamic_parameters() {
      auto updated_params = get_params();
      // TODO remove any destroyed dynamic parameters

      // declare any new dynamic parameters
      rclcpp::Parameter param;

    }

    rcl_interfaces::msg::SetParametersResult update(const std::vector<rclcpp::Parameter> &parameters) {
      auto updated_params = get_params();

      for (const auto &param: parameters) {
        if (param.get_name() == (prefix_ + "thruster")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.thruster = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "thrust_curve_coefficients")) {
            if(auto validation_result = not_empty<double>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.thrust_curve_coefficients = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "min_thrust")) {
            updated_params.min_thrust = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "max_thrust")) {
            updated_params.max_thrust = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "min_deadband_pwm")) {
            updated_params.min_deadband_pwm = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "max_deadband_pwm")) {
            updated_params.max_deadband_pwm = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "neutral_pwm")) {
            updated_params.neutral_pwm = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
      }

      updated_params.__stamp = clock_.now();
      update_internal_params(updated_params);
      return rsl::to_parameter_result_msg({});
    }

    void declare_params(){
      auto updated_params = get_params();
      // declare all parameters and give default values to non-required ones
      if (!parameters_interface_->has_parameter(prefix_ + "thruster")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The name of the thruster.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.thruster);
          parameters_interface_->declare_parameter(prefix_ + "thruster", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "thrust_curve_coefficients")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The thrust-to-PWM curve polynomial coefficients. These should be provided in the order of the lowest degree to the highest degree.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.thrust_curve_coefficients);
          parameters_interface_->declare_parameter(prefix_ + "thrust_curve_coefficients", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "min_thrust")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The minimum thrust that can be produced by the thruster.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.min_thrust);
          parameters_interface_->declare_parameter(prefix_ + "min_thrust", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "max_thrust")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The maximum thrust that can be produced by the thruster.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.max_thrust);
          parameters_interface_->declare_parameter(prefix_ + "max_thrust", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "min_deadband_pwm")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The minimum PWM value in the deadband range for the thruster.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.min_deadband_pwm);
          parameters_interface_->declare_parameter(prefix_ + "min_deadband_pwm", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "max_deadband_pwm")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The maximum PWM value in the deadband range for the thruster.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.max_deadband_pwm);
          parameters_interface_->declare_parameter(prefix_ + "max_deadband_pwm", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "neutral_pwm")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "A safe PWM value that is known to apply zero thrust.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.neutral_pwm);
          parameters_interface_->declare_parameter(prefix_ + "neutral_pwm", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "thruster");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'thruster': {}", validation_result.error()));
      }
      updated_params.thruster = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "thrust_curve_coefficients");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<double>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'thrust_curve_coefficients': {}", validation_result.error()));
      }
      updated_params.thrust_curve_coefficients = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "min_thrust");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.min_thrust = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "max_thrust");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.max_thrust = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "min_deadband_pwm");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.min_deadband_pwm = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "max_deadband_pwm");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.max_deadband_pwm = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "neutral_pwm");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.neutral_pwm = param.as_int();


      updated_params.__stamp = clock_.now();
      update_internal_params(updated_params);
    }

    private:
      void update_internal_params(Params updated_params) {
        std::lock_guard<std::mutex> lock(mutex_);
        params_ = updated_params;
      }

      std::string prefix_;
      Params params_;
      rclcpp::Clock clock_;
      std::shared_ptr<rclcpp::node_interfaces::OnSetParametersCallbackHandle> handle_;
      std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface> parameters_interface_;

      // rclcpp::Logger cannot be default-constructed
      // so we must provide a initialization here even though
      // every one of our constructors initializes logger_
      rclcpp::Logger logger_ = rclcpp::get_logger("polynomial_thrust_curve_controller");
      std::mutex mutable mutex_;
  };

} // namespace polynomial_thrust_curve_controller
