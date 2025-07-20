// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from black_detection_interfaces:srv/DetectBlackObjects.idl
// generated code does not contain a copyright notice

#ifndef BLACK_DETECTION_INTERFACES__SRV__DETAIL__DETECT_BLACK_OBJECTS__TRAITS_HPP_
#define BLACK_DETECTION_INTERFACES__SRV__DETAIL__DETECT_BLACK_OBJECTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "black_detection_interfaces/srv/detail/detect_black_objects__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace black_detection_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const DetectBlackObjects_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
    out << ", ";
  }

  // member: black_threshold
  {
    out << "black_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.black_threshold, out);
    out << ", ";
  }

  // member: min_area
  {
    out << "min_area: ";
    rosidl_generator_traits::value_to_yaml(msg.min_area, out);
    out << ", ";
  }

  // member: max_area
  {
    out << "max_area: ";
    rosidl_generator_traits::value_to_yaml(msg.max_area, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectBlackObjects_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }

  // member: black_threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "black_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.black_threshold, out);
    out << "\n";
  }

  // member: min_area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_area: ";
    rosidl_generator_traits::value_to_yaml(msg.min_area, out);
    out << "\n";
  }

  // member: max_area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_area: ";
    rosidl_generator_traits::value_to_yaml(msg.max_area, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectBlackObjects_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace black_detection_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use black_detection_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const black_detection_interfaces::srv::DetectBlackObjects_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  black_detection_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use black_detection_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const black_detection_interfaces::srv::DetectBlackObjects_Request & msg)
{
  return black_detection_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<black_detection_interfaces::srv::DetectBlackObjects_Request>()
{
  return "black_detection_interfaces::srv::DetectBlackObjects_Request";
}

template<>
inline const char * name<black_detection_interfaces::srv::DetectBlackObjects_Request>()
{
  return "black_detection_interfaces/srv/DetectBlackObjects_Request";
}

template<>
struct has_fixed_size<black_detection_interfaces::srv::DetectBlackObjects_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<black_detection_interfaces::srv::DetectBlackObjects_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<black_detection_interfaces::srv::DetectBlackObjects_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'centroids'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'sizes'
#include "geometry_msgs/msg/detail/point32__traits.hpp"

namespace black_detection_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const DetectBlackObjects_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: centroids
  {
    if (msg.centroids.size() == 0) {
      out << "centroids: []";
    } else {
      out << "centroids: [";
      size_t pending_items = msg.centroids.size();
      for (auto item : msg.centroids) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sizes
  {
    if (msg.sizes.size() == 0) {
      out << "sizes: []";
    } else {
      out << "sizes: [";
      size_t pending_items = msg.sizes.size();
      for (auto item : msg.sizes) {
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
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectBlackObjects_Response & msg,
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

  // member: centroids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.centroids.size() == 0) {
      out << "centroids: []\n";
    } else {
      out << "centroids:\n";
      for (auto item : msg.centroids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: sizes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sizes.size() == 0) {
      out << "sizes: []\n";
    } else {
      out << "sizes:\n";
      for (auto item : msg.sizes) {
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

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectBlackObjects_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace black_detection_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use black_detection_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const black_detection_interfaces::srv::DetectBlackObjects_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  black_detection_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use black_detection_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const black_detection_interfaces::srv::DetectBlackObjects_Response & msg)
{
  return black_detection_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<black_detection_interfaces::srv::DetectBlackObjects_Response>()
{
  return "black_detection_interfaces::srv::DetectBlackObjects_Response";
}

template<>
inline const char * name<black_detection_interfaces::srv::DetectBlackObjects_Response>()
{
  return "black_detection_interfaces/srv/DetectBlackObjects_Response";
}

template<>
struct has_fixed_size<black_detection_interfaces::srv::DetectBlackObjects_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<black_detection_interfaces::srv::DetectBlackObjects_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<black_detection_interfaces::srv::DetectBlackObjects_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<black_detection_interfaces::srv::DetectBlackObjects>()
{
  return "black_detection_interfaces::srv::DetectBlackObjects";
}

template<>
inline const char * name<black_detection_interfaces::srv::DetectBlackObjects>()
{
  return "black_detection_interfaces/srv/DetectBlackObjects";
}

template<>
struct has_fixed_size<black_detection_interfaces::srv::DetectBlackObjects>
  : std::integral_constant<
    bool,
    has_fixed_size<black_detection_interfaces::srv::DetectBlackObjects_Request>::value &&
    has_fixed_size<black_detection_interfaces::srv::DetectBlackObjects_Response>::value
  >
{
};

template<>
struct has_bounded_size<black_detection_interfaces::srv::DetectBlackObjects>
  : std::integral_constant<
    bool,
    has_bounded_size<black_detection_interfaces::srv::DetectBlackObjects_Request>::value &&
    has_bounded_size<black_detection_interfaces::srv::DetectBlackObjects_Response>::value
  >
{
};

template<>
struct is_service<black_detection_interfaces::srv::DetectBlackObjects>
  : std::true_type
{
};

template<>
struct is_service_request<black_detection_interfaces::srv::DetectBlackObjects_Request>
  : std::true_type
{
};

template<>
struct is_service_response<black_detection_interfaces::srv::DetectBlackObjects_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BLACK_DETECTION_INTERFACES__SRV__DETAIL__DETECT_BLACK_OBJECTS__TRAITS_HPP_
