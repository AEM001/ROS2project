// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from black_detection_interfaces:msg/BlackObjectArray.idl
// generated code does not contain a copyright notice
#include "black_detection_interfaces/msg/detail/black_object_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `objects`
#include "black_detection_interfaces/msg/detail/black_object__functions.h"

bool
black_detection_interfaces__msg__BlackObjectArray__init(black_detection_interfaces__msg__BlackObjectArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    black_detection_interfaces__msg__BlackObjectArray__fini(msg);
    return false;
  }
  // objects
  if (!black_detection_interfaces__msg__BlackObject__Sequence__init(&msg->objects, 0)) {
    black_detection_interfaces__msg__BlackObjectArray__fini(msg);
    return false;
  }
  // count
  return true;
}

void
black_detection_interfaces__msg__BlackObjectArray__fini(black_detection_interfaces__msg__BlackObjectArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // objects
  black_detection_interfaces__msg__BlackObject__Sequence__fini(&msg->objects);
  // count
}

bool
black_detection_interfaces__msg__BlackObjectArray__are_equal(const black_detection_interfaces__msg__BlackObjectArray * lhs, const black_detection_interfaces__msg__BlackObjectArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // objects
  if (!black_detection_interfaces__msg__BlackObject__Sequence__are_equal(
      &(lhs->objects), &(rhs->objects)))
  {
    return false;
  }
  // count
  if (lhs->count != rhs->count) {
    return false;
  }
  return true;
}

bool
black_detection_interfaces__msg__BlackObjectArray__copy(
  const black_detection_interfaces__msg__BlackObjectArray * input,
  black_detection_interfaces__msg__BlackObjectArray * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // objects
  if (!black_detection_interfaces__msg__BlackObject__Sequence__copy(
      &(input->objects), &(output->objects)))
  {
    return false;
  }
  // count
  output->count = input->count;
  return true;
}

black_detection_interfaces__msg__BlackObjectArray *
black_detection_interfaces__msg__BlackObjectArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  black_detection_interfaces__msg__BlackObjectArray * msg = (black_detection_interfaces__msg__BlackObjectArray *)allocator.allocate(sizeof(black_detection_interfaces__msg__BlackObjectArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(black_detection_interfaces__msg__BlackObjectArray));
  bool success = black_detection_interfaces__msg__BlackObjectArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
black_detection_interfaces__msg__BlackObjectArray__destroy(black_detection_interfaces__msg__BlackObjectArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    black_detection_interfaces__msg__BlackObjectArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
black_detection_interfaces__msg__BlackObjectArray__Sequence__init(black_detection_interfaces__msg__BlackObjectArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  black_detection_interfaces__msg__BlackObjectArray * data = NULL;

  if (size) {
    data = (black_detection_interfaces__msg__BlackObjectArray *)allocator.zero_allocate(size, sizeof(black_detection_interfaces__msg__BlackObjectArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = black_detection_interfaces__msg__BlackObjectArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        black_detection_interfaces__msg__BlackObjectArray__fini(&data[i - 1]);
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
black_detection_interfaces__msg__BlackObjectArray__Sequence__fini(black_detection_interfaces__msg__BlackObjectArray__Sequence * array)
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
      black_detection_interfaces__msg__BlackObjectArray__fini(&array->data[i]);
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

black_detection_interfaces__msg__BlackObjectArray__Sequence *
black_detection_interfaces__msg__BlackObjectArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  black_detection_interfaces__msg__BlackObjectArray__Sequence * array = (black_detection_interfaces__msg__BlackObjectArray__Sequence *)allocator.allocate(sizeof(black_detection_interfaces__msg__BlackObjectArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = black_detection_interfaces__msg__BlackObjectArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
black_detection_interfaces__msg__BlackObjectArray__Sequence__destroy(black_detection_interfaces__msg__BlackObjectArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    black_detection_interfaces__msg__BlackObjectArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
black_detection_interfaces__msg__BlackObjectArray__Sequence__are_equal(const black_detection_interfaces__msg__BlackObjectArray__Sequence * lhs, const black_detection_interfaces__msg__BlackObjectArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!black_detection_interfaces__msg__BlackObjectArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
black_detection_interfaces__msg__BlackObjectArray__Sequence__copy(
  const black_detection_interfaces__msg__BlackObjectArray__Sequence * input,
  black_detection_interfaces__msg__BlackObjectArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(black_detection_interfaces__msg__BlackObjectArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    black_detection_interfaces__msg__BlackObjectArray * data =
      (black_detection_interfaces__msg__BlackObjectArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!black_detection_interfaces__msg__BlackObjectArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          black_detection_interfaces__msg__BlackObjectArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!black_detection_interfaces__msg__BlackObjectArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
