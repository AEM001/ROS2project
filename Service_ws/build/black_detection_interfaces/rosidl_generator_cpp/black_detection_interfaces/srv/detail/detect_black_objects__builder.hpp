// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from black_detection_interfaces:srv/DetectBlackObjects.idl
// generated code does not contain a copyright notice

#ifndef BLACK_DETECTION_INTERFACES__SRV__DETAIL__DETECT_BLACK_OBJECTS__BUILDER_HPP_
#define BLACK_DETECTION_INTERFACES__SRV__DETAIL__DETECT_BLACK_OBJECTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "black_detection_interfaces/srv/detail/detect_black_objects__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace black_detection_interfaces
{

namespace srv
{

namespace builder
{

class Init_DetectBlackObjects_Request_max_area
{
public:
  explicit Init_DetectBlackObjects_Request_max_area(::black_detection_interfaces::srv::DetectBlackObjects_Request & msg)
  : msg_(msg)
  {}
  ::black_detection_interfaces::srv::DetectBlackObjects_Request max_area(::black_detection_interfaces::srv::DetectBlackObjects_Request::_max_area_type arg)
  {
    msg_.max_area = std::move(arg);
    return std::move(msg_);
  }

private:
  ::black_detection_interfaces::srv::DetectBlackObjects_Request msg_;
};

class Init_DetectBlackObjects_Request_min_area
{
public:
  explicit Init_DetectBlackObjects_Request_min_area(::black_detection_interfaces::srv::DetectBlackObjects_Request & msg)
  : msg_(msg)
  {}
  Init_DetectBlackObjects_Request_max_area min_area(::black_detection_interfaces::srv::DetectBlackObjects_Request::_min_area_type arg)
  {
    msg_.min_area = std::move(arg);
    return Init_DetectBlackObjects_Request_max_area(msg_);
  }

private:
  ::black_detection_interfaces::srv::DetectBlackObjects_Request msg_;
};

class Init_DetectBlackObjects_Request_black_threshold
{
public:
  explicit Init_DetectBlackObjects_Request_black_threshold(::black_detection_interfaces::srv::DetectBlackObjects_Request & msg)
  : msg_(msg)
  {}
  Init_DetectBlackObjects_Request_min_area black_threshold(::black_detection_interfaces::srv::DetectBlackObjects_Request::_black_threshold_type arg)
  {
    msg_.black_threshold = std::move(arg);
    return Init_DetectBlackObjects_Request_min_area(msg_);
  }

private:
  ::black_detection_interfaces::srv::DetectBlackObjects_Request msg_;
};

class Init_DetectBlackObjects_Request_image
{
public:
  Init_DetectBlackObjects_Request_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectBlackObjects_Request_black_threshold image(::black_detection_interfaces::srv::DetectBlackObjects_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_DetectBlackObjects_Request_black_threshold(msg_);
  }

private:
  ::black_detection_interfaces::srv::DetectBlackObjects_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::black_detection_interfaces::srv::DetectBlackObjects_Request>()
{
  return black_detection_interfaces::srv::builder::Init_DetectBlackObjects_Request_image();
}

}  // namespace black_detection_interfaces


namespace black_detection_interfaces
{

namespace srv
{

namespace builder
{

class Init_DetectBlackObjects_Response_message
{
public:
  explicit Init_DetectBlackObjects_Response_message(::black_detection_interfaces::srv::DetectBlackObjects_Response & msg)
  : msg_(msg)
  {}
  ::black_detection_interfaces::srv::DetectBlackObjects_Response message(::black_detection_interfaces::srv::DetectBlackObjects_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::black_detection_interfaces::srv::DetectBlackObjects_Response msg_;
};

class Init_DetectBlackObjects_Response_success
{
public:
  explicit Init_DetectBlackObjects_Response_success(::black_detection_interfaces::srv::DetectBlackObjects_Response & msg)
  : msg_(msg)
  {}
  Init_DetectBlackObjects_Response_message success(::black_detection_interfaces::srv::DetectBlackObjects_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_DetectBlackObjects_Response_message(msg_);
  }

private:
  ::black_detection_interfaces::srv::DetectBlackObjects_Response msg_;
};

class Init_DetectBlackObjects_Response_count
{
public:
  explicit Init_DetectBlackObjects_Response_count(::black_detection_interfaces::srv::DetectBlackObjects_Response & msg)
  : msg_(msg)
  {}
  Init_DetectBlackObjects_Response_success count(::black_detection_interfaces::srv::DetectBlackObjects_Response::_count_type arg)
  {
    msg_.count = std::move(arg);
    return Init_DetectBlackObjects_Response_success(msg_);
  }

private:
  ::black_detection_interfaces::srv::DetectBlackObjects_Response msg_;
};

class Init_DetectBlackObjects_Response_sizes
{
public:
  explicit Init_DetectBlackObjects_Response_sizes(::black_detection_interfaces::srv::DetectBlackObjects_Response & msg)
  : msg_(msg)
  {}
  Init_DetectBlackObjects_Response_count sizes(::black_detection_interfaces::srv::DetectBlackObjects_Response::_sizes_type arg)
  {
    msg_.sizes = std::move(arg);
    return Init_DetectBlackObjects_Response_count(msg_);
  }

private:
  ::black_detection_interfaces::srv::DetectBlackObjects_Response msg_;
};

class Init_DetectBlackObjects_Response_centroids
{
public:
  explicit Init_DetectBlackObjects_Response_centroids(::black_detection_interfaces::srv::DetectBlackObjects_Response & msg)
  : msg_(msg)
  {}
  Init_DetectBlackObjects_Response_sizes centroids(::black_detection_interfaces::srv::DetectBlackObjects_Response::_centroids_type arg)
  {
    msg_.centroids = std::move(arg);
    return Init_DetectBlackObjects_Response_sizes(msg_);
  }

private:
  ::black_detection_interfaces::srv::DetectBlackObjects_Response msg_;
};

class Init_DetectBlackObjects_Response_header
{
public:
  Init_DetectBlackObjects_Response_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectBlackObjects_Response_centroids header(::black_detection_interfaces::srv::DetectBlackObjects_Response::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DetectBlackObjects_Response_centroids(msg_);
  }

private:
  ::black_detection_interfaces::srv::DetectBlackObjects_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::black_detection_interfaces::srv::DetectBlackObjects_Response>()
{
  return black_detection_interfaces::srv::builder::Init_DetectBlackObjects_Response_header();
}

}  // namespace black_detection_interfaces

#endif  // BLACK_DETECTION_INTERFACES__SRV__DETAIL__DETECT_BLACK_OBJECTS__BUILDER_HPP_
