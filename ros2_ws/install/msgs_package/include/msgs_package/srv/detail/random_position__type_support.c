// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msgs_package:srv/RandomPosition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msgs_package/srv/detail/random_position__rosidl_typesupport_introspection_c.h"
#include "msgs_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msgs_package/srv/detail/random_position__functions.h"
#include "msgs_package/srv/detail/random_position__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void RandomPosition_Request__rosidl_typesupport_introspection_c__RandomPosition_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msgs_package__srv__RandomPosition_Request__init(message_memory);
}

void RandomPosition_Request__rosidl_typesupport_introspection_c__RandomPosition_Request_fini_function(void * message_memory)
{
  msgs_package__srv__RandomPosition_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RandomPosition_Request__rosidl_typesupport_introspection_c__RandomPosition_Request_message_member_array[1] = {
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_package__srv__RandomPosition_Request, request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RandomPosition_Request__rosidl_typesupport_introspection_c__RandomPosition_Request_message_members = {
  "msgs_package__srv",  // message namespace
  "RandomPosition_Request",  // message name
  1,  // number of fields
  sizeof(msgs_package__srv__RandomPosition_Request),
  RandomPosition_Request__rosidl_typesupport_introspection_c__RandomPosition_Request_message_member_array,  // message members
  RandomPosition_Request__rosidl_typesupport_introspection_c__RandomPosition_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RandomPosition_Request__rosidl_typesupport_introspection_c__RandomPosition_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RandomPosition_Request__rosidl_typesupport_introspection_c__RandomPosition_Request_message_type_support_handle = {
  0,
  &RandomPosition_Request__rosidl_typesupport_introspection_c__RandomPosition_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msgs_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_package, srv, RandomPosition_Request)() {
  if (!RandomPosition_Request__rosidl_typesupport_introspection_c__RandomPosition_Request_message_type_support_handle.typesupport_identifier) {
    RandomPosition_Request__rosidl_typesupport_introspection_c__RandomPosition_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RandomPosition_Request__rosidl_typesupport_introspection_c__RandomPosition_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msgs_package/srv/detail/random_position__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msgs_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msgs_package/srv/detail/random_position__functions.h"
// already included above
// #include "msgs_package/srv/detail/random_position__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void RandomPosition_Response__rosidl_typesupport_introspection_c__RandomPosition_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msgs_package__srv__RandomPosition_Response__init(message_memory);
}

void RandomPosition_Response__rosidl_typesupport_introspection_c__RandomPosition_Response_fini_function(void * message_memory)
{
  msgs_package__srv__RandomPosition_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RandomPosition_Response__rosidl_typesupport_introspection_c__RandomPosition_Response_message_member_array[2] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_package__srv__RandomPosition_Response, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_package__srv__RandomPosition_Response, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RandomPosition_Response__rosidl_typesupport_introspection_c__RandomPosition_Response_message_members = {
  "msgs_package__srv",  // message namespace
  "RandomPosition_Response",  // message name
  2,  // number of fields
  sizeof(msgs_package__srv__RandomPosition_Response),
  RandomPosition_Response__rosidl_typesupport_introspection_c__RandomPosition_Response_message_member_array,  // message members
  RandomPosition_Response__rosidl_typesupport_introspection_c__RandomPosition_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RandomPosition_Response__rosidl_typesupport_introspection_c__RandomPosition_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RandomPosition_Response__rosidl_typesupport_introspection_c__RandomPosition_Response_message_type_support_handle = {
  0,
  &RandomPosition_Response__rosidl_typesupport_introspection_c__RandomPosition_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msgs_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_package, srv, RandomPosition_Response)() {
  if (!RandomPosition_Response__rosidl_typesupport_introspection_c__RandomPosition_Response_message_type_support_handle.typesupport_identifier) {
    RandomPosition_Response__rosidl_typesupport_introspection_c__RandomPosition_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RandomPosition_Response__rosidl_typesupport_introspection_c__RandomPosition_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "msgs_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "msgs_package/srv/detail/random_position__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers msgs_package__srv__detail__random_position__rosidl_typesupport_introspection_c__RandomPosition_service_members = {
  "msgs_package__srv",  // service namespace
  "RandomPosition",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // msgs_package__srv__detail__random_position__rosidl_typesupport_introspection_c__RandomPosition_Request_message_type_support_handle,
  NULL  // response message
  // msgs_package__srv__detail__random_position__rosidl_typesupport_introspection_c__RandomPosition_Response_message_type_support_handle
};

static rosidl_service_type_support_t msgs_package__srv__detail__random_position__rosidl_typesupport_introspection_c__RandomPosition_service_type_support_handle = {
  0,
  &msgs_package__srv__detail__random_position__rosidl_typesupport_introspection_c__RandomPosition_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_package, srv, RandomPosition_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_package, srv, RandomPosition_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msgs_package
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_package, srv, RandomPosition)() {
  if (!msgs_package__srv__detail__random_position__rosidl_typesupport_introspection_c__RandomPosition_service_type_support_handle.typesupport_identifier) {
    msgs_package__srv__detail__random_position__rosidl_typesupport_introspection_c__RandomPosition_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)msgs_package__srv__detail__random_position__rosidl_typesupport_introspection_c__RandomPosition_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_package, srv, RandomPosition_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_package, srv, RandomPosition_Response)()->data;
  }

  return &msgs_package__srv__detail__random_position__rosidl_typesupport_introspection_c__RandomPosition_service_type_support_handle;
}
