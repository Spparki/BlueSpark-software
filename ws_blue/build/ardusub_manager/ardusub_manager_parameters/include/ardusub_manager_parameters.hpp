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



namespace ardusub_manager {

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
        bool set_ekf_origin = false;
        bool publish_tf = true;
        struct MessageIntervals {
            std::vector<int64_t> ids = {};
            std::vector<double> rates = {};
        } message_intervals;
        struct EkfOrigin {
            double latitude = 44.6587;
            double longitude = -124.06556;
            double altitude = 0.0;
        } ekf_origin;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        bool set_ekf_origin = false;
        bool publish_tf = true;
        struct EkfOrigin {
            double latitude = 44.6587;
            double longitude = -124.06556;
            double altitude = 0.0;
        } ekf_origin;
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
    : ParamListener(parameters_interface, rclcpp::get_logger("ardusub_manager"), prefix) {
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
      output.set_ekf_origin = params.set_ekf_origin;
      output.ekf_origin.latitude = params.ekf_origin.latitude;
      output.ekf_origin.longitude = params.ekf_origin.longitude;
      output.ekf_origin.altitude = params.ekf_origin.altitude;
      output.publish_tf = params.publish_tf;

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
        if (param.get_name() == (prefix_ + "message_intervals.ids")) {
            updated_params.message_intervals.ids = param.as_integer_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "message_intervals.rates")) {
            updated_params.message_intervals.rates = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "set_ekf_origin")) {
            updated_params.set_ekf_origin = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "ekf_origin.latitude")) {
            updated_params.ekf_origin.latitude = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "ekf_origin.longitude")) {
            updated_params.ekf_origin.longitude = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "ekf_origin.altitude")) {
            updated_params.ekf_origin.altitude = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "publish_tf")) {
            updated_params.publish_tf = param.as_bool();
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
      if (!parameters_interface_->has_parameter(prefix_ + "message_intervals.ids")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The list of MAVLINK messages to request.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.message_intervals.ids);
          parameters_interface_->declare_parameter(prefix_ + "message_intervals.ids", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "message_intervals.rates")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The rates that each message should be published at. This should be provided in the same order as the message IDs.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.message_intervals.rates);
          parameters_interface_->declare_parameter(prefix_ + "message_intervals.rates", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "set_ekf_origin")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Whether or not to set the EKF origin on startup.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.set_ekf_origin);
          parameters_interface_->declare_parameter(prefix_ + "set_ekf_origin", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "ekf_origin.latitude")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The latitude of the EKF origin.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.ekf_origin.latitude);
          parameters_interface_->declare_parameter(prefix_ + "ekf_origin.latitude", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "ekf_origin.longitude")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The longitude of the EKF origin.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.ekf_origin.longitude);
          parameters_interface_->declare_parameter(prefix_ + "ekf_origin.longitude", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "ekf_origin.altitude")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The altitude of the EKF origin.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.ekf_origin.altitude);
          parameters_interface_->declare_parameter(prefix_ + "ekf_origin.altitude", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "publish_tf")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Whether or not to publish the TF frames for the vehicle. This feature 'technically' exists in MAVROS, but doesn't work properly.";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.publish_tf);
          parameters_interface_->declare_parameter(prefix_ + "publish_tf", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "message_intervals.ids");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.message_intervals.ids = param.as_integer_array();
      param = parameters_interface_->get_parameter(prefix_ + "message_intervals.rates");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.message_intervals.rates = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "set_ekf_origin");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.set_ekf_origin = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "ekf_origin.latitude");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.ekf_origin.latitude = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "ekf_origin.longitude");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.ekf_origin.longitude = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "ekf_origin.altitude");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.ekf_origin.altitude = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "publish_tf");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.publish_tf = param.as_bool();


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
      rclcpp::Logger logger_ = rclcpp::get_logger("ardusub_manager");
      std::mutex mutable mutex_;
  };

} // namespace ardusub_manager
