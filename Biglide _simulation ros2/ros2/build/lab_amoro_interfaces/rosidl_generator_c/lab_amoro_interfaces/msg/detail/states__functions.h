// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lab_amoro_interfaces:msg/States.idl
// generated code does not contain a copyright notice

#ifndef LAB_AMORO_INTERFACES__MSG__DETAIL__STATES__FUNCTIONS_H_
#define LAB_AMORO_INTERFACES__MSG__DETAIL__STATES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lab_amoro_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "lab_amoro_interfaces/msg/detail/states__struct.h"

/// Initialize msg/States message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lab_amoro_interfaces__msg__States
 * )) before or use
 * lab_amoro_interfaces__msg__States__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lab_amoro_interfaces
bool
lab_amoro_interfaces__msg__States__init(lab_amoro_interfaces__msg__States * msg);

/// Finalize msg/States message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lab_amoro_interfaces
void
lab_amoro_interfaces__msg__States__fini(lab_amoro_interfaces__msg__States * msg);

/// Create msg/States message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lab_amoro_interfaces__msg__States__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lab_amoro_interfaces
lab_amoro_interfaces__msg__States *
lab_amoro_interfaces__msg__States__create();

/// Destroy msg/States message.
/**
 * It calls
 * lab_amoro_interfaces__msg__States__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lab_amoro_interfaces
void
lab_amoro_interfaces__msg__States__destroy(lab_amoro_interfaces__msg__States * msg);

/// Check for msg/States message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lab_amoro_interfaces
bool
lab_amoro_interfaces__msg__States__are_equal(const lab_amoro_interfaces__msg__States * lhs, const lab_amoro_interfaces__msg__States * rhs);

/// Copy a msg/States message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_lab_amoro_interfaces
bool
lab_amoro_interfaces__msg__States__copy(
  const lab_amoro_interfaces__msg__States * input,
  lab_amoro_interfaces__msg__States * output);

/// Initialize array of msg/States messages.
/**
 * It allocates the memory for the number of elements and calls
 * lab_amoro_interfaces__msg__States__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lab_amoro_interfaces
bool
lab_amoro_interfaces__msg__States__Sequence__init(lab_amoro_interfaces__msg__States__Sequence * array, size_t size);

/// Finalize array of msg/States messages.
/**
 * It calls
 * lab_amoro_interfaces__msg__States__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lab_amoro_interfaces
void
lab_amoro_interfaces__msg__States__Sequence__fini(lab_amoro_interfaces__msg__States__Sequence * array);

/// Create array of msg/States messages.
/**
 * It allocates the memory for the array and calls
 * lab_amoro_interfaces__msg__States__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lab_amoro_interfaces
lab_amoro_interfaces__msg__States__Sequence *
lab_amoro_interfaces__msg__States__Sequence__create(size_t size);

/// Destroy array of msg/States messages.
/**
 * It calls
 * lab_amoro_interfaces__msg__States__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lab_amoro_interfaces
void
lab_amoro_interfaces__msg__States__Sequence__destroy(lab_amoro_interfaces__msg__States__Sequence * array);

/// Check for msg/States message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lab_amoro_interfaces
bool
lab_amoro_interfaces__msg__States__Sequence__are_equal(const lab_amoro_interfaces__msg__States__Sequence * lhs, const lab_amoro_interfaces__msg__States__Sequence * rhs);

/// Copy an array of msg/States messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_lab_amoro_interfaces
bool
lab_amoro_interfaces__msg__States__Sequence__copy(
  const lab_amoro_interfaces__msg__States__Sequence * input,
  lab_amoro_interfaces__msg__States__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LAB_AMORO_INTERFACES__MSG__DETAIL__STATES__FUNCTIONS_H_
