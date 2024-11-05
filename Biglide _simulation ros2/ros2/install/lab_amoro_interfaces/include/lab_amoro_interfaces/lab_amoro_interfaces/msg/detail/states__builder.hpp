// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lab_amoro_interfaces:msg/States.idl
// generated code does not contain a copyright notice

#ifndef LAB_AMORO_INTERFACES__MSG__DETAIL__STATES__BUILDER_HPP_
#define LAB_AMORO_INTERFACES__MSG__DETAIL__STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lab_amoro_interfaces/msg/detail/states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lab_amoro_interfaces
{

namespace msg
{

namespace builder
{

class Init_States_acceleration
{
public:
  explicit Init_States_acceleration(::lab_amoro_interfaces::msg::States & msg)
  : msg_(msg)
  {}
  ::lab_amoro_interfaces::msg::States acceleration(::lab_amoro_interfaces::msg::States::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lab_amoro_interfaces::msg::States msg_;
};

class Init_States_velocity
{
public:
  explicit Init_States_velocity(::lab_amoro_interfaces::msg::States & msg)
  : msg_(msg)
  {}
  Init_States_acceleration velocity(::lab_amoro_interfaces::msg::States::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_States_acceleration(msg_);
  }

private:
  ::lab_amoro_interfaces::msg::States msg_;
};

class Init_States_position
{
public:
  Init_States_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_States_velocity position(::lab_amoro_interfaces::msg::States::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_States_velocity(msg_);
  }

private:
  ::lab_amoro_interfaces::msg::States msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lab_amoro_interfaces::msg::States>()
{
  return lab_amoro_interfaces::msg::builder::Init_States_position();
}

}  // namespace lab_amoro_interfaces

#endif  // LAB_AMORO_INTERFACES__MSG__DETAIL__STATES__BUILDER_HPP_
