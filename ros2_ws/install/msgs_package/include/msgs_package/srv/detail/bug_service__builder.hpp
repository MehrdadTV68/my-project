// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msgs_package:srv/BugService.idl
// generated code does not contain a copyright notice

#ifndef MSGS_PACKAGE__SRV__DETAIL__BUG_SERVICE__BUILDER_HPP_
#define MSGS_PACKAGE__SRV__DETAIL__BUG_SERVICE__BUILDER_HPP_

#include "msgs_package/srv/detail/bug_service__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace msgs_package
{

namespace srv
{

namespace builder
{

class Init_BugService_Request_y
{
public:
  explicit Init_BugService_Request_y(::msgs_package::srv::BugService_Request & msg)
  : msg_(msg)
  {}
  ::msgs_package::srv::BugService_Request y(::msgs_package::srv::BugService_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msgs_package::srv::BugService_Request msg_;
};

class Init_BugService_Request_x
{
public:
  explicit Init_BugService_Request_x(::msgs_package::srv::BugService_Request & msg)
  : msg_(msg)
  {}
  Init_BugService_Request_y x(::msgs_package::srv::BugService_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_BugService_Request_y(msg_);
  }

private:
  ::msgs_package::srv::BugService_Request msg_;
};

class Init_BugService_Request_data
{
public:
  Init_BugService_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BugService_Request_x data(::msgs_package::srv::BugService_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_BugService_Request_x(msg_);
  }

private:
  ::msgs_package::srv::BugService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msgs_package::srv::BugService_Request>()
{
  return msgs_package::srv::builder::Init_BugService_Request_data();
}

}  // namespace msgs_package


namespace msgs_package
{

namespace srv
{

namespace builder
{

class Init_BugService_Response_data
{
public:
  Init_BugService_Response_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msgs_package::srv::BugService_Response data(::msgs_package::srv::BugService_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msgs_package::srv::BugService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msgs_package::srv::BugService_Response>()
{
  return msgs_package::srv::builder::Init_BugService_Response_data();
}

}  // namespace msgs_package

#endif  // MSGS_PACKAGE__SRV__DETAIL__BUG_SERVICE__BUILDER_HPP_
