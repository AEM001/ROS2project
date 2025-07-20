// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from black_detection_interfaces:msg/BlackObject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "black_detection_interfaces/msg/detail/black_object__rosidl_typesupport_introspection_c.h"
#include "black_detection_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "black_detection_interfaces/msg/detail/black_object__functions.h"
#include "black_detection_interfaces/msg/detail/black_object__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `centroid`
#include "geometry_msgs/msg/point.h"
// Member `centroid`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `size`
#include "geometry_msgs/msg/point32.h"
// Member `size`
#include "geometry_msgs/msg/detail/point32__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void black_detection_interfaces__msg__BlackObject__rosidl_typesupport_introspection_c__BlackObject_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  black_detection_interfaces__msg__BlackObject__init(message_memory);
}

void black_detection_interfaces__msg__BlackObject__rosidl_typesupport_introspection_c__BlackObject_fini_function(void * message_memory)
{
  black_detection_interfaces__msg__BlackObject__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember black_detection_interfaces__msg__BlackObject__rosidl_typesupport_introspection_c__BlackObject_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces__msg__BlackObject, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "centroid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces__msg__BlackObject, centroid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces__msg__BlackObject, size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "area",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces__msg__BlackObject, area),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces__msg__BlackObject, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers black_detection_interfaces__msg__BlackObject__rosidl_typesupport_introspection_c__BlackObject_message_members = {
  "black_detection_interfaces__msg",  // message namespace
  "BlackObject",  // message name
  5,  // number of fields
  sizeof(black_detection_interfaces__msg__BlackObject),
  black_detection_interfaces__msg__BlackObject__rosidl_typesupport_introspection_c__BlackObject_message_member_array,  // message members
  black_detection_interfaces__msg__BlackObject__rosidl_typesupport_introspection_c__BlackObject_init_function,  // function to initialize message memory (memory has to be allocated)
  black_detection_interfaces__msg__BlackObject__rosidl_typesupport_introspection_c__BlackObject_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t black_detection_interfaces__msg__BlackObject__rosidl_typesupport_introspection_c__BlackObject_message_type_support_handle = {
  0,
  &black_detection_interfaces__msg__BlackObject__rosidl_typesupport_introspection_c__BlackObject_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_black_detection_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, black_detection_interfaces, msg, BlackObject)() {
  black_detection_interfaces__msg__BlackObject__rosidl_typesupport_introspection_c__BlackObject_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  black_detection_interfaces__msg__BlackObject__rosidl_typesupport_introspection_c__BlackObject_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  black_detection_interfaces__msg__BlackObject__rosidl_typesupport_introspection_c__BlackObject_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point32)();
  if (!black_detection_interfaces__msg__BlackObject__rosidl_typesupport_introspection_c__BlackObject_message_type_support_handle.typesupport_identifier) {
    black_detection_interfaces__msg__BlackObject__rosidl_typesupport_introspection_c__BlackObject_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &black_detection_interfaces__msg__BlackObject__rosidl_typesupport_introspection_c__BlackObject_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
