// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msgs_package:srv/RandomPosition.idl
// generated code does not contain a copyright notice

#ifndef MSGS_PACKAGE__SRV__DETAIL__RANDOM_POSITION__STRUCT_H_
#define MSGS_PACKAGE__SRV__DETAIL__RANDOM_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/RandomPosition in the package msgs_package.
typedef struct msgs_package__srv__RandomPosition_Request
{
  bool request;
} msgs_package__srv__RandomPosition_Request;

// Struct for a sequence of msgs_package__srv__RandomPosition_Request.
typedef struct msgs_package__srv__RandomPosition_Request__Sequence
{
  msgs_package__srv__RandomPosition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msgs_package__srv__RandomPosition_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/RandomPosition in the package msgs_package.
typedef struct msgs_package__srv__RandomPosition_Response
{
  double x;
  double y;
} msgs_package__srv__RandomPosition_Response;

// Struct for a sequence of msgs_package__srv__RandomPosition_Response.
typedef struct msgs_package__srv__RandomPosition_Response__Sequence
{
  msgs_package__srv__RandomPosition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msgs_package__srv__RandomPosition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSGS_PACKAGE__SRV__DETAIL__RANDOM_POSITION__STRUCT_H_
