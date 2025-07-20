// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from black_detection_interfaces:msg/BlackObject.idl
// generated code does not contain a copyright notice

#ifndef BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT__FUNCTIONS_H_
#define BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "black_detection_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "black_detection_interfaces/msg/detail/black_object__struct.h"

/// Initialize msg/BlackObject message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * black_detection_interfaces__msg__BlackObject
 * )) before or use
 * black_detection_interfaces__msg__BlackObject__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_black_detection_interfaces
bool
black_detection_interfaces__msg__BlackObject__init(black_detection_interfaces__msg__BlackObject * msg);

/// Finalize msg/BlackObject message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_black_detection_interfaces
void
black_detection_interfaces__msg__BlackObject__fini(black_detection_interfaces__msg__BlackObject * msg);

/// Create msg/BlackObject message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * black_detection_interfaces__msg__BlackObject__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_black_detection_interfaces
black_detection_interfaces__msg__BlackObject *
black_detection_interfaces__msg__BlackObject__create();

/// Destroy msg/BlackObject message.
/**
 * It calls
 * black_detection_interfaces__msg__BlackObject__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_black_detection_interfaces
void
black_detection_interfaces__msg__BlackObject__destroy(black_detection_interfaces__msg__BlackObject * msg);

/// Check for msg/BlackObject message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_black_detection_interfaces
bool
black_detection_interfaces__msg__BlackObject__are_equal(const black_detection_interfaces__msg__BlackObject * lhs, const black_detection_interfaces__msg__BlackObject * rhs);

/// Copy a msg/BlackObject message.
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
ROSIDL_GENERATOR_C_PUBLIC_black_detection_interfaces
bool
black_detection_interfaces__msg__BlackObject__copy(
  const black_detection_interfaces__msg__BlackObject * input,
  black_detection_interfaces__msg__BlackObject * output);

/// Initialize array of msg/BlackObject messages.
/**
 * It allocates the memory for the number of elements and calls
 * black_detection_interfaces__msg__BlackObject__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_black_detection_interfaces
bool
black_detection_interfaces__msg__BlackObject__Sequence__init(black_detection_interfaces__msg__BlackObject__Sequence * array, size_t size);

/// Finalize array of msg/BlackObject messages.
/**
 * It calls
 * black_detection_interfaces__msg__BlackObject__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_black_detection_interfaces
void
black_detection_interfaces__msg__BlackObject__Sequence__fini(black_detection_interfaces__msg__BlackObject__Sequence * array);

/// Create array of msg/BlackObject messages.
/**
 * It allocates the memory for the array and calls
 * black_detection_interfaces__msg__BlackObject__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_black_detection_interfaces
black_detection_interfaces__msg__BlackObject__Sequence *
black_detection_interfaces__msg__BlackObject__Sequence__create(size_t size);

/// Destroy array of msg/BlackObject messages.
/**
 * It calls
 * black_detection_interfaces__msg__BlackObject__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_black_detection_interfaces
void
black_detection_interfaces__msg__BlackObject__Sequence__destroy(black_detection_interfaces__msg__BlackObject__Sequence * array);

/// Check for msg/BlackObject message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_black_detection_interfaces
bool
black_detection_interfaces__msg__BlackObject__Sequence__are_equal(const black_detection_interfaces__msg__BlackObject__Sequence * lhs, const black_detection_interfaces__msg__BlackObject__Sequence * rhs);

/// Copy an array of msg/BlackObject messages.
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
ROSIDL_GENERATOR_C_PUBLIC_black_detection_interfaces
bool
black_detection_interfaces__msg__BlackObject__Sequence__copy(
  const black_detection_interfaces__msg__BlackObject__Sequence * input,
  black_detection_interfaces__msg__BlackObject__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT__FUNCTIONS_H_
