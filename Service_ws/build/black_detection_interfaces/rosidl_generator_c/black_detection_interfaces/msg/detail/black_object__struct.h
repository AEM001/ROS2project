// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from black_detection_interfaces:msg/BlackObject.idl
// generated code does not contain a copyright notice

#ifndef BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT__STRUCT_H_
#define BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT__STRUCT_H_

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
// Member 'centroid'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'size'
#include "geometry_msgs/msg/detail/point32__struct.h"

/// Struct defined in msg/BlackObject in the package black_detection_interfaces.
/**
  * 单个黑色物体的信息
 */
typedef struct black_detection_interfaces__msg__BlackObject
{
  /// 时间戳和坐标系
  std_msgs__msg__Header header;
  /// 物体中心点坐标(像素坐标)
  geometry_msgs__msg__Point centroid;
  /// 物体尺寸(宽度和高度)
  geometry_msgs__msg__Point32 size;
  /// 物体面积(像素)
  float area;
  /// 检测置信度(0-1)
  float confidence;
} black_detection_interfaces__msg__BlackObject;

// Struct for a sequence of black_detection_interfaces__msg__BlackObject.
typedef struct black_detection_interfaces__msg__BlackObject__Sequence
{
  black_detection_interfaces__msg__BlackObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} black_detection_interfaces__msg__BlackObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT__STRUCT_H_
