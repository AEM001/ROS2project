// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from black_detection_interfaces:msg/BlackObject.idl
// generated code does not contain a copyright notice

#ifndef BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT__STRUCT_HPP_
#define BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'centroid'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'size'
#include "geometry_msgs/msg/detail/point32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__black_detection_interfaces__msg__BlackObject __attribute__((deprecated))
#else
# define DEPRECATED__black_detection_interfaces__msg__BlackObject __declspec(deprecated)
#endif

namespace black_detection_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BlackObject_
{
  using Type = BlackObject_<ContainerAllocator>;

  explicit BlackObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    centroid(_init),
    size(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->area = 0.0f;
      this->confidence = 0.0f;
    }
  }

  explicit BlackObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    centroid(_alloc, _init),
    size(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->area = 0.0f;
      this->confidence = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _centroid_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _centroid_type centroid;
  using _size_type =
    geometry_msgs::msg::Point32_<ContainerAllocator>;
  _size_type size;
  using _area_type =
    float;
  _area_type area;
  using _confidence_type =
    float;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__centroid(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->centroid = _arg;
    return *this;
  }
  Type & set__size(
    const geometry_msgs::msg::Point32_<ContainerAllocator> & _arg)
  {
    this->size = _arg;
    return *this;
  }
  Type & set__area(
    const float & _arg)
  {
    this->area = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    black_detection_interfaces::msg::BlackObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const black_detection_interfaces::msg::BlackObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<black_detection_interfaces::msg::BlackObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<black_detection_interfaces::msg::BlackObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      black_detection_interfaces::msg::BlackObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<black_detection_interfaces::msg::BlackObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      black_detection_interfaces::msg::BlackObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<black_detection_interfaces::msg::BlackObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<black_detection_interfaces::msg::BlackObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<black_detection_interfaces::msg::BlackObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__black_detection_interfaces__msg__BlackObject
    std::shared_ptr<black_detection_interfaces::msg::BlackObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__black_detection_interfaces__msg__BlackObject
    std::shared_ptr<black_detection_interfaces::msg::BlackObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BlackObject_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->centroid != other.centroid) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    if (this->area != other.area) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const BlackObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BlackObject_

// alias to use template instance with default allocator
using BlackObject =
  black_detection_interfaces::msg::BlackObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace black_detection_interfaces

#endif  // BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT__STRUCT_HPP_
