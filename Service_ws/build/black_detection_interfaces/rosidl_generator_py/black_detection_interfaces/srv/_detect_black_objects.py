# generated from rosidl_generator_py/resource/_idl.py.em
# with input from black_detection_interfaces:srv/DetectBlackObjects.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectBlackObjects_Request(type):
    """Metaclass of message 'DetectBlackObjects_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('black_detection_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'black_detection_interfaces.srv.DetectBlackObjects_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__detect_black_objects__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__detect_black_objects__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__detect_black_objects__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__detect_black_objects__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__detect_black_objects__request

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DetectBlackObjects_Request(metaclass=Metaclass_DetectBlackObjects_Request):
    """Message class 'DetectBlackObjects_Request'."""

    __slots__ = [
        '_image',
        '_black_threshold',
        '_min_area',
        '_max_area',
    ]

    _fields_and_field_types = {
        'image': 'sensor_msgs/Image',
        'black_threshold': 'float',
        'min_area': 'float',
        'max_area': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import Image
        self.image = kwargs.get('image', Image())
        self.black_threshold = kwargs.get('black_threshold', float())
        self.min_area = kwargs.get('min_area', float())
        self.max_area = kwargs.get('max_area', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.image != other.image:
            return False
        if self.black_threshold != other.black_threshold:
            return False
        if self.min_area != other.min_area:
            return False
        if self.max_area != other.max_area:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def image(self):
        """Message field 'image'."""
        return self._image

    @image.setter
    def image(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'image' field must be a sub message of type 'Image'"
        self._image = value

    @builtins.property
    def black_threshold(self):
        """Message field 'black_threshold'."""
        return self._black_threshold

    @black_threshold.setter
    def black_threshold(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'black_threshold' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'black_threshold' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._black_threshold = value

    @builtins.property
    def min_area(self):
        """Message field 'min_area'."""
        return self._min_area

    @min_area.setter
    def min_area(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_area' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'min_area' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._min_area = value

    @builtins.property
    def max_area(self):
        """Message field 'max_area'."""
        return self._max_area

    @max_area.setter
    def max_area(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_area' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_area' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_area = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DetectBlackObjects_Response(type):
    """Metaclass of message 'DetectBlackObjects_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('black_detection_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'black_detection_interfaces.srv.DetectBlackObjects_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__detect_black_objects__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__detect_black_objects__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__detect_black_objects__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__detect_black_objects__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__detect_black_objects__response

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Point32
            if Point32.__class__._TYPE_SUPPORT is None:
                Point32.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DetectBlackObjects_Response(metaclass=Metaclass_DetectBlackObjects_Response):
    """Message class 'DetectBlackObjects_Response'."""

    __slots__ = [
        '_header',
        '_centroids',
        '_sizes',
        '_count',
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'centroids': 'sequence<geometry_msgs/Point>',
        'sizes': 'sequence<geometry_msgs/Point32>',
        'count': 'int32',
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point32')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.centroids = kwargs.get('centroids', [])
        self.sizes = kwargs.get('sizes', [])
        self.count = kwargs.get('count', int())
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.centroids != other.centroids:
            return False
        if self.sizes != other.sizes:
            return False
        if self.count != other.count:
            return False
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def centroids(self):
        """Message field 'centroids'."""
        return self._centroids

    @centroids.setter
    def centroids(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'centroids' field must be a set or sequence and each value of type 'Point'"
        self._centroids = value

    @builtins.property
    def sizes(self):
        """Message field 'sizes'."""
        return self._sizes

    @sizes.setter
    def sizes(self, value):
        if __debug__:
            from geometry_msgs.msg import Point32
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Point32) for v in value) and
                 True), \
                "The 'sizes' field must be a set or sequence and each value of type 'Point32'"
        self._sizes = value

    @builtins.property
    def count(self):
        """Message field 'count'."""
        return self._count

    @count.setter
    def count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'count' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'count' field must be an integer in [-2147483648, 2147483647]"
        self._count = value

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_DetectBlackObjects(type):
    """Metaclass of service 'DetectBlackObjects'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('black_detection_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'black_detection_interfaces.srv.DetectBlackObjects')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__detect_black_objects

            from black_detection_interfaces.srv import _detect_black_objects
            if _detect_black_objects.Metaclass_DetectBlackObjects_Request._TYPE_SUPPORT is None:
                _detect_black_objects.Metaclass_DetectBlackObjects_Request.__import_type_support__()
            if _detect_black_objects.Metaclass_DetectBlackObjects_Response._TYPE_SUPPORT is None:
                _detect_black_objects.Metaclass_DetectBlackObjects_Response.__import_type_support__()


class DetectBlackObjects(metaclass=Metaclass_DetectBlackObjects):
    from black_detection_interfaces.srv._detect_black_objects import DetectBlackObjects_Request as Request
    from black_detection_interfaces.srv._detect_black_objects import DetectBlackObjects_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
