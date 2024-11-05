// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lab_amoro_interfaces:msg/RobotStates.idl
// generated code does not contain a copyright notice

#ifndef LAB_AMORO_INTERFACES__MSG__DETAIL__ROBOT_STATES__TRAITS_HPP_
#define LAB_AMORO_INTERFACES__MSG__DETAIL__ROBOT_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lab_amoro_interfaces/msg/detail/robot_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'end_effector_x'
// Member 'end_effector_y'
// Member 'active_left_joint'
// Member 'active_right_joint'
// Member 'passive_left_joint'
// Member 'passive_right_joint'
#include "lab_amoro_interfaces/msg/detail/states__traits.hpp"

namespace lab_amoro_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotStates & msg,
  std::ostream & out)
{
  out << "{";
  // member: simulation_time
  {
    out << "simulation_time: ";
    rosidl_generator_traits::value_to_yaml(msg.simulation_time, out);
    out << ", ";
  }

  // member: end_effector_x
  {
    out << "end_effector_x: ";
    to_flow_style_yaml(msg.end_effector_x, out);
    out << ", ";
  }

  // member: end_effector_y
  {
    out << "end_effector_y: ";
    to_flow_style_yaml(msg.end_effector_y, out);
    out << ", ";
  }

  // member: active_left_joint
  {
    out << "active_left_joint: ";
    to_flow_style_yaml(msg.active_left_joint, out);
    out << ", ";
  }

  // member: active_right_joint
  {
    out << "active_right_joint: ";
    to_flow_style_yaml(msg.active_right_joint, out);
    out << ", ";
  }

  // member: passive_left_joint
  {
    out << "passive_left_joint: ";
    to_flow_style_yaml(msg.passive_left_joint, out);
    out << ", ";
  }

  // member: passive_right_joint
  {
    out << "passive_right_joint: ";
    to_flow_style_yaml(msg.passive_right_joint, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: simulation_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "simulation_time: ";
    rosidl_generator_traits::value_to_yaml(msg.simulation_time, out);
    out << "\n";
  }

  // member: end_effector_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_effector_x:\n";
    to_block_style_yaml(msg.end_effector_x, out, indentation + 2);
  }

  // member: end_effector_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_effector_y:\n";
    to_block_style_yaml(msg.end_effector_y, out, indentation + 2);
  }

  // member: active_left_joint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_left_joint:\n";
    to_block_style_yaml(msg.active_left_joint, out, indentation + 2);
  }

  // member: active_right_joint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_right_joint:\n";
    to_block_style_yaml(msg.active_right_joint, out, indentation + 2);
  }

  // member: passive_left_joint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "passive_left_joint:\n";
    to_block_style_yaml(msg.passive_left_joint, out, indentation + 2);
  }

  // member: passive_right_joint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "passive_right_joint:\n";
    to_block_style_yaml(msg.passive_right_joint, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotStates & msg, bool use_flow_style = false)
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

}  // namespace lab_amoro_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use lab_amoro_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lab_amoro_interfaces::msg::RobotStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  lab_amoro_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lab_amoro_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const lab_amoro_interfaces::msg::RobotStates & msg)
{
  return lab_amoro_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lab_amoro_interfaces::msg::RobotStates>()
{
  return "lab_amoro_interfaces::msg::RobotStates";
}

template<>
inline const char * name<lab_amoro_interfaces::msg::RobotStates>()
{
  return "lab_amoro_interfaces/msg/RobotStates";
}

template<>
struct has_fixed_size<lab_amoro_interfaces::msg::RobotStates>
  : std::integral_constant<bool, has_fixed_size<lab_amoro_interfaces::msg::States>::value> {};

template<>
struct has_bounded_size<lab_amoro_interfaces::msg::RobotStates>
  : std::integral_constant<bool, has_bounded_size<lab_amoro_interfaces::msg::States>::value> {};

template<>
struct is_message<lab_amoro_interfaces::msg::RobotStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LAB_AMORO_INTERFACES__MSG__DETAIL__ROBOT_STATES__TRAITS_HPP_
