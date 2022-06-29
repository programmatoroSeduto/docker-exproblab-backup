# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from rosplan_knowledge_msgs/DomainAssignment.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import diagnostic_msgs.msg
import rosplan_knowledge_msgs.msg

class DomainAssignment(genpy.Message):
  _md5sum = "608e2cda022aeb305ce8f279edb74325"
  _type = "rosplan_knowledge_msgs/DomainAssignment"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# A message used to store the numeric effects of an action
# Can be grounded or ungrounded

uint8 ASSIGN   = 0
uint8 INCREASE  = 1
uint8 DECREASE = 2
uint8 SCALE_UP = 3
uint8 SCALE_DOWN = 4
uint8 ASSIGN_CTS = 5

uint8 assign_type

rosplan_knowledge_msgs/DomainFormula LHS
rosplan_knowledge_msgs/ExprComposite RHS

bool grounded

================================================================================
MSG: rosplan_knowledge_msgs/DomainFormula
# A message used to represent an atomic formula from the domain.
# typed_parameters matches label -> type
string name
diagnostic_msgs/KeyValue[] typed_parameters

================================================================================
MSG: diagnostic_msgs/KeyValue
string key # what to label this value when viewing
string value # a value to track over time

================================================================================
MSG: rosplan_knowledge_msgs/ExprComposite
# A message used to represent a numerical expression; composite type (2/2)
# stores an array of ExprBase as prefix notation

# components
ExprBase[] tokens

================================================================================
MSG: rosplan_knowledge_msgs/ExprBase
# A message used to represent a numerical expression; base types (1/2)

# expression types
uint8 CONSTANT = 0
uint8 FUNCTION = 1
uint8 OPERATOR = 2
uint8 SPECIAL  = 3

# operators
uint8 ADD    = 0
uint8 SUB    = 1
uint8 MUL    = 2
uint8 DIV    = 3
uint8 UMINUS = 4

# special types
uint8 HASHT      = 0
uint8 TOTAL_TIME = 1
uint8 DURATION   = 2

# expression base type
uint8 expr_type

# constant value
float64 constant

# function
rosplan_knowledge_msgs/DomainFormula function

# operator
uint8 op

