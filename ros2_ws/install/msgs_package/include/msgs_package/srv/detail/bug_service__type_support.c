// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msgs_package:srv/BugService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msgs_package/srv/detail/bug_service__rosidl_typesupport_introspection_c.h"
#include "msgs_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msgs_package/srv/detail/bug_service__functions.h"
#include "msgs_package/srv/detail/bug_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void BugService_Request__rosidl_typesupport_introspection_c__BugService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msgs_package__srv__BugService_Request__init(message_memory);
}

void BugService_Request__rosidl_typesupport_introspection_c__BugService_Request_fini_function(void * message_memory)
{
  msgs_package__srv__BugService_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BugService_Request__rosidl_typesupport_introspection_c__BugService_Request_message_member_array[3] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_package__srv__BugService_Request, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_package__srv__BugService_Request, x),  // bytes offset in struct
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
    offsetof(msgs_package__srv__BugService_Request, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BugService_Request__rosidl_typesupport_introspection_c__BugService_Request_message_members = {
  "msgs_package__srv",  // message namespace
  "BugService_Request",  // message name
  3,  // number of fields
  sizeof(msgs_package__srv__BugService_Request),
  BugService_Request__rosidl_typesupport_introspection_c__BugService_Request_message_member_array,  // message members
  BugService_Request__rosidl_typesupport_introspection_c__BugService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  BugService_Request__rosidl_typesupport_introspection_c__BugService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BugService_Request__rosidl_typesupport_introspection_c__BugService_Request_message_type_support_handle = {
  0,
  &BugService_Request__rosidl_typesupport_introspection_c__BugService_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msgs_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_package, srv, BugService_Request)() {
  if (!BugService_Request__rosidl_typesupport_introspection_c__BugService_Request_message_type_support_handle.typesupport_identifier) {
    BugService_Request__rosidl_typesupport_introspection_c__BugService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BugService_Request__rosidl_typesupport_introspection_c__BugService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msgs_package/srv/detail/bug_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msgs_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msgs_package/srv/detail/bug_service__functions.h"
// already included above
// #include "msgs_package/srv/detail/bug_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void BugService_Response__rosidl_typesupport_introspection_c__BugService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msgs_package__srv__BugService_Response__init(message_memory);
}

void BugService_Response__rosidl_typesupport_introspection_c__BugService_Response_fini_function(void * message_memory)
{
  msgs_package__srv__BugService_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BugService_Response__rosidl_typesupport_introspection_c__BugService_Response_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msgs_package__srv__BugService_Response, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BugService_Response__rosidl_typesupport_introspection_c__BugService_Response_message_members = {
  "msgs_package__srv",  // message namespace
  "BugService_Response",  // message name
  1,  // number of fields
  sizeof(msgs_package__srv__BugService_Response),
  BugService_Response__rosidl_typesupport_introspection_c__BugService_Response_message_member_array,  // message members
  BugService_Response__rosidl_typesupport_introspection_c__BugService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  BugService_Response__rosidl_typesupport_introspection_c__BugService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BugService_Response__rosidl_typesupport_introspection_c__BugService_Response_message_type_support_handle = {
  0,
  &BugService_Response__rosidl_typesupport_introspection_c__BugService_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msgs_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_package, srv, BugService_Response)() {
  if (!BugService_Response__rosidl_typesupport_introspection_c__BugService_Response_message_type_support_handle.typesupport_identifier) {
    BugService_Response__rosidl_typesupport_introspection_c__BugService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BugService_Response__rosidl_typesupport_introspection_c__BugService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "msgs_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "msgs_package/srv/detail/bug_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers msgs_package__srv__detail__bug_service__rosidl_typesupport_introspection_c__BugService_service_members = {
  "msgs_package__srv",  // service namespace
  "BugService",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // msgs_package__srv__detail__bug_service__rosidl_typesupport_introspection_c__BugService_Request_message_type_support_handle,
  NULL  // response message
  // msgs_package__srv__detail__bug_service__rosidl_typesupport_introspection_c__BugService_Response_message_type_support_handle
};

static rosidl_service_type_support_t msgs_package__srv__detail__bug_service__rosidl_typesupport_introspection_c__BugService_service_type_support_handle = {
  0,
  &msgs_package__srv__detail__bug_service__rosidl_typesupport_introspection_c__BugService_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_package, srv, BugService_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_package, srv, BugService_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msgs_package
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_package, srv, BugService)() {
  if (!msgs_package__srv__detail__bug_service__rosidl_typesupport_introspection_c__BugService_service_type_support_handle.typesupport_identifier) {
    msgs_package__srv__detail__bug_service__rosidl_typesupport_introspection_c__BugService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)msgs_package__srv__detail__bug_service__rosidl_typesupport_introspection_c__BugService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_package, srv, BugService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msgs_package, srv, BugService_Response)()->data;
  }

  return &msgs_package__srv__detail__bug_service__rosidl_typesupport_introspection_c__BugService_service_type_support_handle;
}
