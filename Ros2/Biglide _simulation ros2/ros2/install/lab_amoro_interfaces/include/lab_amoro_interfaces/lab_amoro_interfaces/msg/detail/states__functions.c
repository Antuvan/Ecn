// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lab_amoro_interfaces:msg/States.idl
// generated code does not contain a copyright notice
#include "lab_amoro_interfaces/msg/detail/states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
lab_amoro_interfaces__msg__States__init(lab_amoro_interfaces__msg__States * msg)
{
  if (!msg) {
    return false;
  }
  // position
  // velocity
  // acceleration
  return true;
}

void
lab_amoro_interfaces__msg__States__fini(lab_amoro_interfaces__msg__States * msg)
{
  if (!msg) {
    return;
  }
  // position
  // velocity
  // acceleration
}

bool
lab_amoro_interfaces__msg__States__are_equal(const lab_amoro_interfaces__msg__States * lhs, const lab_amoro_interfaces__msg__States * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // acceleration
  if (lhs->acceleration != rhs->acceleration) {
    return false;
  }
  return true;
}

bool
lab_amoro_interfaces__msg__States__copy(
  const lab_amoro_interfaces__msg__States * input,
  lab_amoro_interfaces__msg__States * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  output->position = input->position;
  // velocity
  output->velocity = input->velocity;
  // acceleration
  output->acceleration = input->acceleration;
  return true;
}

lab_amoro_interfaces__msg__States *
lab_amoro_interfaces__msg__States__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lab_amoro_interfaces__msg__States * msg = (lab_amoro_interfaces__msg__States *)allocator.allocate(sizeof(lab_amoro_interfaces__msg__States), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lab_amoro_interfaces__msg__States));
  bool success = lab_amoro_interfaces__msg__States__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lab_amoro_interfaces__msg__States__destroy(lab_amoro_interfaces__msg__States * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lab_amoro_interfaces__msg__States__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lab_amoro_interfaces__msg__States__Sequence__init(lab_amoro_interfaces__msg__States__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lab_amoro_interfaces__msg__States * data = NULL;

  if (size) {
    data = (lab_amoro_interfaces__msg__States *)allocator.zero_allocate(size, sizeof(lab_amoro_interfaces__msg__States), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lab_amoro_interfaces__msg__States__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lab_amoro_interfaces__msg__States__fini(&data[i - 1]);
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
lab_amoro_interfaces__msg__States__Sequence__fini(lab_amoro_interfaces__msg__States__Sequence * array)
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
      lab_amoro_interfaces__msg__States__fini(&array->data[i]);
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

lab_amoro_interfaces__msg__States__Sequence *
lab_amoro_interfaces__msg__States__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lab_amoro_interfaces__msg__States__Sequence * array = (lab_amoro_interfaces__msg__States__Sequence *)allocator.allocate(sizeof(lab_amoro_interfaces__msg__States__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lab_amoro_interfaces__msg__States__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lab_amoro_interfaces__msg__States__Sequence__destroy(lab_amoro_interfaces__msg__States__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lab_amoro_interfaces__msg__States__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lab_amoro_interfaces__msg__States__Sequence__are_equal(const lab_amoro_interfaces__msg__States__Sequence * lhs, const lab_amoro_interfaces__msg__States__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lab_amoro_interfaces__msg__States__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lab_amoro_interfaces__msg__States__Sequence__copy(
  const lab_amoro_interfaces__msg__States__Sequence * input,
  lab_amoro_interfaces__msg__States__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lab_amoro_interfaces__msg__States);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lab_amoro_interfaces__msg__States * data =
      (lab_amoro_interfaces__msg__States *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lab_amoro_interfaces__msg__States__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lab_amoro_interfaces__msg__States__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lab_amoro_interfaces__msg__States__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
