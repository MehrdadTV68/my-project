// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msgs_package:srv/RandomPosition.idl
// generated code does not contain a copyright notice

#ifndef MSGS_PACKAGE__SRV__DETAIL__RANDOM_POSITION__TRAITS_HPP_
#define MSGS_PACKAGE__SRV__DETAIL__RANDOM_POSITION__TRAITS_HPP_

#include "msgs_package/srv/detail/random_position__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msgs_package::srv::RandomPosition_Request>()
{
  return "msgs_package::srv::RandomPosition_Request";
}

template<>
inline const char * name<msgs_package::srv::RandomPosition_Request>()
{
  return "msgs_package/srv/RandomPosition_Request";
}

template<>
struct has_fixed_size<msgs_package::srv::RandomPosition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<msgs_package::srv::RandomPosition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<msgs_package::srv::RandomPosition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msgs_package::srv::RandomPosition_Response>()
{
  return "msgs_package::srv::RandomPosition_Response";
}

template<>
inline const char * name<msgs_package::srv::RandomPosition_Response>()
{
  return "msgs_package/srv/RandomPosition_Response";
}

template<>
struct has_fixed_size<msgs_package::srv::RandomPosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<msgs_package::srv::RandomPosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<msgs_package::srv::RandomPosition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msgs_package::srv::RandomPosition>()
{
  return "msgs_package::srv::RandomPosition";
}

template<>
inline const char * name<msgs_package::srv::RandomPosition>()
{
  return "msgs_package/srv/RandomPosition";
}

template<>
struct has_fixed_size<msgs_package::srv::RandomPosition>
  : std::integral_constant<
    bool,
    has_fixed_size<msgs_package::srv::RandomPosition_Request>::value &&
    has_fixed_size<msgs_package::srv::RandomPosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<msgs_package::srv::RandomPosition>
  : std::integral_constant<
    bool,
    has_bounded_size<msgs_package::srv::RandomPosition_Request>::value &&
    has_bounded_size<msgs_package::srv::RandomPosition_Response>::value
  >
{
};

template<>
struct is_service<msgs_package::srv::RandomPosition>
  : std::true_type
{
};

template<>
struct is_service_request<msgs_package::srv::RandomPosition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<msgs_package::srv::RandomPosition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MSGS_PACKAGE__SRV__DETAIL__RANDOM_POSITION__TRAITS_HPP_
