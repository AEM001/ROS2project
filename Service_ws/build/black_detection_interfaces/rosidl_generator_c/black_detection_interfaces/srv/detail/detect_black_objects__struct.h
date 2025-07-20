// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from black_detection_interfaces:srv/DetectBlackObjects.idl
// generated code does not contain a copyright notice

#ifndef BLACK_DETECTION_INTERFACES__SRV__DETAIL__DETECT_BLACK_OBJECTS__STRUCT_H_
#define BLACK_DETECTION_INTERFACES__SRV__DETAIL__DETECT_BLACK_OBJECTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/DetectBlackObjects in the package black_detection_interfaces.
typedef struct black_detection_interfaces__srv__DetectBlackObjects_Request
{
  /// 输入图像
  sensor_msgs__msg__Image image;
  /// 黑色阈值(0-255)，值越小检测越严格的黑色
  float black_threshold;
  /// 最小检测面积(像素)
  float min_area;
  /// 最大检测面积(像素)
  float max_area;
} black_detection_interfaces__srv__DetectBlackObjects_Request;

// Struct for a sequence of black_detection_interfaces__srv__DetectBlackObjects_Request.
typedef struct black_detection_interfaces__srv__DetectBlackObjects_Request__Sequence
{
  black_detection_interfaces__srv__DetectBlackObjects_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} black_detection_interfaces__srv__DetectBlackObjects_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'centroids'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'sizes'
#include "geometry_msgs/msg/detail/point32__struct.h"
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DetectBlackObjects in the package black_detection_interfaces.
typedef struct black_detection_interfaces__srv__DetectBlackObjects_Response
{
  /// 响应：检测结果
  /// 时间戳和坐标系
  std_msgs__msg__Header header;
  /// 检测到的黑色物体中心点坐标(像素坐标)
  geometry_msgs__msg__Point__Sequence centroids;
  /// 检测到的黑色物体尺寸(宽度和高度)
  geometry_msgs__msg__Point32__Sequence sizes;
  /// 检测到的黑色物体数量
  int32_t count;
  /// 检测是否成功
  bool success;
  /// 状态信息或错误描述
  rosidl_runtime_c__String message;
} black_detection_interfaces__srv__DetectBlackObjects_Response;

// Struct for a sequence of black_detection_interfaces__srv__DetectBlackObjects_Response.
typedef struct black_detection_interfaces__srv__DetectBlackObjects_Response__Sequence
{
  black_detection_interfaces__srv__DetectBlackObjects_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} black_detection_interfaces__srv__DetectBlackObjects_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BLACK_DETECTION_INTERFACES__SRV__DETAIL__DETECT_BLACK_OBJECTS__STRUCT_H_
