// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lab_amoro_interfaces:msg/JointEfforts.idl
// generated code does not contain a copyright notice

#ifndef LAB_AMORO_INTERFACES__MSG__DETAIL__JOINT_EFFORTS__BUILDER_HPP_
#define LAB_AMORO_INTERFACES__MSG__DETAIL__JOINT_EFFORTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lab_amoro_interfaces/msg/detail/joint_efforts__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lab_amoro_interfaces
{

namespace msg
{

namespace builder
{

class Init_JointEfforts_right_joint
{
public:
  explicit Init_JointEfforts_right_joint(::lab_amoro_interfaces::msg::JointEfforts & msg)
  : msg_(msg)
  {}
  ::lab_amoro_interfaces::msg::JointEfforts right_joint(::lab_amoro_interfaces::msg::JointEfforts::_right_joint_type arg)
  {
    msg_.right_joint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lab_amoro_interfaces::msg::JointEfforts msg_;
};

class Init_JointEfforts_left_joint
{
public:
  Init_JointEfforts_left_joint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointEfforts_right_joint left_joint(::lab_amoro_interfaces::msg::JointEfforts::_left_joint_type arg)
  {
    msg_.left_joint = std::move(arg);
    return Init_JointEfforts_right_joint(msg_);
  }

private:
  ::lab_amoro_interfaces::msg::JointEfforts msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lab_amoro_interfaces::msg::JointEfforts>()
{
  return lab_amoro_interfaces::msg::builder::Init_JointEfforts_left_joint();
}

}  // namespace lab_amoro_interfaces

#endif  // LAB_AMORO_INTERFACES__MSG__DETAIL__JOINT_EFFORTS__BUILDER_HPP_
