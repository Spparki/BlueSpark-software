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



namespace integral_sliding_mode_controller {

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
        bool use_external_measured_states = false;
        bool enable_parameter_update_without_reactivation = true;
        std::string reference_controller = "";
        struct Tf {
            std::string base_frame = "base_link_fsd";
            std::string odom_frame = "odom_ned";
        } tf;
        struct Gains {
            double rho = 0.0;
            double lambda = 0.0;
            std::vector<double> Kp = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
        } gains;
        struct Hydrodynamics {
            double mass = 0.0;
            std::vector<double> moments_of_inertia = {0.0, 0.0, 0.0};
            std::vector<double> added_mass = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
            double weight = 0.0;
            double buoyancy = 0.0;
            std::vector<double> center_of_buoyancy = {0.0, 0.0, 0.0};
            std::vector<double> center_of_gravity = {0.0, 0.0, 0.0};
            std::vector<double> linear_damping = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
            std::vector<double> quadratic_damping = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
        } hydrodynamics;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        bool use_external_measured_states = false;
        bool enable_parameter_update_without_reactivation = true;
        struct Gains {
            double rho = 0.0;
            double lambda = 0.0;
        } gains;
        struct Hydrodynamics {
            double mass = 0.0;
            double weight = 0.0;
            double buoyancy = 0.0;
        } hydrodynamics;
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
    : ParamListener(parameters_interface, rclcpp::get_logger("integral_sliding_mode_controller"), prefix) {
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
      output.use_external_measured_states = params.use_external_measured_states;
      output.enable_parameter_update_without_reactivation = params.enable_parameter_update_without_reactivation;
      output.gains.rho = params.gains.rho;
      output.gains.lambda = params.gains.lambda;
      output.hydrodynamics.mass = params.hydrodynamics.mass;
      output.hydrodynamics.weight = params.hydrodynamics.weight;
      output.hydrodynamics.buoyancy = params.hydrodynamics.buoyancy;

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
        if (param.get_name() == (prefix_ + "use_external_measured_states")) {
            updated_params.use_external_measured_states = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "enable_parameter_update_without_reactivation")) {
            updated_params.enable_parameter_update_without_reactivation = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "reference_controller")) {
            updated_params.reference_controller = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "tf.base_frame")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.tf.base_frame = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "tf.odom_frame")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.tf.odom_frame = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "gains.rho")) {
            updated_params.gains.rho = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "gains.lambda")) {
            updated_params.gains.lambda = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "gains.Kp")) {
            if(auto validation_result = fixed_size<double>(param, 6);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.gains.Kp = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "hydrodynamics.mass")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.hydrodynamics.mass = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "hydrodynamics.moments_of_inertia")) {
            if(auto validation_result = fixed_size<double>(param, 3);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.hydrodynamics.moments_of_inertia = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "hydrodynamics.added_mass")) {
            if(auto validation_result = fixed_size<double>(param, 6);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.hydrodynamics.added_mass = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "hydrodynamics.weight")) {
            updated_params.hydrodynamics.weight = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "hydrodynamics.buoyancy")) {
            updated_params.hydrodynamics.buoyancy = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "hydrodynamics.center_of_buoyancy")) {
            if(auto validation_result = fixed_size<double>(param, 3);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.hydrodynamics.center_of_buoyancy = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "hydrodynamics.center_of_gravity")) {
            if(auto validation_result = fixed_size<double>(param, 3);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.hydrodynamics.center_of_gravity = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "hydrodynamics.linear_damping")) {
            if(auto validation_result = fixed_size<double>(param, 6);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.hydrodynamics.linear_damping = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "hydrodynamics.quadratic_damping")) {
            if(auto validation_result = fixed_size<double>(param, 6);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.hydrodynamics.quadratic_damping = param.as_double_array();
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
      if (!parameters_interface_->has_parameter(prefix_ + "use_external_measured_states")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Use velocity measurements obtained from a topic instead of from state interfaces.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.use_external_measured_states);
          parameters_interface_->declare_parameter(prefix_ + "use_external_measured_states", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "enable_parameter_update_without_reactivation")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "If enabled, the parameters will be dynamically updated while the controller is running.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.enable_parameter_update_without_reactivation);
          parameters_interface_->declare_parameter(prefix_ + "enable_parameter_update_without_reactivation", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "reference_controller")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The prefix of the reference controller to send command to. This can be used to configure command interfaces in chained mode.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.reference_controller);
          parameters_interface_->declare_parameter(prefix_ + "reference_controller", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "tf.base_frame")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The name of the vehicle base frame.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.tf.base_frame);
          parameters_interface_->declare_parameter(prefix_ + "tf.base_frame", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "tf.odom_frame")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The name of the inertial frame.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.tf.odom_frame);
          parameters_interface_->declare_parameter(prefix_ + "tf.odom_frame", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "gains.rho")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The sliding mode gain. This adjusts how quickly the controller drives the system to the sliding surface.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.gains.rho);
          parameters_interface_->declare_parameter(prefix_ + "gains.rho", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "gains.lambda")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The boundary thickness of the tanh function used to attenuate ISMC chatter.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.gains.lambda);
          parameters_interface_->declare_parameter(prefix_ + "gains.lambda", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "gains.Kp")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The proportional gains for the controller provided in the order: x, y, z, rx, ry, rz.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.gains.Kp);
          parameters_interface_->declare_parameter(prefix_ + "gains.Kp", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "hydrodynamics.mass")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The mass of the vehicle.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.hydrodynamics.mass);
          parameters_interface_->declare_parameter(prefix_ + "hydrodynamics.mass", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "hydrodynamics.moments_of_inertia")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The moments of inertia of the vehicle in the order: Ixx, Iyy, Izz.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.hydrodynamics.moments_of_inertia);
          parameters_interface_->declare_parameter(prefix_ + "hydrodynamics.moments_of_inertia", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "hydrodynamics.added_mass")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The added mass coefficients of the vehicle in the order: Xdu, Ydv, Zdw, Kdp, Mdq, Ndr.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.hydrodynamics.added_mass);
          parameters_interface_->declare_parameter(prefix_ + "hydrodynamics.added_mass", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "hydrodynamics.weight")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The weight of the vehicle.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.hydrodynamics.weight);
          parameters_interface_->declare_parameter(prefix_ + "hydrodynamics.weight", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "hydrodynamics.buoyancy")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The buoyancy of the vehicle.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.hydrodynamics.buoyancy);
          parameters_interface_->declare_parameter(prefix_ + "hydrodynamics.buoyancy", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "hydrodynamics.center_of_buoyancy")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The center-of-buoyancy of the vehicle in the order: x, y, z.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.hydrodynamics.center_of_buoyancy);
          parameters_interface_->declare_parameter(prefix_ + "hydrodynamics.center_of_buoyancy", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "hydrodynamics.center_of_gravity")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The center-of-gravity of the vehicle in the order: x, y, z.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.hydrodynamics.center_of_gravity);
          parameters_interface_->declare_parameter(prefix_ + "hydrodynamics.center_of_gravity", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "hydrodynamics.linear_damping")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The linear damping coefficients of the vehicle in the order: Xu, Yv, Zw, Kp, Mq, Nr.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.hydrodynamics.linear_damping);
          parameters_interface_->declare_parameter(prefix_ + "hydrodynamics.linear_damping", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "hydrodynamics.quadratic_damping")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The quadratic damping coefficients of the vehicle in the order: Xuu, Yvv, Zww, Kpp, Mqq, Nrr.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.hydrodynamics.quadratic_damping);
          parameters_interface_->declare_parameter(prefix_ + "hydrodynamics.quadratic_damping", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "use_external_measured_states");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.use_external_measured_states = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "enable_parameter_update_without_reactivation");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.enable_parameter_update_without_reactivation = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "reference_controller");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.reference_controller = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "tf.base_frame");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'tf.base_frame': {}", validation_result.error()));
      }
      updated_params.tf.base_frame = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "tf.odom_frame");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'tf.odom_frame': {}", validation_result.error()));
      }
      updated_params.tf.odom_frame = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "gains.rho");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.gains.rho = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "gains.lambda");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.gains.lambda = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "gains.Kp");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = fixed_size<double>(param, 6);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'gains.Kp': {}", validation_result.error()));
      }
      updated_params.gains.Kp = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "hydrodynamics.mass");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'hydrodynamics.mass': {}", validation_result.error()));
      }
      updated_params.hydrodynamics.mass = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "hydrodynamics.moments_of_inertia");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = fixed_size<double>(param, 3);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'hydrodynamics.moments_of_inertia': {}", validation_result.error()));
      }
      updated_params.hydrodynamics.moments_of_inertia = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "hydrodynamics.added_mass");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = fixed_size<double>(param, 6);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'hydrodynamics.added_mass': {}", validation_result.error()));
      }
      updated_params.hydrodynamics.added_mass = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "hydrodynamics.weight");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.hydrodynamics.weight = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "hydrodynamics.buoyancy");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.hydrodynamics.buoyancy = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "hydrodynamics.center_of_buoyancy");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = fixed_size<double>(param, 3);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'hydrodynamics.center_of_buoyancy': {}", validation_result.error()));
      }
      updated_params.hydrodynamics.center_of_buoyancy = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "hydrodynamics.center_of_gravity");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = fixed_size<double>(param, 3);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'hydrodynamics.center_of_gravity': {}", validation_result.error()));
      }
      updated_params.hydrodynamics.center_of_gravity = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "hydrodynamics.linear_damping");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = fixed_size<double>(param, 6);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'hydrodynamics.linear_damping': {}", validation_result.error()));
      }
      updated_params.hydrodynamics.linear_damping = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "hydrodynamics.quadratic_damping");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = fixed_size<double>(param, 6);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'hydrodynamics.quadratic_damping': {}", validation_result.error()));
      }
      updated_params.hydrodynamics.quadratic_damping = param.as_double_array();


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
      rclcpp::Logger logger_ = rclcpp::get_logger("integral_sliding_mode_controller");
      std::mutex mutable mutex_;
  };

} // namespace integral_sliding_mode_controller
