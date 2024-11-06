// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lab_amoro_interfaces:msg/RobotStates.idl
// generated code does not contain a copyright notice
#include "lab_amoro_interfaces/msg/detail/robot_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `end_effector_x`
// Member `end_effector_y`
// Member `active_left_joint`
// Member `active_right_joint`
// Member `passive_left_joint`
// Member `passive_right_joint`
#include "lab_amoro_interfaces/msg/detail/states__functions.h"

bool
lab_amoro_interfaces__msg__RobotStates__init(lab_amoro_interfaces__msg__RobotStates * msg)
{
  if (!msg) {
    return false;
  }
  // simulation_time
  // end_effector_x
  if (!lab_amoro_interfaces__msg__States__init(&msg->end_effector_x)) {
    lab_amoro_interfaces__msg__RobotStates__fini(msg);
    return false;
  }
  // end_effector_y
  if (!lab_amoro_interfaces__msg__States__init(&msg->end_effector_y)) {
    lab_amoro_interfaces__msg__RobotStates__fini(msg);
    return false;
  }
  // active_left_joint
  if (!lab_amoro_interfaces__msg__States__init(&msg->active_left_joint)) {
    lab_amoro_interfaces__msg__RobotStates__fini(msg);
    return false;
  }
  // active_right_joint
  if (!lab_amoro_interfaces__msg__States__init(&msg->active_right_joint)) {
    lab_amoro_interfaces__msg__RobotStates__fini(msg);
    return false;
  }
  // passive_left_joint
  if (!lab_amoro_interfaces__msg__States__init(&msg->passive_left_joint)) {
    lab_amoro_interfaces__msg__RobotStates__fini(msg);
    return false;
  }
  // passive_right_joint
  if (!lab_amoro_interfaces__msg__States__init(&msg->passive_right_joint)) {
    lab_amoro_interfaces__msg__RobotStates__fini(msg);
    return false;
  }
  return true;
}

void
lab_amoro_interfaces__msg__RobotStates__fini(lab_amoro_interfaces__msg__RobotStates * msg)
{
  if (!msg) {
    return;
  }
  // simulation_time
  // end_effector_x
  lab_amoro_interfaces__msg__States__fini(&msg->end_effector_x);
  // end_effector_y
  lab_amoro_interfaces__msg__States__fini(&msg->end_effector_y);
  // active_left_joint
  lab_amoro_interfaces__msg__States__fini(&msg->active_left_joint);
  // active_right_joint
  lab_amoro_interfaces__msg__States__fini(&msg->active_right_joint);
  // passive_left_joint
  lab_amoro_interfaces__msg__States__fini(&msg->passive_left_joint);
  // passive_right_joint
  lab_amoro_interfaces__msg__States__fini(&msg->passive_right_joint);
}

bool
lab_amoro_interfaces__msg__RobotStates__are_equal(const lab_amoro_interfaces__msg__RobotStates * lhs, const lab_amoro_interfaces__msg__RobotStates * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // simulation_time
  if (lhs->simulation_time != rhs->simulation_time) {
    return false;
  }
  // end_effector_x
  if (!lab_amoro_interfaces__msg__States__are_equal(
      &(lhs->end_effector_x), &(rhs->end_effector_x)))
  {
    return false;
  }
  // end_effector_y
  if (!lab_amoro_interfaces__msg__States__are_equal(
      &(lhs->end_effector_y), &(rhs->end_effector_y)))
  {
    return false;
  }
  // active_left_joint
  if (!lab_amoro_interfaces__msg__States__are_equal(
      &(lhs->active_left_joint), &(rhs->active_left_joint)))
  {
    return false;
  }
  // active_right_joint
  if (!lab_amoro_interfaces__msg__States__are_equal(
      &(lhs->active_right_joint), &(rhs->active_right_joint)))
  {
    return false;
  }
  // passive_left_joint
  if (!lab_amoro_interfaces__msg__States__are_equal(
      &(lhs->passive_left_joint), &(rhs->passive_left_joint)))
  {
    return false;
  }
  // passive_right_joint
  if (!lab_amoro_interfaces__msg__States__are_equal(
      &(lhs->passive_right_joint), &(rhs->passive_right_joint)))
  {
    return false;
  }
  return true;
}

