// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lab_amoro_interfaces:msg/States.idl
// generated code does not contain a copyright notice

#ifndef LAB_AMORO_INTERFACES__MSG__DETAIL__STATES__STRUCT_H_
#define LAB_AMORO_INTERFACES__MSG__DETAIL__STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/States in the package lab_amoro_interfaces.
typedef struct lab_amoro_interfaces__msg__States
{
  double position;
  double velocity;
  double acceleration;
} lab_amoro_interfaces__msg__States;

// Struct for a sequence of lab_amoro_interfaces__msg__States.
typedef struct lab_amoro_interfaces__msg__States__Sequence
{
  lab_amoro_interfaces__msg__States * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lab_amoro_interfaces__msg__States__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LAB_AMORO_INTERFACES__MSG__DETAIL__STATES__STRUCT_H_
