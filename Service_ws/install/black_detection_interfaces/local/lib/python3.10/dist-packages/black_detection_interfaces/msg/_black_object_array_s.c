// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from black_detection_interfaces:msg/BlackObjectArray.idl
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
#include "black_detection_interfaces/msg/detail/black_object_array__struct.h"
#include "black_detection_interfaces/msg/detail/black_object_array__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "black_detection_interfaces/msg/detail/black_object__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool black_detection_interfaces__msg__black_object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * black_detection_interfaces__msg__black_object__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool black_detection_interfaces__msg__black_object_array__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
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
    assert(strncmp("black_detection_interfaces.msg._black_object_array.BlackObjectArray", full_classname_dest, 67) == 0);
  }
  black_detection_interfaces__msg__BlackObjectArray * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // objects
    PyObject * field = PyObject_GetAttrString(_pymsg, "objects");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'objects'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!black_detection_interfaces__msg__BlackObject__Sequence__init(&(ros_message->objects), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create black_detection_interfaces__msg__BlackObject__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    black_detection_interfaces__msg__BlackObject * dest = ros_message->objects.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!black_detection_interfaces__msg__black_object__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // count
    PyObject * field = PyObject_GetAttrString(_pymsg, "count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->count = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * black_detection_interfaces__msg__black_object_array__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BlackObjectArray */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("black_detection_interfaces.msg._black_object_array");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BlackObjectArray");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  black_detection_interfaces__msg__BlackObjectArray * ros_message = (black_detection_interfaces__msg__BlackObjectArray *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // objects
    PyObject * field = NULL;
    size_t size = ros_message->objects.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    black_detection_interfaces__msg__BlackObject * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->objects.data[i]);
      PyObject * pyitem = black_detection_interfaces__msg__black_object__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "objects", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // count
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
