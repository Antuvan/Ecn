// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lab_amoro_interfaces:msg/States.idl
// generated code does not contain a copyright notice

#ifndef LAB_AMORO_INTERFACES__MSG__DETAIL__STATES__TRAITS_HPP_
#define LAB_AMORO_INTERFACES__MSG__DETAIL__STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lab_amoro_interfaces/msg/detail/states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lab_amoro_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const States & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const States & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const States & msg, bool use_flow_style = false)
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
  const lab_amoro_interfaces::msg::States & msg,
  std::ostream & out, size_t indentation = 0)
{
  lab_amoro_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lab_amoro_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const lab_amoro_interfaces::msg::States & msg)
{
  return lab_amoro_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lab_amoro_interfaces::msg::States>()
{
  return "lab_amoro_interfaces::msg::States";
}

template<>
inline const char * name<lab_amoro_interfaces::msg::States>()
{
  return "lab_amoro_interfaces/msg/States";
}

template<>
struct has_fixed_size<lab_amoro_interfaces::msg::States>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lab_amoro_interfaces::msg::States>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lab_amoro_interfaces::msg::States>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LAB_AMORO_INTERFACES__MSG__DETAIL__STATES__TRAITS_HPP_
