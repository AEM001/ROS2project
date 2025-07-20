// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from black_detection_interfaces:msg/BlackObjectArray.idl
// generated code does not contain a copyright notice

#ifndef BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT_ARRAY__TRAITS_HPP_
#define BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "black_detection_interfaces/msg/detail/black_object_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'objects'
#include "black_detection_interfaces/msg/detail/black_object__traits.hpp"

namespace black_detection_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const BlackObjectArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: objects
  {
    if (msg.objects.size() == 0) {
      out << "objects: []";
    } else {
      out << "objects: [";
      size_t pending_items = msg.objects.size();
      for (auto item : msg.objects) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BlackObjectArray & msg,
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

  // member: objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.objects.size() == 0) {
      out << "objects: []\n";
    } else {
      out << "objects:\n";
      for (auto item : msg.objects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BlackObjectArray & msg, bool use_flow_style = false)
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
  const black_detection_interfaces::msg::BlackObjectArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  black_detection_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use black_detection_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const black_detection_interfaces::msg::BlackObjectArray & msg)
{
  return black_detection_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<black_detection_interfaces::msg::BlackObjectArray>()
{
  return "black_detection_interfaces::msg::BlackObjectArray";
}

template<>
inline const char * name<black_detection_interfaces::msg::BlackObjectArray>()
{
  return "black_detection_interfaces/msg/BlackObjectArray";
}

template<>
struct has_fixed_size<black_detection_interfaces::msg::BlackObjectArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<black_detection_interfaces::msg::BlackObjectArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<black_detection_interfaces::msg::BlackObjectArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT_ARRAY__TRAITS_HPP_
