// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from black_detection_interfaces:srv/DetectBlackObjects.idl
// generated code does not contain a copyright notice
#include "black_detection_interfaces/srv/detail/detect_black_objects__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
black_detection_interfaces__srv__DetectBlackObjects_Request__init(black_detection_interfaces__srv__DetectBlackObjects_Request * msg)
{
  if (!msg) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    black_detection_interfaces__srv__DetectBlackObjects_Request__fini(msg);
    return false;
  }
  // black_threshold
  // min_area
  // max_area
  return true;
}

void
black_detection_interfaces__srv__DetectBlackObjects_Request__fini(black_detection_interfaces__srv__DetectBlackObjects_Request * msg)
{
  if (!msg) {
    return;
  }
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
  // black_threshold
  // min_area
  // max_area
}

bool
black_detection_interfaces__srv__DetectBlackObjects_Request__are_equal(const black_detection_interfaces__srv__DetectBlackObjects_Request * lhs, const black_detection_interfaces__srv__DetectBlackObjects_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  // black_threshold
  if (lhs->black_threshold != rhs->black_threshold) {
    return false;
  }
  // min_area
  if (lhs->min_area != rhs->min_area) {
    return false;
  }
  // max_area
  if (lhs->max_area != rhs->max_area) {
    return false;
  }
  return true;
}

bool
black_detection_interfaces__srv__DetectBlackObjects_Request__copy(
  const black_detection_interfaces__srv__DetectBlackObjects_Request * input,
  black_detection_interfaces__srv__DetectBlackObjects_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  // black_threshold
  output->black_threshold = input->black_threshold;
  // min_area
  output->min_area = input->min_area;
  // max_area
  output->max_area = input->max_area;
  return true;
}

