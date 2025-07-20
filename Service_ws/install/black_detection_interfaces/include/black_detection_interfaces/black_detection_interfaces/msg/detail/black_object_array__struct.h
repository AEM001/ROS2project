// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from black_detection_interfaces:msg/BlackObjectArray.idl
// generated code does not contain a copyright notice

#ifndef BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT_ARRAY__STRUCT_H_
#define BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'objects'
#include "black_detection_interfaces/msg/detail/black_object__struct.h"

/// Struct defined in msg/BlackObjectArray in the package black_detection_interfaces.
/**
  * 黑色物体数组消息
 */
typedef struct black_detection_interfaces__msg__BlackObjectArray
{
  /// 时间戳和坐标系
  std_msgs__msg__Header header;
  /// 黑色物体数组
  black_detection_interfaces__msg__BlackObject__Sequence objects;
  /// 物体数量
  int32_t count;
} black_detection_interfaces__msg__BlackObjectArray;

// Struct for a sequence of black_detection_interfaces__msg__BlackObjectArray.
typedef struct black_detection_interfaces__msg__BlackObjectArray__Sequence
{
  black_detection_interfaces__msg__BlackObjectArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} black_detection_interfaces__msg__BlackObjectArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT_ARRAY__STRUCT_H_
