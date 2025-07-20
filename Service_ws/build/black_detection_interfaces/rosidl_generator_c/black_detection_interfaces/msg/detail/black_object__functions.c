// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from black_detection_interfaces:msg/BlackObject.idl
// generated code does not contain a copyright notice
#include "black_detection_interfaces/msg/detail/black_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `centroid`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `size`
#include "geometry_msgs/msg/detail/point32__functions.h"

bool
black_detection_interfaces__msg__BlackObject__init(black_detection_interfaces__msg__BlackObject * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    black_detection_interfaces__msg__BlackObject__fini(msg);
    return false;
  }
  // centroid
  if (!geometry_msgs__msg__Point__init(&msg->centroid)) {
    black_detection_interfaces__msg__BlackObject__fini(msg);
    return false;
  }
  // size
  if (!geometry_msgs__msg__Point32__init(&msg->size)) {
    black_detection_interfaces__msg__BlackObject__fini(msg);
    return false;
  }
  // area
  // confidence
  return true;
}

void
black_detection_interfaces__msg__BlackObject__fini(black_detection_interfaces__msg__BlackObject * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // centroid
  geometry_msgs__msg__Point__fini(&msg->centroid);
  // size
  geometry_msgs__msg__Point32__fini(&msg->size);
  // area
  // confidence
}

bool
black_detection_interfaces__msg__BlackObject__are_equal(const black_detection_interfaces__msg__BlackObject * lhs, const black_detection_interfaces__msg__BlackObject * rhs)
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
  // centroid
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->centroid), &(rhs->centroid)))
  {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Point32__are_equal(
      &(lhs->size), &(rhs->size)))
  {
    return false;
  }
  // area
  if (lhs->area != rhs->area) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  return true;
}

bool
black_detection_interfaces__msg__BlackObject__copy(
  const black_detection_interfaces__msg__BlackObject * input,
  black_detection_interfaces__msg__BlackObject * output)
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
  // centroid
  if (!geometry_msgs__msg__Point__copy(
      &(input->centroid), &(output->centroid)))
  {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Point32__copy(
      &(input->size), &(output->size)))
  {
    return false;
  }
  // area
  output->area = input->area;
  // confidence
  output->confidence = input->confidence;
  return true;
}

black_detection_interfaces__msg__BlackObject *
black_detection_interfaces__msg__BlackObject__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  black_detection_interfaces__msg__BlackObject * msg = (black_detection_interfaces__msg__BlackObject *)allocator.allocate(sizeof(black_detection_interfaces__msg__BlackObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(black_detection_interfaces__msg__BlackObject));
  bool success = black_detection_interfaces__msg__BlackObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
black_detection_interfaces__msg__BlackObject__destroy(black_detection_interfaces__msg__BlackObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    black_detection_interfaces__msg__BlackObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
black_detection_interfaces__msg__BlackObject__Sequence__init(black_detection_interfaces__msg__BlackObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  black_detection_interfaces__msg__BlackObject * data = NULL;

  if (size) {
    data = (black_detection_interfaces__msg__BlackObject *)allocator.zero_allocate(size, sizeof(black_detection_interfaces__msg__BlackObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = black_detection_interfaces__msg__BlackObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        black_detection_interfaces__msg__BlackObject__fini(&data[i - 1]);
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
black_detection_interfaces__msg__BlackObject__Sequence__fini(black_detection_interfaces__msg__BlackObject__Sequence * array)
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
      black_detection_interfaces__msg__BlackObject__fini(&array->data[i]);
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

black_detection_interfaces__msg__BlackObject__Sequence *
black_detection_interfaces__msg__BlackObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  black_detection_interfaces__msg__BlackObject__Sequence * array = (black_detection_interfaces__msg__BlackObject__Sequence *)allocator.allocate(sizeof(black_detection_interfaces__msg__BlackObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = black_detection_interfaces__msg__BlackObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
black_detection_interfaces__msg__BlackObject__Sequence__destroy(black_detection_interfaces__msg__BlackObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    black_detection_interfaces__msg__BlackObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
black_detection_interfaces__msg__BlackObject__Sequence__are_equal(const black_detection_interfaces__msg__BlackObject__Sequence * lhs, const black_detection_interfaces__msg__BlackObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!black_detection_interfaces__msg__BlackObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
black_detection_interfaces__msg__BlackObject__Sequence__copy(
  const black_detection_interfaces__msg__BlackObject__Sequence * input,
  black_detection_interfaces__msg__BlackObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(black_detection_interfaces__msg__BlackObject);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    black_detection_interfaces__msg__BlackObject * data =
      (black_detection_interfaces__msg__BlackObject *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!black_detection_interfaces__msg__BlackObject__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          black_detection_interfaces__msg__BlackObject__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!black_detection_interfaces__msg__BlackObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
