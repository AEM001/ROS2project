// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from black_detection_interfaces:msg/BlackObject.idl
// generated code does not contain a copyright notice

#ifndef BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT__BUILDER_HPP_
#define BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "black_detection_interfaces/msg/detail/black_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace black_detection_interfaces
{

namespace msg
{

namespace builder
{

class Init_BlackObject_confidence
{
public:
  explicit Init_BlackObject_confidence(::black_detection_interfaces::msg::BlackObject & msg)
  : msg_(msg)
  {}
  ::black_detection_interfaces::msg::BlackObject confidence(::black_detection_interfaces::msg::BlackObject::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::black_detection_interfaces::msg::BlackObject msg_;
};

class Init_BlackObject_area
{
public:
  explicit Init_BlackObject_area(::black_detection_interfaces::msg::BlackObject & msg)
  : msg_(msg)
  {}
  Init_BlackObject_confidence area(::black_detection_interfaces::msg::BlackObject::_area_type arg)
  {
    msg_.area = std::move(arg);
    return Init_BlackObject_confidence(msg_);
  }

private:
  ::black_detection_interfaces::msg::BlackObject msg_;
};

class Init_BlackObject_size
{
public:
  explicit Init_BlackObject_size(::black_detection_interfaces::msg::BlackObject & msg)
  : msg_(msg)
  {}
  Init_BlackObject_area size(::black_detection_interfaces::msg::BlackObject::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_BlackObject_area(msg_);
  }

private:
  ::black_detection_interfaces::msg::BlackObject msg_;
};

class Init_BlackObject_centroid
{
public:
  explicit Init_BlackObject_centroid(::black_detection_interfaces::msg::BlackObject & msg)
  : msg_(msg)
  {}
  Init_BlackObject_size centroid(::black_detection_interfaces::msg::BlackObject::_centroid_type arg)
  {
    msg_.centroid = std::move(arg);
    return Init_BlackObject_size(msg_);
  }

private:
  ::black_detection_interfaces::msg::BlackObject msg_;
};

class Init_BlackObject_header
{
public:
  Init_BlackObject_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BlackObject_centroid header(::black_detection_interfaces::msg::BlackObject::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BlackObject_centroid(msg_);
  }

private:
  ::black_detection_interfaces::msg::BlackObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::black_detection_interfaces::msg::BlackObject>()
{
  return black_detection_interfaces::msg::builder::Init_BlackObject_header();
}

}  // namespace black_detection_interfaces

#endif  // BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT__BUILDER_HPP_
