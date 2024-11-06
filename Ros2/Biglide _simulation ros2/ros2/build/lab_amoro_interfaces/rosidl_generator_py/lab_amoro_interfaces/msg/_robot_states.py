# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lab_amoro_interfaces:msg/RobotStates.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotStates(type):
    """Metaclass of message 'RobotStates'."""

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
            module = import_type_support('lab_amoro_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lab_amoro_interfaces.msg.RobotStates')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_states
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_states
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_states
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_states
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_states

            from lab_amoro_interfaces.msg import States
            if States.__class__._TYPE_SUPPORT is None:
                States.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotStates(metaclass=Metaclass_RobotStates):
    """Message class 'RobotStates'."""

    __slots__ = [
        '_simulation_time',
        '_end_effector_x',
        '_end_effector_y',
        '_active_left_joint',
        '_active_right_joint',
        '_passive_left_joint',
        '_passive_right_joint',
    ]

    _fields_and_field_types = {
        'simulation_time': 'float',
        'end_effector_x': 'lab_amoro_interfaces/States',
        'end_effector_y': 'lab_amoro_interfaces/States',
        'active_left_joint': 'lab_amoro_interfaces/States',
        'active_right_joint': 'lab_amoro_interfaces/States',
        'passive_left_joint': 'lab_amoro_interfaces/States',
        'passive_right_joint': 'lab_amoro_interfaces/States',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['lab_amoro_interfaces', 'msg'], 'States'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['lab_amoro_interfaces', 'msg'], 'States'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['lab_amoro_interfaces', 'msg'], 'States'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['lab_amoro_interfaces', 'msg'], 'States'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['lab_amoro_interfaces', 'msg'], 'States'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['lab_amoro_interfaces', 'msg'], 'States'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.simulation_time = kwargs.get('simulation_time', float())
        from lab_amoro_interfaces.msg import States
        self.end_effector_x = kwargs.get('end_effector_x', States())
        from lab_amoro_interfaces.msg import States
        self.end_effector_y = kwargs.get('end_effector_y', States())
        from lab_amoro_interfaces.msg import States
        self.active_left_joint = kwargs.get('active_left_joint', States())
        from lab_amoro_interfaces.msg import States
        self.active_right_joint = kwargs.get('active_right_joint', States())
        from lab_amoro_interfaces.msg import States
        self.passive_left_joint = kwargs.get('passive_left_joint', States())
        from lab_amoro_interfaces.msg import States
        self.passive_right_joint = kwargs.get('passive_right_joint', States())

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
        if self.simulation_time != other.simulation_time:
            return False
        if self.end_effector_x != other.end_effector_x:
            return False
        if self.end_effector_y != other.end_effector_y:
            return False
        if self.active_left_joint != other.active_left_joint:
            return False
        if self.active_right_joint != other.active_right_joint:
            return False
        if self.passive_left_joint != other.passive_left_joint:
            return False
        if self.passive_right_joint != other.passive_right_joint:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def simulation_time(self):
        """Message field 'simulation_time'."""
        return self._simulation_time

    @simulation_time.setter
    def simulation_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'simulation_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'simulation_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._simulation_time = value

    @builtins.property
    def end_effector_x(self):
        """Message field 'end_effector_x'."""
        return self._end_effector_x

    @end_effector_x.setter
    def end_effector_x(self, value):
        if __debug__:
            from lab_amoro_interfaces.msg import States
            assert \
                isinstance(value, States), \
                "The 'end_effector_x' field must be a sub message of type 'States'"
        self._end_effector_x = value

    @builtins.property
    def end_effector_y(self):
        """Message field 'end_effector_y'."""
        return self._end_effector_y

    @end_effector_y.setter
    def end_effector_y(self, value):
        if __debug__:
            from lab_amoro_interfaces.msg import States
            assert \
                isinstance(value, States), \
                "The 'end_effector_y' field must be a sub message of type 'States'"
        self._end_effector_y = value

    @builtins.property
    def active_left_joint(self):
        """Message field 'active_left_joint'."""
        return self._active_left_joint

    @active_left_joint.setter
    def active_left_joint(self, value):
        if __debug__:
            from lab_amoro_interfaces.msg import States
            assert \
                isinstance(value, States), \
                "The 'active_left_joint' field must be a sub message of type 'States'"
        self._active_left_joint = value

    @builtins.property
    def active_right_joint(self):
        """Message field 'active_right_joint'."""
        return self._active_right_joint

    @active_right_joint.setter
    def active_right_joint(self, value):
        if __debug__:
            from lab_amoro_interfaces.msg import States
            assert \
                isinstance(value, States), \
                "The 'active_right_joint' field must be a sub message of type 'States'"
        self._active_right_joint = value

    @builtins.property
    def passive_left_joint(self):
        """Message field 'passive_left_joint'."""
        return self._passive_left_joint

    @passive_left_joint.setter
    def passive_left_joint(self, value):
        if __debug__:
            from lab_amoro_interfaces.msg import States
            assert \
                isinstance(value, States), \
                "The 'passive_left_joint' field must be a sub message of type 'States'"
        self._passive_left_joint = value

    @builtins.property
    def passive_right_joint(self):
        """Message field 'passive_right_joint'."""
        return self._passive_right_joint

    @passive_right_joint.setter
    def passive_right_joint(self, value):
        if __debug__:
            from lab_amoro_interfaces.msg import States
            assert \
                isinstance(value, States), \
                "The 'passive_right_joint' field must be a sub message of type 'States'"
        self._passive_right_joint = value
