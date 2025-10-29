// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from omo_r1_interfaces:srv/SaveColor.idl
// generated code does not contain a copyright notice
#include "omo_r1_interfaces/srv/detail/save_color__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
omo_r1_interfaces__srv__SaveColor_Request__init(omo_r1_interfaces__srv__SaveColor_Request * msg)
{
  if (!msg) {
    return false;
  }
  // red
  // green
  // blue
  return true;
}

void
omo_r1_interfaces__srv__SaveColor_Request__fini(omo_r1_interfaces__srv__SaveColor_Request * msg)
{
  if (!msg) {
    return;
  }
  // red
  // green
  // blue
}

bool
omo_r1_interfaces__srv__SaveColor_Request__are_equal(const omo_r1_interfaces__srv__SaveColor_Request * lhs, const omo_r1_interfaces__srv__SaveColor_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // red
  if (lhs->red != rhs->red) {
    return false;
  }
  // green
  if (lhs->green != rhs->green) {
    return false;
  }
  // blue
  if (lhs->blue != rhs->blue) {
    return false;
  }
  return true;
}

bool
omo_r1_interfaces__srv__SaveColor_Request__copy(
  const omo_r1_interfaces__srv__SaveColor_Request * input,
  omo_r1_interfaces__srv__SaveColor_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // red
  output->red = input->red;
  // green
  output->green = input->green;
  // blue
  output->blue = input->blue;
  return true;
}

