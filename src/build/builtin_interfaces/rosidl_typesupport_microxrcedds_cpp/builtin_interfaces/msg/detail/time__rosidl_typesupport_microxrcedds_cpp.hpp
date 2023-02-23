// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__rosidl_typesupport_microxrcedds_cpp.hpp.em
// with input from builtin_interfaces:msg/Time.idl
// generated code does not contain a copyright notice

#ifndef BUILTIN_INTERFACES__MSG__TIME__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
#define BUILTIN_INTERFACES__MSG__TIME__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "builtin_interfaces/msg/rosidl_typesupport_microxrcedds_cpp__visibility_control.h"
#include "builtin_interfaces/msg/detail/time__struct.hpp"

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

#include "ucdr/microcdr.h"

namespace builtin_interfaces
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_builtin_interfaces
cdr_serialize(
  const builtin_interfaces::msg::Time & ros_message,
  ucdrBuffer * cdr);

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_builtin_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  builtin_interfaces::msg::Time & ros_message);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_builtin_interfaces
get_serialized_size(
  const builtin_interfaces::msg::Time & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_builtin_interfaces
max_serialized_size_Time(
  bool * full_bounded,
  size_t current_alignment);

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace builtin_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_builtin_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, builtin_interfaces, msg, Time)();

#ifdef __cplusplus
}
#endif

#endif  // BUILTIN_INTERFACES__MSG__TIME__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
