// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msgs_package:srv/BugService.idl
// generated code does not contain a copyright notice

#ifndef MSGS_PACKAGE__SRV__DETAIL__BUG_SERVICE__STRUCT_H_
#define MSGS_PACKAGE__SRV__DETAIL__BUG_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/BugService in the package msgs_package.
typedef struct msgs_package__srv__BugService_Request
{
  bool data;
  double x;
  double y;
} msgs_package__srv__BugService_Request;

// Struct for a sequence of msgs_package__srv__BugService_Request.
typedef struct msgs_package__srv__BugService_Request__Sequence
{
  msgs_package__srv__BugService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msgs_package__srv__BugService_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/BugService in the package msgs_package.
typedef struct msgs_package__srv__BugService_Response
{
  bool data;
} msgs_package__srv__BugService_Response;

// Struct for a sequence of msgs_package__srv__BugService_Response.
typedef struct msgs_package__srv__BugService_Response__Sequence
{
  msgs_package__srv__BugService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msgs_package__srv__BugService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSGS_PACKAGE__SRV__DETAIL__BUG_SERVICE__STRUCT_H_
