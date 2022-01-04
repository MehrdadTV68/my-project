// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msgs_package:srv/BugService.idl
// generated code does not contain a copyright notice
#include "msgs_package/srv/detail/bug_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
msgs_package__srv__BugService_Request__init(msgs_package__srv__BugService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // data
  // x
  // y
  return true;
}

void
msgs_package__srv__BugService_Request__fini(msgs_package__srv__BugService_Request * msg)
{
  if (!msg) {
    return;
  }
  // data
  // x
  // y
}

msgs_package__srv__BugService_Request *
msgs_package__srv__BugService_Request__create()
{
  msgs_package__srv__BugService_Request * msg = (msgs_package__srv__BugService_Request *)malloc(sizeof(msgs_package__srv__BugService_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msgs_package__srv__BugService_Request));
  bool success = msgs_package__srv__BugService_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
msgs_package__srv__BugService_Request__destroy(msgs_package__srv__BugService_Request * msg)
{
  if (msg) {
    msgs_package__srv__BugService_Request__fini(msg);
  }
  free(msg);
}


bool
msgs_package__srv__BugService_Request__Sequence__init(msgs_package__srv__BugService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  msgs_package__srv__BugService_Request * data = NULL;
  if (size) {
    data = (msgs_package__srv__BugService_Request *)calloc(size, sizeof(msgs_package__srv__BugService_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msgs_package__srv__BugService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msgs_package__srv__BugService_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
msgs_package__srv__BugService_Request__Sequence__fini(msgs_package__srv__BugService_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msgs_package__srv__BugService_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

msgs_package__srv__BugService_Request__Sequence *
msgs_package__srv__BugService_Request__Sequence__create(size_t size)
{
  msgs_package__srv__BugService_Request__Sequence * array = (msgs_package__srv__BugService_Request__Sequence *)malloc(sizeof(msgs_package__srv__BugService_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = msgs_package__srv__BugService_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
msgs_package__srv__BugService_Request__Sequence__destroy(msgs_package__srv__BugService_Request__Sequence * array)
{
  if (array) {
    msgs_package__srv__BugService_Request__Sequence__fini(array);
  }
  free(array);
}


bool
msgs_package__srv__BugService_Response__init(msgs_package__srv__BugService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
msgs_package__srv__BugService_Response__fini(msgs_package__srv__BugService_Response * msg)
{
  if (!msg) {
    return;
  }
  // data
}

msgs_package__srv__BugService_Response *
msgs_package__srv__BugService_Response__create()
{
  msgs_package__srv__BugService_Response * msg = (msgs_package__srv__BugService_Response *)malloc(sizeof(msgs_package__srv__BugService_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msgs_package__srv__BugService_Response));
  bool success = msgs_package__srv__BugService_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
msgs_package__srv__BugService_Response__destroy(msgs_package__srv__BugService_Response * msg)
{
  if (msg) {
    msgs_package__srv__BugService_Response__fini(msg);
  }
  free(msg);
}


bool
msgs_package__srv__BugService_Response__Sequence__init(msgs_package__srv__BugService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  msgs_package__srv__BugService_Response * data = NULL;
  if (size) {
    data = (msgs_package__srv__BugService_Response *)calloc(size, sizeof(msgs_package__srv__BugService_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msgs_package__srv__BugService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msgs_package__srv__BugService_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
msgs_package__srv__BugService_Response__Sequence__fini(msgs_package__srv__BugService_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msgs_package__srv__BugService_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

msgs_package__srv__BugService_Response__Sequence *
msgs_package__srv__BugService_Response__Sequence__create(size_t size)
{
  msgs_package__srv__BugService_Response__Sequence * array = (msgs_package__srv__BugService_Response__Sequence *)malloc(sizeof(msgs_package__srv__BugService_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = msgs_package__srv__BugService_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
msgs_package__srv__BugService_Response__Sequence__destroy(msgs_package__srv__BugService_Response__Sequence * array)
{
  if (array) {
    msgs_package__srv__BugService_Response__Sequence__fini(array);
  }
  free(array);
}