bool
lab_amoro_interfaces__msg__RobotStates__copy(
  const lab_amoro_interfaces__msg__RobotStates * input,
  lab_amoro_interfaces__msg__RobotStates * output)
{
  if (!input || !output) {
    return false;
  }
  // simulation_time
  output->simulation_time = input->simulation_time;
  // end_effector_x
  if (!lab_amoro_interfaces__msg__States__copy(
      &(input->end_effector_x), &(output->end_effector_x)))
  {
    return false;
  }
  // end_effector_y
  if (!lab_amoro_interfaces__msg__States__copy(
      &(input->end_effector_y), &(output->end_effector_y)))
  {
    return false;
  }
  // active_left_joint
  if (!lab_amoro_interfaces__msg__States__copy(
      &(input->active_left_joint), &(output->active_left_joint)))
  {
    return false;
  }
  // active_right_joint
  if (!lab_amoro_interfaces__msg__States__copy(
      &(input->active_right_joint), &(output->active_right_joint)))
  {
    return false;
  }
  // passive_left_joint
  if (!lab_amoro_interfaces__msg__States__copy(
      &(input->passive_left_joint), &(output->passive_left_joint)))
  {
    return false;
  }
  // passive_right_joint
  if (!lab_amoro_interfaces__msg__States__copy(
      &(input->passive_right_joint), &(output->passive_right_joint)))
  {
    return false;
  }
  return true;
}

lab_amoro_interfaces__msg__RobotStates *
lab_amoro_interfaces__msg__RobotStates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lab_amoro_interfaces__msg__RobotStates * msg = (lab_amoro_interfaces__msg__RobotStates *)allocator.allocate(sizeof(lab_amoro_interfaces__msg__RobotStates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lab_amoro_interfaces__msg__RobotStates));
  bool success = lab_amoro_interfaces__msg__RobotStates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lab_amoro_interfaces__msg__RobotStates__destroy(lab_amoro_interfaces__msg__RobotStates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lab_amoro_interfaces__msg__RobotStates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lab_amoro_interfaces__msg__RobotStates__Sequence__init(lab_amoro_interfaces__msg__RobotStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lab_amoro_interfaces__msg__RobotStates * data = NULL;

  if (size) {
    data = (lab_amoro_interfaces__msg__RobotStates *)allocator.zero_allocate(size, sizeof(lab_amoro_interfaces__msg__RobotStates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lab_amoro_interfaces__msg__RobotStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lab_amoro_interfaces__msg__RobotStates__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
lab_amoro_interfaces__msg__RobotStates__Sequence__fini(lab_amoro_interfaces__msg__RobotStates__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lab_amoro_interfaces__msg__RobotStates__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

lab_amoro_interfaces__msg__RobotStates__Sequence *
lab_amoro_interfaces__msg__RobotStates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lab_amoro_interfaces__msg__RobotStates__Sequence * array = (lab_amoro_interfaces__msg__RobotStates__Sequence *)allocator.allocate(sizeof(lab_amoro_interfaces__msg__RobotStates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lab_amoro_interfaces__msg__RobotStates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lab_amoro_interfaces__msg__RobotStates__Sequence__destroy(lab_amoro_interfaces__msg__RobotStates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lab_amoro_interfaces__msg__RobotStates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lab_amoro_interfaces__msg__RobotStates__Sequence__are_equal(const lab_amoro_interfaces__msg__RobotStates__Sequence * lhs, const lab_amoro_interfaces__msg__RobotStates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lab_amoro_interfaces__msg__RobotStates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lab_amoro_interfaces__msg__RobotStates__Sequence__copy(
  const lab_amoro_interfaces__msg__RobotStates__Sequence * input,
  lab_amoro_interfaces__msg__RobotStates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lab_amoro_interfaces__msg__RobotStates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lab_amoro_interfaces__msg__RobotStates * data =
      (lab_amoro_interfaces__msg__RobotStates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lab_amoro_interfaces__msg__RobotStates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lab_amoro_interfaces__msg__RobotStates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lab_amoro_interfaces__msg__RobotStates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
