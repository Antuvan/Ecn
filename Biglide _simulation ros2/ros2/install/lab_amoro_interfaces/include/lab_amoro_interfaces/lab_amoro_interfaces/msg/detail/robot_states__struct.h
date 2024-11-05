// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lab_amoro_interfaces:msg/RobotStates.idl
// generated code does not contain a copyright notice

#ifndef LAB_AMORO_INTERFACES__MSG__DETAIL__ROBOT_STATES__STRUCT_H_
#define LAB_AMORO_INTERFACES__MSG__DETAIL__ROBOT_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'end_effector_x'
// Member 'end_effector_y'
// Member 'active_left_joint'
// Member 'active_right_joint'
// Member 'passive_left_joint'
// Member 'passive_right_joint'
#include "lab_amoro_interfaces/msg/detail/states__struct.h"

/// Struct defined in msg/RobotStates in the package lab_amoro_interfaces.
typedef struct lab_amoro_interfaces__msg__RobotStates
{
  float simulation_time;
  lab_amoro_interfaces__msg__States end_effector_x;
  lab_amoro_interfaces__msg__States end_effector_y;
  lab_amoro_interfaces__msg__States active_left_joint;
  lab_amoro_interfaces__msg__States active_right_joint;
  lab_amoro_interfaces__msg__States passive_left_joint;
  lab_amoro_interfaces__msg__States passive_right_joint;
} lab_amoro_interfaces__msg__RobotStates;

// Struct for a sequence of lab_amoro_interfaces__msg__RobotStates.
typedef struct lab_amoro_interfaces__msg__RobotStates__Sequence
{
  lab_amoro_interfaces__msg__RobotStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lab_amoro_interfaces__msg__RobotStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LAB_AMORO_INTERFACES__MSG__DETAIL__ROBOT_STATES__STRUCT_H_
