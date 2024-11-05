// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lab_amoro_interfaces:msg/JointEfforts.idl
// generated code does not contain a copyright notice

#ifndef LAB_AMORO_INTERFACES__MSG__DETAIL__JOINT_EFFORTS__STRUCT_HPP_
#define LAB_AMORO_INTERFACES__MSG__DETAIL__JOINT_EFFORTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lab_amoro_interfaces__msg__JointEfforts __attribute__((deprecated))
#else
# define DEPRECATED__lab_amoro_interfaces__msg__JointEfforts __declspec(deprecated)
#endif

namespace lab_amoro_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointEfforts_
{
  using Type = JointEfforts_<ContainerAllocator>;

  explicit JointEfforts_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_joint = 0.0;
      this->right_joint = 0.0;
    }
  }

  explicit JointEfforts_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_joint = 0.0;
      this->right_joint = 0.0;
    }
  }

  // field types and members
  using _left_joint_type =
    double;
  _left_joint_type left_joint;
  using _right_joint_type =
    double;
  _right_joint_type right_joint;

  // setters for named parameter idiom
  Type & set__left_joint(
    const double & _arg)
  {
    this->left_joint = _arg;
    return *this;
  }
  Type & set__right_joint(
    const double & _arg)
  {
    this->right_joint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lab_amoro_interfaces::msg::JointEfforts_<ContainerAllocator> *;
  using ConstRawPtr =
    const lab_amoro_interfaces::msg::JointEfforts_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lab_amoro_interfaces::msg::JointEfforts_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lab_amoro_interfaces::msg::JointEfforts_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lab_amoro_interfaces::msg::JointEfforts_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lab_amoro_interfaces::msg::JointEfforts_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lab_amoro_interfaces::msg::JointEfforts_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lab_amoro_interfaces::msg::JointEfforts_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lab_amoro_interfaces::msg::JointEfforts_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lab_amoro_interfaces::msg::JointEfforts_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lab_amoro_interfaces__msg__JointEfforts
    std::shared_ptr<lab_amoro_interfaces::msg::JointEfforts_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lab_amoro_interfaces__msg__JointEfforts
    std::shared_ptr<lab_amoro_interfaces::msg::JointEfforts_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointEfforts_ & other) const
  {
    if (this->left_joint != other.left_joint) {
      return false;
    }
    if (this->right_joint != other.right_joint) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointEfforts_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointEfforts_

// alias to use template instance with default allocator
using JointEfforts =
  lab_amoro_interfaces::msg::JointEfforts_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lab_amoro_interfaces

#endif  // LAB_AMORO_INTERFACES__MSG__DETAIL__JOINT_EFFORTS__STRUCT_HPP_
