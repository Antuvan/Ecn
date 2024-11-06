// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from lab_amoro_interfaces:msg/JointEfforts.idl
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
#include "lab_amoro_interfaces/msg/detail/joint_efforts__struct.h"
#include "lab_amoro_interfaces/msg/detail/joint_efforts__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool lab_amoro_interfaces__msg__joint_efforts__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("lab_amoro_interfaces.msg._joint_efforts.JointEfforts", full_classname_dest, 52) == 0);
  }
  lab_amoro_interfaces__msg__JointEfforts * ros_message = _ros_message;
  {  // left_joint
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_joint");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_joint = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_joint
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_joint");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_joint = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * lab_amoro_interfaces__msg__joint_efforts__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of JointEfforts */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("lab_amoro_interfaces.msg._joint_efforts");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "JointEfforts");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  lab_amoro_interfaces__msg__JointEfforts * ros_message = (lab_amoro_interfaces__msg__JointEfforts *)raw_ros_message;
  {  // left_joint
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_joint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_joint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_joint
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_joint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_joint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
