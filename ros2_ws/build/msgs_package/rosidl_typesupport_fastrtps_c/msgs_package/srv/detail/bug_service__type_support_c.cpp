// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from msgs_package:srv/BugService.idl
// generated code does not contain a copyright notice
#include "msgs_package/srv/detail/bug_service__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "msgs_package/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "msgs_package/srv/detail/bug_service__struct.h"
#include "msgs_package/srv/detail/bug_service__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _BugService_Request__ros_msg_type = msgs_package__srv__BugService_Request;

static bool _BugService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BugService_Request__ros_msg_type * ros_message = static_cast<const _BugService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: data
  {
    cdr << (ros_message->data ? true : false);
  }

  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  return true;
}

static bool _BugService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BugService_Request__ros_msg_type * ros_message = static_cast<_BugService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->data = tmp ? true : false;
  }

  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msgs_package
size_t get_serialized_size_msgs_package__srv__BugService_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BugService_Request__ros_msg_type * ros_message = static_cast<const _BugService_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name data
  {
    size_t item_size = sizeof(ros_message->data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BugService_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_msgs_package__srv__BugService_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msgs_package
size_t max_serialized_size_msgs_package__srv__BugService_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _BugService_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_msgs_package__srv__BugService_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BugService_Request = {
  "msgs_package::srv",
  "BugService_Request",
  _BugService_Request__cdr_serialize,
  _BugService_Request__cdr_deserialize,
  _BugService_Request__get_serialized_size,
  _BugService_Request__max_serialized_size
};

static rosidl_message_type_support_t _BugService_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BugService_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msgs_package, srv, BugService_Request)() {
  return &_BugService_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "msgs_package/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "msgs_package/srv/detail/bug_service__struct.h"
// already included above
// #include "msgs_package/srv/detail/bug_service__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _BugService_Response__ros_msg_type = msgs_package__srv__BugService_Response;

static bool _BugService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BugService_Response__ros_msg_type * ros_message = static_cast<const _BugService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: data
  {
    cdr << (ros_message->data ? true : false);
  }

  return true;
}

static bool _BugService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BugService_Response__ros_msg_type * ros_message = static_cast<_BugService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->data = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msgs_package
size_t get_serialized_size_msgs_package__srv__BugService_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BugService_Response__ros_msg_type * ros_message = static_cast<const _BugService_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name data
  {
    size_t item_size = sizeof(ros_message->data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BugService_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_msgs_package__srv__BugService_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msgs_package
size_t max_serialized_size_msgs_package__srv__BugService_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _BugService_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_msgs_package__srv__BugService_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BugService_Response = {
  "msgs_package::srv",
  "BugService_Response",
  _BugService_Response__cdr_serialize,
  _BugService_Response__cdr_deserialize,
  _BugService_Response__get_serialized_size,
  _BugService_Response__max_serialized_size
};

static rosidl_message_type_support_t _BugService_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BugService_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msgs_package, srv, BugService_Response)() {
  return &_BugService_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "msgs_package/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "msgs_package/srv/bug_service.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t BugService__callbacks = {
  "msgs_package::srv",
  "BugService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msgs_package, srv, BugService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msgs_package, srv, BugService_Response)(),
};

static rosidl_service_type_support_t BugService__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &BugService__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msgs_package, srv, BugService)() {
  return &BugService__handle;
}

#if defined(__cplusplus)
}
#endif
