// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from black_detection_interfaces:msg/BlackObjectArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "black_detection_interfaces/msg/detail/black_object_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace black_detection_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void BlackObjectArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) black_detection_interfaces::msg::BlackObjectArray(_init);
}

void BlackObjectArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<black_detection_interfaces::msg::BlackObjectArray *>(message_memory);
  typed_message->~BlackObjectArray();
}

size_t size_function__BlackObjectArray__objects(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<black_detection_interfaces::msg::BlackObject> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BlackObjectArray__objects(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<black_detection_interfaces::msg::BlackObject> *>(untyped_member);
  return &member[index];
}

void * get_function__BlackObjectArray__objects(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<black_detection_interfaces::msg::BlackObject> *>(untyped_member);
  return &member[index];
}

void fetch_function__BlackObjectArray__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const black_detection_interfaces::msg::BlackObject *>(
    get_const_function__BlackObjectArray__objects(untyped_member, index));
  auto & value = *reinterpret_cast<black_detection_interfaces::msg::BlackObject *>(untyped_value);
  value = item;
}

void assign_function__BlackObjectArray__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<black_detection_interfaces::msg::BlackObject *>(
    get_function__BlackObjectArray__objects(untyped_member, index));
  const auto & value = *reinterpret_cast<const black_detection_interfaces::msg::BlackObject *>(untyped_value);
  item = value;
}

void resize_function__BlackObjectArray__objects(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<black_detection_interfaces::msg::BlackObject> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BlackObjectArray_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces::msg::BlackObjectArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "objects",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<black_detection_interfaces::msg::BlackObject>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces::msg::BlackObjectArray, objects),  // bytes offset in struct
    nullptr,  // default value
    size_function__BlackObjectArray__objects,  // size() function pointer
    get_const_function__BlackObjectArray__objects,  // get_const(index) function pointer
    get_function__BlackObjectArray__objects,  // get(index) function pointer
    fetch_function__BlackObjectArray__objects,  // fetch(index, &value) function pointer
    assign_function__BlackObjectArray__objects,  // assign(index, value) function pointer
    resize_function__BlackObjectArray__objects  // resize(index) function pointer
  },
  {
    "count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces::msg::BlackObjectArray, count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BlackObjectArray_message_members = {
  "black_detection_interfaces::msg",  // message namespace
  "BlackObjectArray",  // message name
  3,  // number of fields
  sizeof(black_detection_interfaces::msg::BlackObjectArray),
  BlackObjectArray_message_member_array,  // message members
  BlackObjectArray_init_function,  // function to initialize message memory (memory has to be allocated)
  BlackObjectArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BlackObjectArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BlackObjectArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace black_detection_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<black_detection_interfaces::msg::BlackObjectArray>()
{
  return &::black_detection_interfaces::msg::rosidl_typesupport_introspection_cpp::BlackObjectArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, black_detection_interfaces, msg, BlackObjectArray)() {
  return &::black_detection_interfaces::msg::rosidl_typesupport_introspection_cpp::BlackObjectArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
