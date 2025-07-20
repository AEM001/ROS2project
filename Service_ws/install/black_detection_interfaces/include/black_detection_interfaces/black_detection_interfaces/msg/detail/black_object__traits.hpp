// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from black_detection_interfaces:msg/BlackObject.idl
// generated code does not contain a copyright notice

#ifndef BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT__TRAITS_HPP_
#define BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "black_detection_interfaces/msg/detail/black_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'centroid'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'size'
#include "geometry_msgs/msg/detail/point32__traits.hpp"

namespace black_detection_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const BlackObject & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: centroid
  {
    out << "centroid: ";
    to_flow_style_yaml(msg.centroid, out);
    out << ", ";
  }

  // member: size
  {
    out << "size: ";
    to_flow_style_yaml(msg.size, out);
    out << ", ";
  }

  // member: area
  {
    out << "area: ";
    rosidl_generator_traits::value_to_yaml(msg.area, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BlackObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: centroid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "centroid:\n";
    to_block_style_yaml(msg.centroid, out, indentation + 2);
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size:\n";
    to_block_style_yaml(msg.size, out, indentation + 2);
  }

  // member: area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area: ";
    rosidl_generator_traits::value_to_yaml(msg.area, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BlackObject & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace black_detection_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use black_detection_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const black_detection_interfaces::msg::BlackObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  black_detection_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use black_detection_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const black_detection_interfaces::msg::BlackObject & msg)
{
  return black_detection_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<black_detection_interfaces::msg::BlackObject>()
{
  return "black_detection_interfaces::msg::BlackObject";
}

template<>
inline const char * name<black_detection_interfaces::msg::BlackObject>()
{
  return "black_detection_interfaces/msg/BlackObject";
}

template<>
struct has_fixed_size<black_detection_interfaces::msg::BlackObject>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point32>::value && has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<black_detection_interfaces::msg::BlackObject>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point32>::value && has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<black_detection_interfaces::msg::BlackObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT__TRAITS_HPP_