# special
uint8 special_type
"""
  # Pseudo-constants
  ASSIGN = 0
  INCREASE = 1
  DECREASE = 2
  SCALE_UP = 3
  SCALE_DOWN = 4
  ASSIGN_CTS = 5

  __slots__ = ['assign_type','LHS','RHS','grounded']
  _slot_types = ['uint8','rosplan_knowledge_msgs/DomainFormula','rosplan_knowledge_msgs/ExprComposite','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       assign_type,LHS,RHS,grounded

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(DomainAssignment, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.assign_type is None:
        self.assign_type = 0
      if self.LHS is None:
        self.LHS = rosplan_knowledge_msgs.msg.DomainFormula()
      if self.RHS is None:
        self.RHS = rosplan_knowledge_msgs.msg.ExprComposite()
      if self.grounded is None:
        self.grounded = False
    else:
      self.assign_type = 0
      self.LHS = rosplan_knowledge_msgs.msg.DomainFormula()
      self.RHS = rosplan_knowledge_msgs.msg.ExprComposite()
      self.grounded = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.assign_type
      buff.write(_get_struct_B().pack(_x))
      _x = self.LHS.name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.LHS.typed_parameters)
      buff.write(_struct_I.pack(length))
      for val1 in self.LHS.typed_parameters:
        _x = val1.key
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.value
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.RHS.tokens)
      buff.write(_struct_I.pack(length))
      for val1 in self.RHS.tokens:
        _x = val1
        buff.write(_get_struct_Bd().pack(_x.expr_type, _x.constant))
        _v1 = val1.function
        _x = _v1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        length = len(_v1.typed_parameters)
        buff.write(_struct_I.pack(length))
        for val3 in _v1.typed_parameters:
          _x = val3.key
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
          _x = val3.value
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1
        buff.write(_get_struct_2B().pack(_x.op, _x.special_type))
      _x = self.grounded
      buff.write(_get_struct_B().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.LHS is None:
        self.LHS = rosplan_knowledge_msgs.msg.DomainFormula()
      if self.RHS is None:
        self.RHS = rosplan_knowledge_msgs.msg.ExprComposite()
      end = 0
      start = end
      end += 1
      (self.assign_type,) = _get_struct_B().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.LHS.name = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.LHS.name = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.LHS.typed_parameters = []
      for i in range(0, length):
        val1 = diagnostic_msgs.msg.KeyValue()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.key = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.key = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.value = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.value = str[start:end]
        self.LHS.typed_parameters.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.RHS.tokens = []
      for i in range(0, length):
        val1 = rosplan_knowledge_msgs.msg.ExprBase()
        _x = val1
        start = end
        end += 9
        (_x.expr_type, _x.constant,) = _get_struct_Bd().unpack(str[start:end])
        _v2 = val1.function
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v2.name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          _v2.name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        _v2.typed_parameters = []
        for i in range(0, length):
          val3 = diagnostic_msgs.msg.KeyValue()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val3.key = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val3.key = str[start:end]
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val3.value = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val3.value = str[start:end]
          _v2.typed_parameters.append(val3)
        _x = val1
        start = end
        end += 2
        (_x.op, _x.special_type,) = _get_struct_2B().unpack(str[start:end])
        self.RHS.tokens.append(val1)
      start = end
      end += 1
      (self.grounded,) = _get_struct_B().unpack(str[start:end])
      self.grounded = bool(self.grounded)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.assign_type
      buff.write(_get_struct_B().pack(_x))
      _x = self.LHS.name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.LHS.typed_parameters)
      buff.write(_struct_I.pack(length))
      for val1 in self.LHS.typed_parameters:
        _x = val1.key
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.value
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.RHS.tokens)
      buff.write(_struct_I.pack(length))
      for val1 in self.RHS.tokens:
        _x = val1
        buff.write(_get_struct_Bd().pack(_x.expr_type, _x.constant))
        _v3 = val1.function
        _x = _v3.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        length = len(_v3.typed_parameters)
        buff.write(_struct_I.pack(length))
        for val3 in _v3.typed_parameters:
          _x = val3.key
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
          _x = val3.value
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1
        buff.write(_get_struct_2B().pack(_x.op, _x.special_type))
      _x = self.grounded
      buff.write(_get_struct_B().pack(_x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.LHS is None:
        self.LHS = rosplan_knowledge_msgs.msg.DomainFormula()
      if self.RHS is None:
        self.RHS = rosplan_knowledge_msgs.msg.ExprComposite()
      end = 0
      start = end
      end += 1
      (self.assign_type,) = _get_struct_B().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.LHS.name = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.LHS.name = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.LHS.typed_parameters = []
      for i in range(0, length):
        val1 = diagnostic_msgs.msg.KeyValue()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.key = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.key = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.value = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.value = str[start:end]
        self.LHS.typed_parameters.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.RHS.tokens = []
      for i in range(0, length):
        val1 = rosplan_knowledge_msgs.msg.ExprBase()
        _x = val1
        start = end
        end += 9
        (_x.expr_type, _x.constant,) = _get_struct_Bd().unpack(str[start:end])
        _v4 = val1.function
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v4.name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          _v4.name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        _v4.typed_parameters = []
        for i in range(0, length):
          val3 = diagnostic_msgs.msg.KeyValue()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val3.key = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val3.key = str[start:end]
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val3.value = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val3.value = str[start:end]
          _v4.typed_parameters.append(val3)
        _x = val1
        start = end
        end += 2
        (_x.op, _x.special_type,) = _get_struct_2B().unpack(str[start:end])
        self.RHS.tokens.append(val1)
      start = end
      end += 1
      (self.grounded,) = _get_struct_B().unpack(str[start:end])
      self.grounded = bool(self.grounded)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2B = None
def _get_struct_2B():
    global _struct_2B
    if _struct_2B is None:
        _struct_2B = struct.Struct("<2B")
    return _struct_2B
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
_struct_Bd = None
def _get_struct_Bd():
    global _struct_Bd
    if _struct_Bd is None:
        _struct_Bd = struct.Struct("<Bd")
    return _struct_Bd
