// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from black_detection_interfaces:srv/DetectBlackObjects.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "black_detection_interfaces/srv/detail/detect_black_objects__rosidl_typesupport_introspection_c.h"
#include "black_detection_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "black_detection_interfaces/srv/detail/detect_black_objects__functions.h"
#include "black_detection_interfaces/srv/detail/detect_black_objects__struct.h"


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/image.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void black_detection_interfaces__srv__DetectBlackObjects_Request__rosidl_typesupport_introspection_c__DetectBlackObjects_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  black_detection_interfaces__srv__DetectBlackObjects_Request__init(message_memory);
}

void black_detection_interfaces__srv__DetectBlackObjects_Request__rosidl_typesupport_introspection_c__DetectBlackObjects_Request_fini_function(void * message_memory)
{
  black_detection_interfaces__srv__DetectBlackObjects_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember black_detection_interfaces__srv__DetectBlackObjects_Request__rosidl_typesupport_introspection_c__DetectBlackObjects_Request_message_member_array[4] = {
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces__srv__DetectBlackObjects_Request, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "black_threshold",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces__srv__DetectBlackObjects_Request, black_threshold),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_area",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces__srv__DetectBlackObjects_Request, min_area),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_area",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces__srv__DetectBlackObjects_Request, max_area),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers black_detection_interfaces__srv__DetectBlackObjects_Request__rosidl_typesupport_introspection_c__DetectBlackObjects_Request_message_members = {
  "black_detection_interfaces__srv",  // message namespace
  "DetectBlackObjects_Request",  // message name
  4,  // number of fields
  sizeof(black_detection_interfaces__srv__DetectBlackObjects_Request),
  black_detection_interfaces__srv__DetectBlackObjects_Request__rosidl_typesupport_introspection_c__DetectBlackObjects_Request_message_member_array,  // message members
  black_detection_interfaces__srv__DetectBlackObjects_Request__rosidl_typesupport_introspection_c__DetectBlackObjects_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  black_detection_interfaces__srv__DetectBlackObjects_Request__rosidl_typesupport_introspection_c__DetectBlackObjects_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t black_detection_interfaces__srv__DetectBlackObjects_Request__rosidl_typesupport_introspection_c__DetectBlackObjects_Request_message_type_support_handle = {
  0,
  &black_detection_interfaces__srv__DetectBlackObjects_Request__rosidl_typesupport_introspection_c__DetectBlackObjects_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_black_detection_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, black_detection_interfaces, srv, DetectBlackObjects_Request)() {
  black_detection_interfaces__srv__DetectBlackObjects_Request__rosidl_typesupport_introspection_c__DetectBlackObjects_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!black_detection_interfaces__srv__DetectBlackObjects_Request__rosidl_typesupport_introspection_c__DetectBlackObjects_Request_message_type_support_handle.typesupport_identifier) {
    black_detection_interfaces__srv__DetectBlackObjects_Request__rosidl_typesupport_introspection_c__DetectBlackObjects_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &black_detection_interfaces__srv__DetectBlackObjects_Request__rosidl_typesupport_introspection_c__DetectBlackObjects_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "black_detection_interfaces/srv/detail/detect_black_objects__rosidl_typesupport_introspection_c.h"
// already included above
// #include "black_detection_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "black_detection_interfaces/srv/detail/detect_black_objects__functions.h"
// already included above
// #include "black_detection_interfaces/srv/detail/detect_black_objects__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `centroids`
#include "geometry_msgs/msg/point.h"
// Member `centroids`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `sizes`
#include "geometry_msgs/msg/point32.h"
// Member `sizes`
#include "geometry_msgs/msg/detail/point32__rosidl_typesupport_introspection_c.h"
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__DetectBlackObjects_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  black_detection_interfaces__srv__DetectBlackObjects_Response__init(message_memory);
}

void black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__DetectBlackObjects_Response_fini_function(void * message_memory)
{
  black_detection_interfaces__srv__DetectBlackObjects_Response__fini(message_memory);
}

size_t black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__size_function__DetectBlackObjects_Response__centroids(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__get_const_function__DetectBlackObjects_Response__centroids(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__get_function__DetectBlackObjects_Response__centroids(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__fetch_function__DetectBlackObjects_Response__centroids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__get_const_function__DetectBlackObjects_Response__centroids(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__assign_function__DetectBlackObjects_Response__centroids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__get_function__DetectBlackObjects_Response__centroids(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__resize_function__DetectBlackObjects_Response__centroids(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__size_function__DetectBlackObjects_Response__sizes(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point32__Sequence * member =
    (const geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  return member->size;
}

const void * black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__get_const_function__DetectBlackObjects_Response__sizes(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point32__Sequence * member =
    (const geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__get_function__DetectBlackObjects_Response__sizes(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point32__Sequence * member =
    (geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  return &member->data[index];
}

void black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__fetch_function__DetectBlackObjects_Response__sizes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point32 * item =
    ((const geometry_msgs__msg__Point32 *)
    black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__get_const_function__DetectBlackObjects_Response__sizes(untyped_member, index));
  geometry_msgs__msg__Point32 * value =
    (geometry_msgs__msg__Point32 *)(untyped_value);
  *value = *item;
}

void black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__assign_function__DetectBlackObjects_Response__sizes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point32 * item =
    ((geometry_msgs__msg__Point32 *)
    black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__get_function__DetectBlackObjects_Response__sizes(untyped_member, index));
  const geometry_msgs__msg__Point32 * value =
    (const geometry_msgs__msg__Point32 *)(untyped_value);
  *item = *value;
}

bool black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__resize_function__DetectBlackObjects_Response__sizes(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point32__Sequence * member =
    (geometry_msgs__msg__Point32__Sequence *)(untyped_member);
  geometry_msgs__msg__Point32__Sequence__fini(member);
  return geometry_msgs__msg__Point32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__DetectBlackObjects_Response_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces__srv__DetectBlackObjects_Response, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "centroids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces__srv__DetectBlackObjects_Response, centroids),  // bytes offset in struct
    NULL,  // default value
    black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__size_function__DetectBlackObjects_Response__centroids,  // size() function pointer
    black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__get_const_function__DetectBlackObjects_Response__centroids,  // get_const(index) function pointer
    black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__get_function__DetectBlackObjects_Response__centroids,  // get(index) function pointer
    black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__fetch_function__DetectBlackObjects_Response__centroids,  // fetch(index, &value) function pointer
    black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__assign_function__DetectBlackObjects_Response__centroids,  // assign(index, value) function pointer
    black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__resize_function__DetectBlackObjects_Response__centroids  // resize(index) function pointer
  },
  {
    "sizes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces__srv__DetectBlackObjects_Response, sizes),  // bytes offset in struct
    NULL,  // default value
    black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__size_function__DetectBlackObjects_Response__sizes,  // size() function pointer
    black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__get_const_function__DetectBlackObjects_Response__sizes,  // get_const(index) function pointer
    black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__get_function__DetectBlackObjects_Response__sizes,  // get(index) function pointer
    black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__fetch_function__DetectBlackObjects_Response__sizes,  // fetch(index, &value) function pointer
    black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__assign_function__DetectBlackObjects_Response__sizes,  // assign(index, value) function pointer
    black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__resize_function__DetectBlackObjects_Response__sizes  // resize(index) function pointer
  },
  {
    "count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces__srv__DetectBlackObjects_Response, count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces__srv__DetectBlackObjects_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces__srv__DetectBlackObjects_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__DetectBlackObjects_Response_message_members = {
  "black_detection_interfaces__srv",  // message namespace
  "DetectBlackObjects_Response",  // message name
  6,  // number of fields
  sizeof(black_detection_interfaces__srv__DetectBlackObjects_Response),
  black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__DetectBlackObjects_Response_message_member_array,  // message members
  black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__DetectBlackObjects_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__DetectBlackObjects_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__DetectBlackObjects_Response_message_type_support_handle = {
  0,
  &black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__DetectBlackObjects_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_black_detection_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, black_detection_interfaces, srv, DetectBlackObjects_Response)() {
  black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__DetectBlackObjects_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__DetectBlackObjects_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__DetectBlackObjects_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point32)();
  if (!black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__DetectBlackObjects_Response_message_type_support_handle.typesupport_identifier) {
    black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__DetectBlackObjects_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &black_detection_interfaces__srv__DetectBlackObjects_Response__rosidl_typesupport_introspection_c__DetectBlackObjects_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "black_detection_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "black_detection_interfaces/srv/detail/detect_black_objects__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers black_detection_interfaces__srv__detail__detect_black_objects__rosidl_typesupport_introspection_c__DetectBlackObjects_service_members = {
  "black_detection_interfaces__srv",  // service namespace
  "DetectBlackObjects",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // black_detection_interfaces__srv__detail__detect_black_objects__rosidl_typesupport_introspection_c__DetectBlackObjects_Request_message_type_support_handle,
  NULL  // response message
  // black_detection_interfaces__srv__detail__detect_black_objects__rosidl_typesupport_introspection_c__DetectBlackObjects_Response_message_type_support_handle
};

static rosidl_service_type_support_t black_detection_interfaces__srv__detail__detect_black_objects__rosidl_typesupport_introspection_c__DetectBlackObjects_service_type_support_handle = {
  0,
  &black_detection_interfaces__srv__detail__detect_black_objects__rosidl_typesupport_introspection_c__DetectBlackObjects_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, black_detection_interfaces, srv, DetectBlackObjects_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, black_detection_interfaces, srv, DetectBlackObjects_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_black_detection_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, black_detection_interfaces, srv, DetectBlackObjects)() {
  if (!black_detection_interfaces__srv__detail__detect_black_objects__rosidl_typesupport_introspection_c__DetectBlackObjects_service_type_support_handle.typesupport_identifier) {
    black_detection_interfaces__srv__detail__detect_black_objects__rosidl_typesupport_introspection_c__DetectBlackObjects_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)black_detection_interfaces__srv__detail__detect_black_objects__rosidl_typesupport_introspection_c__DetectBlackObjects_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, black_detection_interfaces, srv, DetectBlackObjects_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, black_detection_interfaces, srv, DetectBlackObjects_Response)()->data;
  }

  return &black_detection_interfaces__srv__detail__detect_black_objects__rosidl_typesupport_introspection_c__DetectBlackObjects_service_type_support_handle;
}