black_detection_interfaces__srv__DetectBlackObjects_Request *
black_detection_interfaces__srv__DetectBlackObjects_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  black_detection_interfaces__srv__DetectBlackObjects_Request * msg = (black_detection_interfaces__srv__DetectBlackObjects_Request *)allocator.allocate(sizeof(black_detection_interfaces__srv__DetectBlackObjects_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(black_detection_interfaces__srv__DetectBlackObjects_Request));
  bool success = black_detection_interfaces__srv__DetectBlackObjects_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
black_detection_interfaces__srv__DetectBlackObjects_Request__destroy(black_detection_interfaces__srv__DetectBlackObjects_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    black_detection_interfaces__srv__DetectBlackObjects_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
black_detection_interfaces__srv__DetectBlackObjects_Request__Sequence__init(black_detection_interfaces__srv__DetectBlackObjects_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  black_detection_interfaces__srv__DetectBlackObjects_Request * data = NULL;

  if (size) {
    data = (black_detection_interfaces__srv__DetectBlackObjects_Request *)allocator.zero_allocate(size, sizeof(black_detection_interfaces__srv__DetectBlackObjects_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = black_detection_interfaces__srv__DetectBlackObjects_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        black_detection_interfaces__srv__DetectBlackObjects_Request__fini(&data[i - 1]);
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
black_detection_interfaces__srv__DetectBlackObjects_Request__Sequence__fini(black_detection_interfaces__srv__DetectBlackObjects_Request__Sequence * array)
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
      black_detection_interfaces__srv__DetectBlackObjects_Request__fini(&array->data[i]);
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

black_detection_interfaces__srv__DetectBlackObjects_Request__Sequence *
black_detection_interfaces__srv__DetectBlackObjects_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  black_detection_interfaces__srv__DetectBlackObjects_Request__Sequence * array = (black_detection_interfaces__srv__DetectBlackObjects_Request__Sequence *)allocator.allocate(sizeof(black_detection_interfaces__srv__DetectBlackObjects_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = black_detection_interfaces__srv__DetectBlackObjects_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
black_detection_interfaces__srv__DetectBlackObjects_Request__Sequence__destroy(black_detection_interfaces__srv__DetectBlackObjects_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    black_detection_interfaces__srv__DetectBlackObjects_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
black_detection_interfaces__srv__DetectBlackObjects_Request__Sequence__are_equal(const black_detection_interfaces__srv__DetectBlackObjects_Request__Sequence * lhs, const black_detection_interfaces__srv__DetectBlackObjects_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!black_detection_interfaces__srv__DetectBlackObjects_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
black_detection_interfaces__srv__DetectBlackObjects_Request__Sequence__copy(
  const black_detection_interfaces__srv__DetectBlackObjects_Request__Sequence * input,
  black_detection_interfaces__srv__DetectBlackObjects_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(black_detection_interfaces__srv__DetectBlackObjects_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    black_detection_interfaces__srv__DetectBlackObjects_Request * data =
      (black_detection_interfaces__srv__DetectBlackObjects_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!black_detection_interfaces__srv__DetectBlackObjects_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          black_detection_interfaces__srv__DetectBlackObjects_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!black_detection_interfaces__srv__DetectBlackObjects_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `centroids`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `sizes`
#include "geometry_msgs/msg/detail/point32__functions.h"
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
black_detection_interfaces__srv__DetectBlackObjects_Response__init(black_detection_interfaces__srv__DetectBlackObjects_Response * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    black_detection_interfaces__srv__DetectBlackObjects_Response__fini(msg);
    return false;
  }
  // centroids
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->centroids, 0)) {
    black_detection_interfaces__srv__DetectBlackObjects_Response__fini(msg);
    return false;
  }
  // sizes
  if (!geometry_msgs__msg__Point32__Sequence__init(&msg->sizes, 0)) {
    black_detection_interfaces__srv__DetectBlackObjects_Response__fini(msg);
    return false;
  }
  // count
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    black_detection_interfaces__srv__DetectBlackObjects_Response__fini(msg);
    return false;
  }
  return true;
}

void
black_detection_interfaces__srv__DetectBlackObjects_Response__fini(black_detection_interfaces__srv__DetectBlackObjects_Response * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // centroids
  geometry_msgs__msg__Point__Sequence__fini(&msg->centroids);
  // sizes
  geometry_msgs__msg__Point32__Sequence__fini(&msg->sizes);
  // count
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
black_detection_interfaces__srv__DetectBlackObjects_Response__are_equal(const black_detection_interfaces__srv__DetectBlackObjects_Response * lhs, const black_detection_interfaces__srv__DetectBlackObjects_Response * rhs)
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
  // centroids
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->centroids), &(rhs->centroids)))
  {
    return false;
  }
  // sizes
  if (!geometry_msgs__msg__Point32__Sequence__are_equal(
      &(lhs->sizes), &(rhs->sizes)))
  {
    return false;
  }
  // count
  if (lhs->count != rhs->count) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
black_detection_interfaces__srv__DetectBlackObjects_Response__copy(
  const black_detection_interfaces__srv__DetectBlackObjects_Response * input,
  black_detection_interfaces__srv__DetectBlackObjects_Response * output)
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
  // centroids
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->centroids), &(output->centroids)))
  {
    return false;
  }
  // sizes
  if (!geometry_msgs__msg__Point32__Sequence__copy(
      &(input->sizes), &(output->sizes)))
  {
    return false;
  }
  // count
  output->count = input->count;
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

black_detection_interfaces__srv__DetectBlackObjects_Response *
black_detection_interfaces__srv__DetectBlackObjects_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  black_detection_interfaces__srv__DetectBlackObjects_Response * msg = (black_detection_interfaces__srv__DetectBlackObjects_Response *)allocator.allocate(sizeof(black_detection_interfaces__srv__DetectBlackObjects_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(black_detection_interfaces__srv__DetectBlackObjects_Response));
  bool success = black_detection_interfaces__srv__DetectBlackObjects_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
black_detection_interfaces__srv__DetectBlackObjects_Response__destroy(black_detection_interfaces__srv__DetectBlackObjects_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    black_detection_interfaces__srv__DetectBlackObjects_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
black_detection_interfaces__srv__DetectBlackObjects_Response__Sequence__init(black_detection_interfaces__srv__DetectBlackObjects_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  black_detection_interfaces__srv__DetectBlackObjects_Response * data = NULL;

  if (size) {
    data = (black_detection_interfaces__srv__DetectBlackObjects_Response *)allocator.zero_allocate(size, sizeof(black_detection_interfaces__srv__DetectBlackObjects_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = black_detection_interfaces__srv__DetectBlackObjects_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        black_detection_interfaces__srv__DetectBlackObjects_Response__fini(&data[i - 1]);
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
black_detection_interfaces__srv__DetectBlackObjects_Response__Sequence__fini(black_detection_interfaces__srv__DetectBlackObjects_Response__Sequence * array)
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
      black_detection_interfaces__srv__DetectBlackObjects_Response__fini(&array->data[i]);
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

black_detection_interfaces__srv__DetectBlackObjects_Response__Sequence *
black_detection_interfaces__srv__DetectBlackObjects_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  black_detection_interfaces__srv__DetectBlackObjects_Response__Sequence * array = (black_detection_interfaces__srv__DetectBlackObjects_Response__Sequence *)allocator.allocate(sizeof(black_detection_interfaces__srv__DetectBlackObjects_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = black_detection_interfaces__srv__DetectBlackObjects_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
black_detection_interfaces__srv__DetectBlackObjects_Response__Sequence__destroy(black_detection_interfaces__srv__DetectBlackObjects_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    black_detection_interfaces__srv__DetectBlackObjects_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
black_detection_interfaces__srv__DetectBlackObjects_Response__Sequence__are_equal(const black_detection_interfaces__srv__DetectBlackObjects_Response__Sequence * lhs, const black_detection_interfaces__srv__DetectBlackObjects_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!black_detection_interfaces__srv__DetectBlackObjects_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
black_detection_interfaces__srv__DetectBlackObjects_Response__Sequence__copy(
  const black_detection_interfaces__srv__DetectBlackObjects_Response__Sequence * input,
  black_detection_interfaces__srv__DetectBlackObjects_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(black_detection_interfaces__srv__DetectBlackObjects_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    black_detection_interfaces__srv__DetectBlackObjects_Response * data =
      (black_detection_interfaces__srv__DetectBlackObjects_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!black_detection_interfaces__srv__DetectBlackObjects_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          black_detection_interfaces__srv__DetectBlackObjects_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!black_detection_interfaces__srv__DetectBlackObjects_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
