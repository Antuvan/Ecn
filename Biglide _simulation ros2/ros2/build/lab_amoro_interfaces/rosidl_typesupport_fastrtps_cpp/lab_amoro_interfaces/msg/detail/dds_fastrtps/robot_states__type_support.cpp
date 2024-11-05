// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from lab_amoro_interfaces:msg/RobotStates.idl
// generated code does not contain a copyright notice
#include "lab_amoro_interfaces/msg/detail/robot_states__rosidl_typesupport_fastrtps_cpp.hpp"
#include "lab_amoro_interfaces/msg/detail/robot_states__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace lab_amoro_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const lab_amoro_interfaces::msg::States &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  lab_amoro_interfaces::msg::States &);
size_t get_serialized_size(
  const lab_amoro_interfaces::msg::States &,
  size_t current_alignment);
size_t
max_serialized_size_States(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace lab_amoro_interfaces

// functions for lab_amoro_interfaces::msg::States already declared above

// functions for lab_amoro_interfaces::msg::States already declared above

// functions for lab_amoro_interfaces::msg::States already declared above

// functions for lab_amoro_interfaces::msg::States already declared above

// functions for lab_amoro_interfaces::msg::States already declared above


namespace lab_amoro_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab_amoro_interfaces
cdr_serialize(
  const lab_amoro_interfaces::msg::RobotStates & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: simulation_time
  cdr << ros_message.simulation_time;
  // Member: end_effector_x
  lab_amoro_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.end_effector_x,
    cdr);
  // Member: end_effector_y
  lab_amoro_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.end_effector_y,
    cdr);
  // Member: active_left_joint
  lab_amoro_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.active_left_joint,
    cdr);
  // Member: active_right_joint
  lab_amoro_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.active_right_joint,
    cdr);
  // Member: passive_left_joint
  lab_amoro_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.passive_left_joint,
    cdr);
  // Member: passive_right_joint
  lab_amoro_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.passive_right_joint,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab_amoro_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  lab_amoro_interfaces::msg::RobotStates & ros_message)
{
  // Member: simulation_time
  cdr >> ros_message.simulation_time;

  // Member: end_effector_x
  lab_amoro_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.end_effector_x);

  // Member: end_effector_y
  lab_amoro_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.end_effector_y);

  // Member: active_left_joint
  lab_amoro_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.active_left_joint);

  // Member: active_right_joint
  lab_amoro_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.active_right_joint);

  // Member: passive_left_joint
  lab_amoro_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.passive_left_joint);

  // Member: passive_right_joint
  lab_amoro_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.passive_right_joint);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab_amoro_interfaces
get_serialized_size(
  const lab_amoro_interfaces::msg::RobotStates & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: simulation_time
  {
    size_t item_size = sizeof(ros_message.simulation_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: end_effector_x

  current_alignment +=
    lab_amoro_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.end_effector_x, current_alignment);
  // Member: end_effector_y

  current_alignment +=
    lab_amoro_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.end_effector_y, current_alignment);
  // Member: active_left_joint

  current_alignment +=
    lab_amoro_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.active_left_joint, current_alignment);
  // Member: active_right_joint

  current_alignment +=
    lab_amoro_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.active_right_joint, current_alignment);
  // Member: passive_left_joint

  current_alignment +=
    lab_amoro_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.passive_left_joint, current_alignment);
  // Member: passive_right_joint

  current_alignment +=
    lab_amoro_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.passive_right_joint, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_lab_amoro_interfaces
max_serialized_size_RobotStates(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: simulation_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: end_effector_x
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        lab_amoro_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_States(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: end_effector_y
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        lab_amoro_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_States(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: active_left_joint
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        lab_amoro_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_States(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: active_right_joint
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        lab_amoro_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_States(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: passive_left_joint
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        lab_amoro_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_States(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: passive_right_joint
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        lab_amoro_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_States(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = lab_amoro_interfaces::msg::RobotStates;
    is_plain =
      (
      offsetof(DataType, passive_right_joint) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RobotStates__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const lab_amoro_interfaces::msg::RobotStates *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotStates__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<lab_amoro_interfaces::msg::RobotStates *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotStates__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const lab_amoro_interfaces::msg::RobotStates *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotStates__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RobotStates(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RobotStates__callbacks = {
  "lab_amoro_interfaces::msg",
  "RobotStates",
  _RobotStates__cdr_serialize,
  _RobotStates__cdr_deserialize,
  _RobotStates__get_serialized_size,
  _RobotStates__max_serialized_size
};

static rosidl_message_type_support_t _RobotStates__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotStates__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace lab_amoro_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_lab_amoro_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<lab_amoro_interfaces::msg::RobotStates>()
{
  return &lab_amoro_interfaces::msg::typesupport_fastrtps_cpp::_RobotStates__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lab_amoro_interfaces, msg, RobotStates)() {
  return &lab_amoro_interfaces::msg::typesupport_fastrtps_cpp::_RobotStates__handle;
}

#ifdef __cplusplus
}
#endif
