// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from black_detection_interfaces:srv/DetectBlackObjects.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "black_detection_interfaces/srv/detail/detect_black_objects__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace black_detection_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void DetectBlackObjects_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) black_detection_interfaces::srv::DetectBlackObjects_Request(_init);
}

void DetectBlackObjects_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<black_detection_interfaces::srv::DetectBlackObjects_Request *>(message_memory);
  typed_message->~DetectBlackObjects_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DetectBlackObjects_Request_message_member_array[4] = {
  {
    "image",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces::srv::DetectBlackObjects_Request, image),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "black_threshold",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces::srv::DetectBlackObjects_Request, black_threshold),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "min_area",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces::srv::DetectBlackObjects_Request, min_area),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "max_area",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces::srv::DetectBlackObjects_Request, max_area),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DetectBlackObjects_Request_message_members = {
  "black_detection_interfaces::srv",  // message namespace
  "DetectBlackObjects_Request",  // message name
  4,  // number of fields
  sizeof(black_detection_interfaces::srv::DetectBlackObjects_Request),
  DetectBlackObjects_Request_message_member_array,  // message members
  DetectBlackObjects_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectBlackObjects_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DetectBlackObjects_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DetectBlackObjects_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace black_detection_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<black_detection_interfaces::srv::DetectBlackObjects_Request>()
{
  return &::black_detection_interfaces::srv::rosidl_typesupport_introspection_cpp::DetectBlackObjects_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, black_detection_interfaces, srv, DetectBlackObjects_Request)() {
  return &::black_detection_interfaces::srv::rosidl_typesupport_introspection_cpp::DetectBlackObjects_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "black_detection_interfaces/srv/detail/detect_black_objects__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace black_detection_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void DetectBlackObjects_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) black_detection_interfaces::srv::DetectBlackObjects_Response(_init);
}

void DetectBlackObjects_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<black_detection_interfaces::srv::DetectBlackObjects_Response *>(message_memory);
  typed_message->~DetectBlackObjects_Response();
}

size_t size_function__DetectBlackObjects_Response__centroids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DetectBlackObjects_Response__centroids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectBlackObjects_Response__centroids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void fetch_function__DetectBlackObjects_Response__centroids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Point *>(
    get_const_function__DetectBlackObjects_Response__centroids(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Point *>(untyped_value);
  value = item;
}

void assign_function__DetectBlackObjects_Response__centroids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Point *>(
    get_function__DetectBlackObjects_Response__centroids(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Point *>(untyped_value);
  item = value;
}

void resize_function__DetectBlackObjects_Response__centroids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DetectBlackObjects_Response__sizes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Point32> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DetectBlackObjects_Response__sizes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Point32> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectBlackObjects_Response__sizes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Point32> *>(untyped_member);
  return &member[index];
}

void fetch_function__DetectBlackObjects_Response__sizes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Point32 *>(
    get_const_function__DetectBlackObjects_Response__sizes(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Point32 *>(untyped_value);
  value = item;
}

void assign_function__DetectBlackObjects_Response__sizes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Point32 *>(
    get_function__DetectBlackObjects_Response__sizes(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Point32 *>(untyped_value);
  item = value;
}

void resize_function__DetectBlackObjects_Response__sizes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Point32> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DetectBlackObjects_Response_message_member_array[6] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces::srv::DetectBlackObjects_Response, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "centroids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces::srv::DetectBlackObjects_Response, centroids),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectBlackObjects_Response__centroids,  // size() function pointer
    get_const_function__DetectBlackObjects_Response__centroids,  // get_const(index) function pointer
    get_function__DetectBlackObjects_Response__centroids,  // get(index) function pointer
    fetch_function__DetectBlackObjects_Response__centroids,  // fetch(index, &value) function pointer
    assign_function__DetectBlackObjects_Response__centroids,  // assign(index, value) function pointer
    resize_function__DetectBlackObjects_Response__centroids  // resize(index) function pointer
  },
  {
    "sizes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point32>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces::srv::DetectBlackObjects_Response, sizes),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectBlackObjects_Response__sizes,  // size() function pointer
    get_const_function__DetectBlackObjects_Response__sizes,  // get_const(index) function pointer
    get_function__DetectBlackObjects_Response__sizes,  // get(index) function pointer
    fetch_function__DetectBlackObjects_Response__sizes,  // fetch(index, &value) function pointer
    assign_function__DetectBlackObjects_Response__sizes,  // assign(index, value) function pointer
    resize_function__DetectBlackObjects_Response__sizes  // resize(index) function pointer
  },
  {
    "count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces::srv::DetectBlackObjects_Response, count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces::srv::DetectBlackObjects_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(black_detection_interfaces::srv::DetectBlackObjects_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DetectBlackObjects_Response_message_members = {
  "black_detection_interfaces::srv",  // message namespace
  "DetectBlackObjects_Response",  // message name
  6,  // number of fields
  sizeof(black_detection_interfaces::srv::DetectBlackObjects_Response),
  DetectBlackObjects_Response_message_member_array,  // message members
  DetectBlackObjects_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectBlackObjects_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DetectBlackObjects_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DetectBlackObjects_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace black_detection_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<black_detection_interfaces::srv::DetectBlackObjects_Response>()
{
  return &::black_detection_interfaces::srv::rosidl_typesupport_introspection_cpp::DetectBlackObjects_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, black_detection_interfaces, srv, DetectBlackObjects_Response)() {
  return &::black_detection_interfaces::srv::rosidl_typesupport_introspection_cpp::DetectBlackObjects_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "black_detection_interfaces/srv/detail/detect_black_objects__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace black_detection_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers DetectBlackObjects_service_members = {
  "black_detection_interfaces::srv",  // service namespace
  "DetectBlackObjects",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<black_detection_interfaces::srv::DetectBlackObjects>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t DetectBlackObjects_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DetectBlackObjects_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace black_detection_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<black_detection_interfaces::srv::DetectBlackObjects>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::black_detection_interfaces::srv::rosidl_typesupport_introspection_cpp::DetectBlackObjects_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::black_detection_interfaces::srv::DetectBlackObjects_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::black_detection_interfaces::srv::DetectBlackObjects_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, black_detection_interfaces, srv, DetectBlackObjects)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<black_detection_interfaces::srv::DetectBlackObjects>();
}

#ifdef __cplusplus
}
#endif
