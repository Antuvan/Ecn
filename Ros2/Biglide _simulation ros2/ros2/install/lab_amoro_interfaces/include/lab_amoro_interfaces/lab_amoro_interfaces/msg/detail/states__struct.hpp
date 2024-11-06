// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lab_amoro_interfaces:msg/States.idl
// generated code does not contain a copyright notice

#ifndef LAB_AMORO_INTERFACES__MSG__DETAIL__STATES__STRUCT_HPP_
#define LAB_AMORO_INTERFACES__MSG__DETAIL__STATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lab_amoro_interfaces__msg__States __attribute__((deprecated))
#else
# define DEPRECATED__lab_amoro_interfaces__msg__States __declspec(deprecated)
#endif

namespace lab_amoro_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct States_
{
  using Type = States_<ContainerAllocator>;

  explicit States_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0.0;
      this->velocity = 0.0;
      this->acceleration = 0.0;
    }
  }

  explicit States_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0.0;
      this->velocity = 0.0;
      this->acceleration = 0.0;
    }
  }

  // field types and members
  using _position_type =
    double;
  _position_type position;
  using _velocity_type =
    double;
  _velocity_type velocity;
  using _acceleration_type =
    double;
  _acceleration_type acceleration;

  // setters for named parameter idiom
  Type & set__position(
    const double & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const double & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acceleration(
    const double & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lab_amoro_interfaces::msg::States_<ContainerAllocator> *;
  using ConstRawPtr =
    const lab_amoro_interfaces::msg::States_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lab_amoro_interfaces::msg::States_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lab_amoro_interfaces::msg::States_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lab_amoro_interfaces::msg::States_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lab_amoro_interfaces::msg::States_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lab_amoro_interfaces::msg::States_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lab_amoro_interfaces::msg::States_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lab_amoro_interfaces::msg::States_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lab_amoro_interfaces::msg::States_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lab_amoro_interfaces__msg__States
    std::shared_ptr<lab_amoro_interfaces::msg::States_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lab_amoro_interfaces__msg__States
    std::shared_ptr<lab_amoro_interfaces::msg::States_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const States_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    return true;
  }
  bool operator!=(const States_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct States_

// alias to use template instance with default allocator
using States =
  lab_amoro_interfaces::msg::States_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lab_amoro_interfaces

#endif  // LAB_AMORO_INTERFACES__MSG__DETAIL__STATES__STRUCT_HPP_
