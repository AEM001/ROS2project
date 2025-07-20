// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from black_detection_interfaces:msg/BlackObjectArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "black_detection_interfaces/msg/detail/black_object_array__rosidl_typesupport_introspection_c.h"
#include "black_detection_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "black_detection_interfaces/msg/detail/black_object_array__functions.h"
#include "black_detection_interfaces/msg/detail/black_object_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `objects`
#include "black_detection_interfaces/msg/black_object.h"
// Member `objects`
#include "black_detection_interfaces/msg/detail/black_object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__BlackObjectArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  black_detection_interfaces__msg__BlackObjectArray__init(message_memory);
}

void black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__BlackObjectArray_fini_function(void * message_memory)
{
  black_detection_interfaces__msg__BlackObjectArray__fini(message_memory);
}

size_t black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__size_function__BlackObjectArray__objects(
  const void * untyped_member)
{
  const black_detection_interfaces__msg__BlackObject__Sequence * member =
    (const black_detection_interfaces__msg__BlackObject__Sequence *)(untyped_member);
  return member->size;
}

const void * black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__get_const_function__BlackObjectArray__objects(
  const void * untyped_member, size_t index)
{
  const black_detection_interfaces__msg__BlackObject__Sequence * member =
    (const black_detection_interfaces__msg__BlackObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__get_function__BlackObjectArray__objects(
  void * untyped_member, size_t index)
{
  black_detection_interfaces__msg__BlackObject__Sequence * member =
    (black_detection_interfaces__msg__BlackObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__fetch_function__BlackObjectArray__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const black_detection_interfaces__msg__BlackObject * item =
    ((const black_detection_interfaces__msg__BlackObject *)
    black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__get_const_function__BlackObjectArray__objects(untyped_member, index));
  black_detection_interfaces__msg__BlackObject * value =
    (black_detection_interfaces__msg__BlackObject *)(untyped_value);
  *value = *item;
}

void black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__assign_function__BlackObjectArray__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  black_detection_interfaces__msg__BlackObject * item =
    ((black_detection_interfaces__msg__BlackObject *)
    black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__get_function__BlackObjectArray__objects(untyped_member, index));
  const black_detection_interfaces__msg__BlackObject * value =
    (const black_detection_interfaces__msg__BlackObject *)(untyped_value);
  *item = *value;
}

bool black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__resize_function__BlackObjectArray__objects(
  void * untyped_member, size_t size)
{
  black_detection_interfaces__msg__BlackObject__Sequence * member =
    (black_detection_interfaces__msg__BlackObject__Sequence *)(untyped_member);
  black_detection_interfaces__msg__BlackObject__Sequence__fini(member);
  return black_detection_interfaces__msg__BlackObject__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__BlackObjectArray_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces__msg__BlackObjectArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces__msg__BlackObjectArray, objects),  // bytes offset in struct
    NULL,  // default value
    black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__size_function__BlackObjectArray__objects,  // size() function pointer
    black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__get_const_function__BlackObjectArray__objects,  // get_const(index) function pointer
    black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__get_function__BlackObjectArray__objects,  // get(index) function pointer
    black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__fetch_function__BlackObjectArray__objects,  // fetch(index, &value) function pointer
    black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__assign_function__BlackObjectArray__objects,  // assign(index, value) function pointer
    black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__resize_function__BlackObjectArray__objects  // resize(index) function pointer
  },
  {
    "count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces__msg__BlackObjectArray, count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__BlackObjectArray_message_members = {
  "black_detection_interfaces__msg",  // message namespace
  "BlackObjectArray",  // message name
  3,  // number of fields
  sizeof(black_detection_interfaces__msg__BlackObjectArray),
  black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__BlackObjectArray_message_member_array,  // message members
  black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__BlackObjectArray_init_function,  // function to initialize message memory (memory has to be allocated)
  black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__BlackObjectArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__BlackObjectArray_message_type_support_handle = {
  0,
  &black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__BlackObjectArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_black_detection_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, black_detection_interfaces, msg, BlackObjectArray)() {
  black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__BlackObjectArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__BlackObjectArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, black_detection_interfaces, msg, BlackObject)();
  if (!black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__BlackObjectArray_message_type_support_handle.typesupport_identifier) {
    black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__BlackObjectArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &black_detection_interfaces__msg__BlackObjectArray__rosidl_typesupport_introspection_c__BlackObjectArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
