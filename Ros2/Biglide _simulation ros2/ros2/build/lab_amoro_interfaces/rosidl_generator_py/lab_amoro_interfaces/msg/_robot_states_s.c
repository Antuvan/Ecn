// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from lab_amoro_interfaces:msg/RobotStates.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "lab_amoro_interfaces/msg/detail/robot_states__struct.h"
#include "lab_amoro_interfaces/msg/detail/robot_states__functions.h"

bool lab_amoro_interfaces__msg__states__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * lab_amoro_interfaces__msg__states__convert_to_py(void * raw_ros_message);
bool lab_amoro_interfaces__msg__states__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * lab_amoro_interfaces__msg__states__convert_to_py(void * raw_ros_message);
bool lab_amoro_interfaces__msg__states__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * lab_amoro_interfaces__msg__states__convert_to_py(void * raw_ros_message);
bool lab_amoro_interfaces__msg__states__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * lab_amoro_interfaces__msg__states__convert_to_py(void * raw_ros_message);
bool lab_amoro_interfaces__msg__states__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * lab_amoro_interfaces__msg__states__convert_to_py(void * raw_ros_message);
bool lab_amoro_interfaces__msg__states__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * lab_amoro_interfaces__msg__states__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool lab_amoro_interfaces__msg__robot_states__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("lab_amoro_interfaces.msg._robot_states.RobotStates", full_classname_dest, 50) == 0);
  }
  lab_amoro_interfaces__msg__RobotStates * ros_message = _ros_message;
  {  // simulation_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "simulation_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->simulation_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // end_effector_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_effector_x");
    if (!field) {
      return false;
    }
    if (!lab_amoro_interfaces__msg__states__convert_from_py(field, &ros_message->end_effector_x)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // end_effector_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_effector_y");
    if (!field) {
      return false;
    }
    if (!lab_amoro_interfaces__msg__states__convert_from_py(field, &ros_message->end_effector_y)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // active_left_joint
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_left_joint");
    if (!field) {
      return false;
    }
    if (!lab_amoro_interfaces__msg__states__convert_from_py(field, &ros_message->active_left_joint)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // active_right_joint
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_right_joint");
    if (!field) {
      return false;
    }
    if (!lab_amoro_interfaces__msg__states__convert_from_py(field, &ros_message->active_right_joint)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // passive_left_joint
    PyObject * field = PyObject_GetAttrString(_pymsg, "passive_left_joint");
    if (!field) {
      return false;
    }
    if (!lab_amoro_interfaces__msg__states__convert_from_py(field, &ros_message->passive_left_joint)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // passive_right_joint
    PyObject * field = PyObject_GetAttrString(_pymsg, "passive_right_joint");
    if (!field) {
      return false;
    }
    if (!lab_amoro_interfaces__msg__states__convert_from_py(field, &ros_message->passive_right_joint)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * lab_amoro_interfaces__msg__robot_states__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotStates */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("lab_amoro_interfaces.msg._robot_states");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotStates");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  lab_amoro_interfaces__msg__RobotStates * ros_message = (lab_amoro_interfaces__msg__RobotStates *)raw_ros_message;
  {  // simulation_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->simulation_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "simulation_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_effector_x
    PyObject * field = NULL;
    field = lab_amoro_interfaces__msg__states__convert_to_py(&ros_message->end_effector_x);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_effector_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_effector_y
    PyObject * field = NULL;
    field = lab_amoro_interfaces__msg__states__convert_to_py(&ros_message->end_effector_y);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_effector_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_left_joint
    PyObject * field = NULL;
    field = lab_amoro_interfaces__msg__states__convert_to_py(&ros_message->active_left_joint);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_left_joint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_right_joint
    PyObject * field = NULL;
    field = lab_amoro_interfaces__msg__states__convert_to_py(&ros_message->active_right_joint);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_right_joint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // passive_left_joint
    PyObject * field = NULL;
    field = lab_amoro_interfaces__msg__states__convert_to_py(&ros_message->passive_left_joint);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "passive_left_joint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // passive_right_joint
    PyObject * field = NULL;
    field = lab_amoro_interfaces__msg__states__convert_to_py(&ros_message->passive_right_joint);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "passive_right_joint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