omo_r1_interfaces__srv__SaveColor_Request *
omo_r1_interfaces__srv__SaveColor_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omo_r1_interfaces__srv__SaveColor_Request * msg = (omo_r1_interfaces__srv__SaveColor_Request *)allocator.allocate(sizeof(omo_r1_interfaces__srv__SaveColor_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(omo_r1_interfaces__srv__SaveColor_Request));
  bool success = omo_r1_interfaces__srv__SaveColor_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
omo_r1_interfaces__srv__SaveColor_Request__destroy(omo_r1_interfaces__srv__SaveColor_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    omo_r1_interfaces__srv__SaveColor_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
omo_r1_interfaces__srv__SaveColor_Request__Sequence__init(omo_r1_interfaces__srv__SaveColor_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omo_r1_interfaces__srv__SaveColor_Request * data = NULL;

  if (size) {
    data = (omo_r1_interfaces__srv__SaveColor_Request *)allocator.zero_allocate(size, sizeof(omo_r1_interfaces__srv__SaveColor_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = omo_r1_interfaces__srv__SaveColor_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        omo_r1_interfaces__srv__SaveColor_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
omo_r1_interfaces__srv__SaveColor_Request__Sequence__fini(omo_r1_interfaces__srv__SaveColor_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      omo_r1_interfaces__srv__SaveColor_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

omo_r1_interfaces__srv__SaveColor_Request__Sequence *
omo_r1_interfaces__srv__SaveColor_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omo_r1_interfaces__srv__SaveColor_Request__Sequence * array = (omo_r1_interfaces__srv__SaveColor_Request__Sequence *)allocator.allocate(sizeof(omo_r1_interfaces__srv__SaveColor_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = omo_r1_interfaces__srv__SaveColor_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
omo_r1_interfaces__srv__SaveColor_Request__Sequence__destroy(omo_r1_interfaces__srv__SaveColor_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    omo_r1_interfaces__srv__SaveColor_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
omo_r1_interfaces__srv__SaveColor_Request__Sequence__are_equal(const omo_r1_interfaces__srv__SaveColor_Request__Sequence * lhs, const omo_r1_interfaces__srv__SaveColor_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!omo_r1_interfaces__srv__SaveColor_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
omo_r1_interfaces__srv__SaveColor_Request__Sequence__copy(
  const omo_r1_interfaces__srv__SaveColor_Request__Sequence * input,
  omo_r1_interfaces__srv__SaveColor_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(omo_r1_interfaces__srv__SaveColor_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    omo_r1_interfaces__srv__SaveColor_Request * data =
      (omo_r1_interfaces__srv__SaveColor_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!omo_r1_interfaces__srv__SaveColor_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          omo_r1_interfaces__srv__SaveColor_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!omo_r1_interfaces__srv__SaveColor_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
omo_r1_interfaces__srv__SaveColor_Response__init(omo_r1_interfaces__srv__SaveColor_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
omo_r1_interfaces__srv__SaveColor_Response__fini(omo_r1_interfaces__srv__SaveColor_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
omo_r1_interfaces__srv__SaveColor_Response__are_equal(const omo_r1_interfaces__srv__SaveColor_Response * lhs, const omo_r1_interfaces__srv__SaveColor_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
omo_r1_interfaces__srv__SaveColor_Response__copy(
  const omo_r1_interfaces__srv__SaveColor_Response * input,
  omo_r1_interfaces__srv__SaveColor_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

omo_r1_interfaces__srv__SaveColor_Response *
omo_r1_interfaces__srv__SaveColor_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omo_r1_interfaces__srv__SaveColor_Response * msg = (omo_r1_interfaces__srv__SaveColor_Response *)allocator.allocate(sizeof(omo_r1_interfaces__srv__SaveColor_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(omo_r1_interfaces__srv__SaveColor_Response));
  bool success = omo_r1_interfaces__srv__SaveColor_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
omo_r1_interfaces__srv__SaveColor_Response__destroy(omo_r1_interfaces__srv__SaveColor_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    omo_r1_interfaces__srv__SaveColor_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
omo_r1_interfaces__srv__SaveColor_Response__Sequence__init(omo_r1_interfaces__srv__SaveColor_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omo_r1_interfaces__srv__SaveColor_Response * data = NULL;

  if (size) {
    data = (omo_r1_interfaces__srv__SaveColor_Response *)allocator.zero_allocate(size, sizeof(omo_r1_interfaces__srv__SaveColor_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = omo_r1_interfaces__srv__SaveColor_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        omo_r1_interfaces__srv__SaveColor_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
omo_r1_interfaces__srv__SaveColor_Response__Sequence__fini(omo_r1_interfaces__srv__SaveColor_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      omo_r1_interfaces__srv__SaveColor_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

omo_r1_interfaces__srv__SaveColor_Response__Sequence *
omo_r1_interfaces__srv__SaveColor_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omo_r1_interfaces__srv__SaveColor_Response__Sequence * array = (omo_r1_interfaces__srv__SaveColor_Response__Sequence *)allocator.allocate(sizeof(omo_r1_interfaces__srv__SaveColor_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = omo_r1_interfaces__srv__SaveColor_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
omo_r1_interfaces__srv__SaveColor_Response__Sequence__destroy(omo_r1_interfaces__srv__SaveColor_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    omo_r1_interfaces__srv__SaveColor_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
omo_r1_interfaces__srv__SaveColor_Response__Sequence__are_equal(const omo_r1_interfaces__srv__SaveColor_Response__Sequence * lhs, const omo_r1_interfaces__srv__SaveColor_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!omo_r1_interfaces__srv__SaveColor_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
omo_r1_interfaces__srv__SaveColor_Response__Sequence__copy(
  const omo_r1_interfaces__srv__SaveColor_Response__Sequence * input,
  omo_r1_interfaces__srv__SaveColor_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(omo_r1_interfaces__srv__SaveColor_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    omo_r1_interfaces__srv__SaveColor_Response * data =
      (omo_r1_interfaces__srv__SaveColor_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!omo_r1_interfaces__srv__SaveColor_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          omo_r1_interfaces__srv__SaveColor_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!omo_r1_interfaces__srv__SaveColor_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "omo_r1_interfaces/srv/detail/save_color__functions.h"

bool
omo_r1_interfaces__srv__SaveColor_Event__init(omo_r1_interfaces__srv__SaveColor_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    omo_r1_interfaces__srv__SaveColor_Event__fini(msg);
    return false;
  }
  // request
  if (!omo_r1_interfaces__srv__SaveColor_Request__Sequence__init(&msg->request, 0)) {
    omo_r1_interfaces__srv__SaveColor_Event__fini(msg);
    return false;
  }
  // response
  if (!omo_r1_interfaces__srv__SaveColor_Response__Sequence__init(&msg->response, 0)) {
    omo_r1_interfaces__srv__SaveColor_Event__fini(msg);
    return false;
  }
  return true;
}

void
omo_r1_interfaces__srv__SaveColor_Event__fini(omo_r1_interfaces__srv__SaveColor_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  omo_r1_interfaces__srv__SaveColor_Request__Sequence__fini(&msg->request);
  // response
  omo_r1_interfaces__srv__SaveColor_Response__Sequence__fini(&msg->response);
}

bool
omo_r1_interfaces__srv__SaveColor_Event__are_equal(const omo_r1_interfaces__srv__SaveColor_Event * lhs, const omo_r1_interfaces__srv__SaveColor_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!omo_r1_interfaces__srv__SaveColor_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!omo_r1_interfaces__srv__SaveColor_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
omo_r1_interfaces__srv__SaveColor_Event__copy(
  const omo_r1_interfaces__srv__SaveColor_Event * input,
  omo_r1_interfaces__srv__SaveColor_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!omo_r1_interfaces__srv__SaveColor_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!omo_r1_interfaces__srv__SaveColor_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

omo_r1_interfaces__srv__SaveColor_Event *
omo_r1_interfaces__srv__SaveColor_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omo_r1_interfaces__srv__SaveColor_Event * msg = (omo_r1_interfaces__srv__SaveColor_Event *)allocator.allocate(sizeof(omo_r1_interfaces__srv__SaveColor_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(omo_r1_interfaces__srv__SaveColor_Event));
  bool success = omo_r1_interfaces__srv__SaveColor_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
omo_r1_interfaces__srv__SaveColor_Event__destroy(omo_r1_interfaces__srv__SaveColor_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    omo_r1_interfaces__srv__SaveColor_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
omo_r1_interfaces__srv__SaveColor_Event__Sequence__init(omo_r1_interfaces__srv__SaveColor_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omo_r1_interfaces__srv__SaveColor_Event * data = NULL;

  if (size) {
    data = (omo_r1_interfaces__srv__SaveColor_Event *)allocator.zero_allocate(size, sizeof(omo_r1_interfaces__srv__SaveColor_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = omo_r1_interfaces__srv__SaveColor_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        omo_r1_interfaces__srv__SaveColor_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
omo_r1_interfaces__srv__SaveColor_Event__Sequence__fini(omo_r1_interfaces__srv__SaveColor_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      omo_r1_interfaces__srv__SaveColor_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

omo_r1_interfaces__srv__SaveColor_Event__Sequence *
omo_r1_interfaces__srv__SaveColor_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  omo_r1_interfaces__srv__SaveColor_Event__Sequence * array = (omo_r1_interfaces__srv__SaveColor_Event__Sequence *)allocator.allocate(sizeof(omo_r1_interfaces__srv__SaveColor_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = omo_r1_interfaces__srv__SaveColor_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
omo_r1_interfaces__srv__SaveColor_Event__Sequence__destroy(omo_r1_interfaces__srv__SaveColor_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    omo_r1_interfaces__srv__SaveColor_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
omo_r1_interfaces__srv__SaveColor_Event__Sequence__are_equal(const omo_r1_interfaces__srv__SaveColor_Event__Sequence * lhs, const omo_r1_interfaces__srv__SaveColor_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!omo_r1_interfaces__srv__SaveColor_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
omo_r1_interfaces__srv__SaveColor_Event__Sequence__copy(
  const omo_r1_interfaces__srv__SaveColor_Event__Sequence * input,
  omo_r1_interfaces__srv__SaveColor_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(omo_r1_interfaces__srv__SaveColor_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    omo_r1_interfaces__srv__SaveColor_Event * data =
      (omo_r1_interfaces__srv__SaveColor_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!omo_r1_interfaces__srv__SaveColor_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          omo_r1_interfaces__srv__SaveColor_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!omo_r1_interfaces__srv__SaveColor_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
