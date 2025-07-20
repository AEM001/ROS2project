// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from black_detection_interfaces:srv/DetectBlackObjects.idl
// generated code does not contain a copyright notice

#ifndef BLACK_DETECTION_INTERFACES__SRV__DETAIL__DETECT_BLACK_OBJECTS__STRUCT_HPP_
#define BLACK_DETECTION_INTERFACES__SRV__DETAIL__DETECT_BLACK_OBJECTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__black_detection_interfaces__srv__DetectBlackObjects_Request __attribute__((deprecated))
#else
# define DEPRECATED__black_detection_interfaces__srv__DetectBlackObjects_Request __declspec(deprecated)
#endif

namespace black_detection_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DetectBlackObjects_Request_
{
  using Type = DetectBlackObjects_Request_<ContainerAllocator>;

  explicit DetectBlackObjects_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->black_threshold = 0.0f;
      this->min_area = 0.0f;
      this->max_area = 0.0f;
    }
  }

  explicit DetectBlackObjects_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->black_threshold = 0.0f;
      this->min_area = 0.0f;
      this->max_area = 0.0f;
    }
  }

  // field types and members
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;
  using _black_threshold_type =
    float;
  _black_threshold_type black_threshold;
  using _min_area_type =
    float;
  _min_area_type min_area;
  using _max_area_type =
    float;
  _max_area_type max_area;

  // setters for named parameter idiom
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__black_threshold(
    const float & _arg)
  {
    this->black_threshold = _arg;
    return *this;
  }
  Type & set__min_area(
    const float & _arg)
  {
    this->min_area = _arg;
    return *this;
  }
  Type & set__max_area(
    const float & _arg)
  {
    this->max_area = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    black_detection_interfaces::srv::DetectBlackObjects_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const black_detection_interfaces::srv::DetectBlackObjects_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<black_detection_interfaces::srv::DetectBlackObjects_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<black_detection_interfaces::srv::DetectBlackObjects_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      black_detection_interfaces::srv::DetectBlackObjects_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<black_detection_interfaces::srv::DetectBlackObjects_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      black_detection_interfaces::srv::DetectBlackObjects_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<black_detection_interfaces::srv::DetectBlackObjects_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<black_detection_interfaces::srv::DetectBlackObjects_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<black_detection_interfaces::srv::DetectBlackObjects_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__black_detection_interfaces__srv__DetectBlackObjects_Request
    std::shared_ptr<black_detection_interfaces::srv::DetectBlackObjects_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__black_detection_interfaces__srv__DetectBlackObjects_Request
    std::shared_ptr<black_detection_interfaces::srv::DetectBlackObjects_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectBlackObjects_Request_ & other) const
  {
    if (this->image != other.image) {
      return false;
    }
    if (this->black_threshold != other.black_threshold) {
      return false;
    }
    if (this->min_area != other.min_area) {
      return false;
    }
    if (this->max_area != other.max_area) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectBlackObjects_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectBlackObjects_Request_

// alias to use template instance with default allocator
using DetectBlackObjects_Request =
  black_detection_interfaces::srv::DetectBlackObjects_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace black_detection_interfaces


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'centroids'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'sizes'
#include "geometry_msgs/msg/detail/point32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__black_detection_interfaces__srv__DetectBlackObjects_Response __attribute__((deprecated))
#else
# define DEPRECATED__black_detection_interfaces__srv__DetectBlackObjects_Response __declspec(deprecated)
#endif

namespace black_detection_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DetectBlackObjects_Response_
{
  using Type = DetectBlackObjects_Response_<ContainerAllocator>;

  explicit DetectBlackObjects_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0l;
      this->success = false;
      this->message = "";
    }
  }

  explicit DetectBlackObjects_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0l;
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _centroids_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _centroids_type centroids;
  using _sizes_type =
    std::vector<geometry_msgs::msg::Point32_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point32_<ContainerAllocator>>>;
  _sizes_type sizes;
  using _count_type =
    int32_t;
  _count_type count;
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__centroids(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->centroids = _arg;
    return *this;
  }
  Type & set__sizes(
    const std::vector<geometry_msgs::msg::Point32_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point32_<ContainerAllocator>>> & _arg)
  {
    this->sizes = _arg;
    return *this;
  }
  Type & set__count(
    const int32_t & _arg)
  {
    this->count = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    black_detection_interfaces::srv::DetectBlackObjects_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const black_detection_interfaces::srv::DetectBlackObjects_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<black_detection_interfaces::srv::DetectBlackObjects_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<black_detection_interfaces::srv::DetectBlackObjects_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      black_detection_interfaces::srv::DetectBlackObjects_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<black_detection_interfaces::srv::DetectBlackObjects_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      black_detection_interfaces::srv::DetectBlackObjects_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<black_detection_interfaces::srv::DetectBlackObjects_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<black_detection_interfaces::srv::DetectBlackObjects_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<black_detection_interfaces::srv::DetectBlackObjects_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__black_detection_interfaces__srv__DetectBlackObjects_Response
    std::shared_ptr<black_detection_interfaces::srv::DetectBlackObjects_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__black_detection_interfaces__srv__DetectBlackObjects_Response
    std::shared_ptr<black_detection_interfaces::srv::DetectBlackObjects_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectBlackObjects_Response_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->centroids != other.centroids) {
      return false;
    }
    if (this->sizes != other.sizes) {
      return false;
    }
    if (this->count != other.count) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectBlackObjects_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectBlackObjects_Response_

// alias to use template instance with default allocator
using DetectBlackObjects_Response =
  black_detection_interfaces::srv::DetectBlackObjects_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace black_detection_interfaces

namespace black_detection_interfaces
{

namespace srv
{

struct DetectBlackObjects
{
  using Request = black_detection_interfaces::srv::DetectBlackObjects_Request;
  using Response = black_detection_interfaces::srv::DetectBlackObjects_Response;
};

}  // namespace srv

}  // namespace black_detection_interfaces

#endif  // BLACK_DETECTION_INTERFACES__SRV__DETAIL__DETECT_BLACK_OBJECTS__STRUCT_HPP_
