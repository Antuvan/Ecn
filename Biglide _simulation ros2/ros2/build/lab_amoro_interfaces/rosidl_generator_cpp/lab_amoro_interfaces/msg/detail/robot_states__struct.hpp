// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lab_amoro_interfaces:msg/RobotStates.idl
// generated code does not contain a copyright notice

#ifndef LAB_AMORO_INTERFACES__MSG__DETAIL__ROBOT_STATES__STRUCT_HPP_
#define LAB_AMORO_INTERFACES__MSG__DETAIL__ROBOT_STATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'end_effector_x'
// Member 'end_effector_y'
// Member 'active_left_joint'
// Member 'active_right_joint'
// Member 'passive_left_joint'
// Member 'passive_right_joint'
#include "lab_amoro_interfaces/msg/detail/states__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lab_amoro_interfaces__msg__RobotStates __attribute__((deprecated))
#else
# define DEPRECATED__lab_amoro_interfaces__msg__RobotStates __declspec(deprecated)
#endif

namespace lab_amoro_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotStates_
{
  using Type = RobotStates_<ContainerAllocator>;

  explicit RobotStates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : end_effector_x(_init),
    end_effector_y(_init),
    active_left_joint(_init),
    active_right_joint(_init),
    passive_left_joint(_init),
    passive_right_joint(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->simulation_time = 0.0f;
    }
  }

  explicit RobotStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : end_effector_x(_alloc, _init),
    end_effector_y(_alloc, _init),
    active_left_joint(_alloc, _init),
    active_right_joint(_alloc, _init),
    passive_left_joint(_alloc, _init),
    passive_right_joint(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->simulation_time = 0.0f;
    }
  }

  // field types and members
  using _simulation_time_type =
    float;
  _simulation_time_type simulation_time;
  using _end_effector_x_type =
    lab_amoro_interfaces::msg::States_<ContainerAllocator>;
  _end_effector_x_type end_effector_x;
  using _end_effector_y_type =
    lab_amoro_interfaces::msg::States_<ContainerAllocator>;
  _end_effector_y_type end_effector_y;
  using _active_left_joint_type =
    lab_amoro_interfaces::msg::States_<ContainerAllocator>;
  _active_left_joint_type active_left_joint;
  using _active_right_joint_type =
    lab_amoro_interfaces::msg::States_<ContainerAllocator>;
  _active_right_joint_type active_right_joint;
  using _passive_left_joint_type =
    lab_amoro_interfaces::msg::States_<ContainerAllocator>;
  _passive_left_joint_type passive_left_joint;
  using _passive_right_joint_type =
    lab_amoro_interfaces::msg::States_<ContainerAllocator>;
  _passive_right_joint_type passive_right_joint;

  // setters for named parameter idiom
  Type & set__simulation_time(
    const float & _arg)
  {
    this->simulation_time = _arg;
    return *this;
  }
  Type & set__end_effector_x(
    const lab_amoro_interfaces::msg::States_<ContainerAllocator> & _arg)
  {
    this->end_effector_x = _arg;
    return *this;
  }
  Type & set__end_effector_y(
    const lab_amoro_interfaces::msg::States_<ContainerAllocator> & _arg)
  {
    this->end_effector_y = _arg;
    return *this;
  }
  Type & set__active_left_joint(
    const lab_amoro_interfaces::msg::States_<ContainerAllocator> & _arg)
  {
    this->active_left_joint = _arg;
    return *this;
  }
  Type & set__active_right_joint(
    const lab_amoro_interfaces::msg::States_<ContainerAllocator> & _arg)
  {
    this->active_right_joint = _arg;
    return *this;
  }
  Type & set__passive_left_joint(
    const lab_amoro_interfaces::msg::States_<ContainerAllocator> & _arg)
  {
    this->passive_left_joint = _arg;
    return *this;
  }
  Type & set__passive_right_joint(
    const lab_amoro_interfaces::msg::States_<ContainerAllocator> & _arg)
  {
    this->passive_right_joint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lab_amoro_interfaces::msg::RobotStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const lab_amoro_interfaces::msg::RobotStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lab_amoro_interfaces::msg::RobotStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lab_amoro_interfaces::msg::RobotStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lab_amoro_interfaces::msg::RobotStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lab_amoro_interfaces::msg::RobotStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lab_amoro_interfaces::msg::RobotStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lab_amoro_interfaces::msg::RobotStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lab_amoro_interfaces::msg::RobotStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lab_amoro_interfaces::msg::RobotStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lab_amoro_interfaces__msg__RobotStates
    std::shared_ptr<lab_amoro_interfaces::msg::RobotStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lab_amoro_interfaces__msg__RobotStates
    std::shared_ptr<lab_amoro_interfaces::msg::RobotStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotStates_ & other) const
  {
    if (this->simulation_time != other.simulation_time) {
      return false;
    }
    if (this->end_effector_x != other.end_effector_x) {
      return false;
    }
    if (this->end_effector_y != other.end_effector_y) {
      return false;
    }
    if (this->active_left_joint != other.active_left_joint) {
      return false;
    }
    if (this->active_right_joint != other.active_right_joint) {
      return false;
    }
    if (this->passive_left_joint != other.passive_left_joint) {
      return false;
    }
    if (this->passive_right_joint != other.passive_right_joint) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotStates_

// alias to use template instance with default allocator
using RobotStates =
  lab_amoro_interfaces::msg::RobotStates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lab_amoro_interfaces

#endif  // LAB_AMORO_INTERFACES__MSG__DETAIL__ROBOT_STATES__STRUCT_HPP_
