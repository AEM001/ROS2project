// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from black_detection_interfaces:msg/BlackObjectArray.idl
// generated code does not contain a copyright notice

#ifndef BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT_ARRAY__STRUCT_HPP_
#define BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT_ARRAY__STRUCT_HPP_

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
// Member 'objects'
#include "black_detection_interfaces/msg/detail/black_object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__black_detection_interfaces__msg__BlackObjectArray __attribute__((deprecated))
#else
# define DEPRECATED__black_detection_interfaces__msg__BlackObjectArray __declspec(deprecated)
#endif

namespace black_detection_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BlackObjectArray_
{
  using Type = BlackObjectArray_<ContainerAllocator>;

  explicit BlackObjectArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0l;
    }
  }

  explicit BlackObjectArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _objects_type =
    std::vector<black_detection_interfaces::msg::BlackObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<black_detection_interfaces::msg::BlackObject_<ContainerAllocator>>>;
  _objects_type objects;
  using _count_type =
    int32_t;
  _count_type count;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__objects(
    const std::vector<black_detection_interfaces::msg::BlackObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<black_detection_interfaces::msg::BlackObject_<ContainerAllocator>>> & _arg)
  {
    this->objects = _arg;
    return *this;
  }
  Type & set__count(
    const int32_t & _arg)
  {
    this->count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    black_detection_interfaces::msg::BlackObjectArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const black_detection_interfaces::msg::BlackObjectArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<black_detection_interfaces::msg::BlackObjectArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<black_detection_interfaces::msg::BlackObjectArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      black_detection_interfaces::msg::BlackObjectArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<black_detection_interfaces::msg::BlackObjectArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      black_detection_interfaces::msg::BlackObjectArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<black_detection_interfaces::msg::BlackObjectArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<black_detection_interfaces::msg::BlackObjectArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<black_detection_interfaces::msg::BlackObjectArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__black_detection_interfaces__msg__BlackObjectArray
    std::shared_ptr<black_detection_interfaces::msg::BlackObjectArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__black_detection_interfaces__msg__BlackObjectArray
    std::shared_ptr<black_detection_interfaces::msg::BlackObjectArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BlackObjectArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->objects != other.objects) {
      return false;
    }
    if (this->count != other.count) {
      return false;
    }
    return true;
  }
  bool operator!=(const BlackObjectArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BlackObjectArray_

// alias to use template instance with default allocator
using BlackObjectArray =
  black_detection_interfaces::msg::BlackObjectArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace black_detection_interfaces

#endif  // BLACK_DETECTION_INTERFACES__MSG__DETAIL__BLACK_OBJECT_ARRAY__STRUCT_HPP_
