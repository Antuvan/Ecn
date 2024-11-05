// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from lab_amoro_interfaces:msg/JointEfforts.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "lab_amoro_interfaces/msg/detail/joint_efforts__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace lab_amoro_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void JointEfforts_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) lab_amoro_interfaces::msg::JointEfforts(_init);
}

void JointEfforts_fini_function(void * message_memory)
{
  auto typed_message = static_cast<lab_amoro_interfaces::msg::JointEfforts *>(message_memory);
  typed_message->~JointEfforts();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointEfforts_message_member_array[2] = {
  {
    "left_joint",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lab_amoro_interfaces::msg::JointEfforts, left_joint),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right_joint",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lab_amoro_interfaces::msg::JointEfforts, right_joint),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointEfforts_message_members = {
  "lab_amoro_interfaces::msg",  // message namespace
  "JointEfforts",  // message name
  2,  // number of fields
  sizeof(lab_amoro_interfaces::msg::JointEfforts),
  JointEfforts_message_member_array,  // message members
  JointEfforts_init_function,  // function to initialize message memory (memory has to be allocated)
  JointEfforts_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointEfforts_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointEfforts_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace lab_amoro_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<lab_amoro_interfaces::msg::JointEfforts>()
{
  return &::lab_amoro_interfaces::msg::rosidl_typesupport_introspection_cpp::JointEfforts_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lab_amoro_interfaces, msg, JointEfforts)() {
  return &::lab_amoro_interfaces::msg::rosidl_typesupport_introspection_cpp::JointEfforts_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
