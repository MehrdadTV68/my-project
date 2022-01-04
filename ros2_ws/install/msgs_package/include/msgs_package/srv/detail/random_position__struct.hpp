// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msgs_package:srv/RandomPosition.idl
// generated code does not contain a copyright notice

#ifndef MSGS_PACKAGE__SRV__DETAIL__RANDOM_POSITION__STRUCT_HPP_
#define MSGS_PACKAGE__SRV__DETAIL__RANDOM_POSITION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__msgs_package__srv__RandomPosition_Request __attribute__((deprecated))
#else
# define DEPRECATED__msgs_package__srv__RandomPosition_Request __declspec(deprecated)
#endif

namespace msgs_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RandomPosition_Request_
{
  using Type = RandomPosition_Request_<ContainerAllocator>;

  explicit RandomPosition_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request = false;
    }
  }

  explicit RandomPosition_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request = false;
    }
  }

  // field types and members
  using _request_type =
    bool;
  _request_type request;

  // setters for named parameter idiom
  Type & set__request(
    const bool & _arg)
  {
    this->request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msgs_package::srv::RandomPosition_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const msgs_package::srv::RandomPosition_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msgs_package::srv::RandomPosition_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msgs_package::srv::RandomPosition_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msgs_package::srv::RandomPosition_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msgs_package::srv::RandomPosition_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msgs_package::srv::RandomPosition_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msgs_package::srv::RandomPosition_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msgs_package::srv::RandomPosition_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msgs_package::srv::RandomPosition_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msgs_package__srv__RandomPosition_Request
    std::shared_ptr<msgs_package::srv::RandomPosition_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msgs_package__srv__RandomPosition_Request
    std::shared_ptr<msgs_package::srv::RandomPosition_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RandomPosition_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    return true;
  }
  bool operator!=(const RandomPosition_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RandomPosition_Request_

// alias to use template instance with default allocator
using RandomPosition_Request =
  msgs_package::srv::RandomPosition_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace msgs_package


#ifndef _WIN32
# define DEPRECATED__msgs_package__srv__RandomPosition_Response __attribute__((deprecated))
#else
# define DEPRECATED__msgs_package__srv__RandomPosition_Response __declspec(deprecated)
#endif

namespace msgs_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RandomPosition_Response_
{
  using Type = RandomPosition_Response_<ContainerAllocator>;

  explicit RandomPosition_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  explicit RandomPosition_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msgs_package::srv::RandomPosition_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const msgs_package::srv::RandomPosition_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msgs_package::srv::RandomPosition_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msgs_package::srv::RandomPosition_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msgs_package::srv::RandomPosition_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msgs_package::srv::RandomPosition_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msgs_package::srv::RandomPosition_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msgs_package::srv::RandomPosition_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msgs_package::srv::RandomPosition_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msgs_package::srv::RandomPosition_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msgs_package__srv__RandomPosition_Response
    std::shared_ptr<msgs_package::srv::RandomPosition_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msgs_package__srv__RandomPosition_Response
    std::shared_ptr<msgs_package::srv::RandomPosition_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RandomPosition_Response_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const RandomPosition_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RandomPosition_Response_

// alias to use template instance with default allocator
using RandomPosition_Response =
  msgs_package::srv::RandomPosition_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace msgs_package

namespace msgs_package
{

namespace srv
{

struct RandomPosition
{
  using Request = msgs_package::srv::RandomPosition_Request;
  using Response = msgs_package::srv::RandomPosition_Response;
};

}  // namespace srv

}  // namespace msgs_package

#endif  // MSGS_PACKAGE__SRV__DETAIL__RANDOM_POSITION__STRUCT_HPP_
