// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from black_detection_interfaces:msg/BlackObjectArray.idl
// generated code does not contain a copyright notice

#ifndef BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT_ARRAY__BUILDER_HPP_
#define BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "black_detection_interfaces/msg/detail/black_object_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace black_detection_interfaces
{

namespace msg
{

namespace builder
{

class Init_BlackObjectArray_count
{
public:
  explicit Init_BlackObjectArray_count(::black_detection_interfaces::msg::BlackObjectArray & msg)
  : msg_(msg)
  {}
  ::black_detection_interfaces::msg::BlackObjectArray count(::black_detection_interfaces::msg::BlackObjectArray::_count_type arg)
  {
    msg_.count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::black_detection_interfaces::msg::BlackObjectArray msg_;
};

class Init_BlackObjectArray_objects
{
public:
  explicit Init_BlackObjectArray_objects(::black_detection_interfaces::msg::BlackObjectArray & msg)
  : msg_(msg)
  {}
  Init_BlackObjectArray_count objects(::black_detection_interfaces::msg::BlackObjectArray::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return Init_BlackObjectArray_count(msg_);
  }

private:
  ::black_detection_interfaces::msg::BlackObjectArray msg_;
};

class Init_BlackObjectArray_header
{
public:
  Init_BlackObjectArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BlackObjectArray_objects header(::black_detection_interfaces::msg::BlackObjectArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BlackObjectArray_objects(msg_);
  }

private:
  ::black_detection_interfaces::msg::BlackObjectArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::black_detection_interfaces::msg::BlackObjectArray>()
{
  return black_detection_interfaces::msg::builder::Init_BlackObjectArray_header();
}

}  // namespace black_detection_interfaces

#endif  // BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT_ARRAY__BUILDER_HPP_
