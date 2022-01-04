// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msgs_package:srv/RandomPosition.idl
// generated code does not contain a copyright notice

#ifndef MSGS_PACKAGE__SRV__DETAIL__RANDOM_POSITION__BUILDER_HPP_
#define MSGS_PACKAGE__SRV__DETAIL__RANDOM_POSITION__BUILDER_HPP_

#include "msgs_package/srv/detail/random_position__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace msgs_package
{

namespace srv
{

namespace builder
{

class Init_RandomPosition_Request_request
{
public:
  Init_RandomPosition_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msgs_package::srv::RandomPosition_Request request(::msgs_package::srv::RandomPosition_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msgs_package::srv::RandomPosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msgs_package::srv::RandomPosition_Request>()
{
  return msgs_package::srv::builder::Init_RandomPosition_Request_request();
}

}  // namespace msgs_package


namespace msgs_package
{

namespace srv
{

namespace builder
{

class Init_RandomPosition_Response_y
{
public:
  explicit Init_RandomPosition_Response_y(::msgs_package::srv::RandomPosition_Response & msg)
  : msg_(msg)
  {}
  ::msgs_package::srv::RandomPosition_Response y(::msgs_package::srv::RandomPosition_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msgs_package::srv::RandomPosition_Response msg_;
};

class Init_RandomPosition_Response_x
{
public:
  Init_RandomPosition_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RandomPosition_Response_y x(::msgs_package::srv::RandomPosition_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_RandomPosition_Response_y(msg_);
  }

private:
  ::msgs_package::srv::RandomPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msgs_package::srv::RandomPosition_Response>()
{
  return msgs_package::srv::builder::Init_RandomPosition_Response_x();
}

}  // namespace msgs_package

#endif  // MSGS_PACKAGE__SRV__DETAIL__RANDOM_POSITION__BUILDER_HPP_
