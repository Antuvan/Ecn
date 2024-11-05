// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lab_amoro_interfaces:msg/RobotStates.idl
// generated code does not contain a copyright notice

#ifndef LAB_AMORO_INTERFACES__MSG__DETAIL__ROBOT_STATES__BUILDER_HPP_
#define LAB_AMORO_INTERFACES__MSG__DETAIL__ROBOT_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lab_amoro_interfaces/msg/detail/robot_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lab_amoro_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotStates_passive_right_joint
{
public:
  explicit Init_RobotStates_passive_right_joint(::lab_amoro_interfaces::msg::RobotStates & msg)
  : msg_(msg)
  {}
  ::lab_amoro_interfaces::msg::RobotStates passive_right_joint(::lab_amoro_interfaces::msg::RobotStates::_passive_right_joint_type arg)
  {
    msg_.passive_right_joint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lab_amoro_interfaces::msg::RobotStates msg_;
};

class Init_RobotStates_passive_left_joint
{
public:
  explicit Init_RobotStates_passive_left_joint(::lab_amoro_interfaces::msg::RobotStates & msg)
  : msg_(msg)
  {}
  Init_RobotStates_passive_right_joint passive_left_joint(::lab_amoro_interfaces::msg::RobotStates::_passive_left_joint_type arg)
  {
    msg_.passive_left_joint = std::move(arg);
    return Init_RobotStates_passive_right_joint(msg_);
  }

private:
  ::lab_amoro_interfaces::msg::RobotStates msg_;
};

class Init_RobotStates_active_right_joint
{
public:
  explicit Init_RobotStates_active_right_joint(::lab_amoro_interfaces::msg::RobotStates & msg)
  : msg_(msg)
  {}
  Init_RobotStates_passive_left_joint active_right_joint(::lab_amoro_interfaces::msg::RobotStates::_active_right_joint_type arg)
  {
    msg_.active_right_joint = std::move(arg);
    return Init_RobotStates_passive_left_joint(msg_);
  }

private:
  ::lab_amoro_interfaces::msg::RobotStates msg_;
};

class Init_RobotStates_active_left_joint
{
public:
  explicit Init_RobotStates_active_left_joint(::lab_amoro_interfaces::msg::RobotStates & msg)
  : msg_(msg)
  {}
  Init_RobotStates_active_right_joint active_left_joint(::lab_amoro_interfaces::msg::RobotStates::_active_left_joint_type arg)
  {
    msg_.active_left_joint = std::move(arg);
    return Init_RobotStates_active_right_joint(msg_);
  }

private:
  ::lab_amoro_interfaces::msg::RobotStates msg_;
};

class Init_RobotStates_end_effector_y
{
public:
  explicit Init_RobotStates_end_effector_y(::lab_amoro_interfaces::msg::RobotStates & msg)
  : msg_(msg)
  {}
  Init_RobotStates_active_left_joint end_effector_y(::lab_amoro_interfaces::msg::RobotStates::_end_effector_y_type arg)
  {
    msg_.end_effector_y = std::move(arg);
    return Init_RobotStates_active_left_joint(msg_);
  }

private:
  ::lab_amoro_interfaces::msg::RobotStates msg_;
};

class Init_RobotStates_end_effector_x
{
public:
  explicit Init_RobotStates_end_effector_x(::lab_amoro_interfaces::msg::RobotStates & msg)
  : msg_(msg)
  {}
  Init_RobotStates_end_effector_y end_effector_x(::lab_amoro_interfaces::msg::RobotStates::_end_effector_x_type arg)
  {
    msg_.end_effector_x = std::move(arg);
    return Init_RobotStates_end_effector_y(msg_);
  }

private:
  ::lab_amoro_interfaces::msg::RobotStates msg_;
};

class Init_RobotStates_simulation_time
{
public:
  Init_RobotStates_simulation_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStates_end_effector_x simulation_time(::lab_amoro_interfaces::msg::RobotStates::_simulation_time_type arg)
  {
    msg_.simulation_time = std::move(arg);
    return Init_RobotStates_end_effector_x(msg_);
  }

private:
  ::lab_amoro_interfaces::msg::RobotStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lab_amoro_interfaces::msg::RobotStates>()
{
  return lab_amoro_interfaces::msg::builder::Init_RobotStates_simulation_time();
}

}  // namespace lab_amoro_interfaces

#endif  // LAB_AMORO_INTERFACES__MSG__DETAIL__ROBOT_STATES__BUILDER_HPP_
