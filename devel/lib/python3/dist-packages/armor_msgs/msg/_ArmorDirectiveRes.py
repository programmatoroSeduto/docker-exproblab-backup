# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from armor_msgs/ArmorDirectiveRes.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import armor_msgs.msg

class ArmorDirectiveRes(genpy.Message):
  _md5sum = "6846cf2c4447d7c66f608d63e1f65e77"
  _type = "armor_msgs/ArmorDirectiveRes"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """bool success
bool timeout
int32 exit_code
string error_description
bool is_consistent
string[] queried_objects
QueryItem[] sparql_queried_objects
================================================================================
MSG: armor_msgs/QueryItem
string key
string value"""
  __slots__ = ['success','timeout','exit_code','error_description','is_consistent','queried_objects','sparql_queried_objects']
  _slot_types = ['bool','bool','int32','string','bool','string[]','armor_msgs/QueryItem[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       success,timeout,exit_code,error_description,is_consistent,queried_objects,sparql_queried_objects

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ArmorDirectiveRes, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.success is None:
        self.success = False
      if self.timeout is None:
        self.timeout = False
      if self.exit_code is None:
        self.exit_code = 0
      if self.error_description is None:
        self.error_description = ''
      if self.is_consistent is None:
        self.is_consistent = False
      if self.queried_objects is None:
        self.queried_objects = []
      if self.sparql_queried_objects is None:
        self.sparql_queried_objects = []
    else:
      self.success = False
      self.timeout = False
      self.exit_code = 0
      self.error_description = ''
      self.is_consistent = False
      self.queried_objects = []
      self.sparql_queried_objects = []

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
      _x = self
      buff.write(_get_struct_2Bi().pack(_x.success, _x.timeout, _x.exit_code))
      _x = self.error_description
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.is_consistent
      buff.write(_get_struct_B().pack(_x))
      length = len(self.queried_objects)
      buff.write(_struct_I.pack(length))
      for val1 in self.queried_objects:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.Struct('<I%ss'%length).pack(length, val1))
      length = len(self.sparql_queried_objects)
      buff.write(_struct_I.pack(length))
      for val1 in self.sparql_queried_objects:
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
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.sparql_queried_objects is None:
        self.sparql_queried_objects = None
      end = 0
      _x = self
      start = end
      end += 6
      (_x.success, _x.timeout, _x.exit_code,) = _get_struct_2Bi().unpack(str[start:end])
      self.success = bool(self.success)
      self.timeout = bool(self.timeout)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.error_description = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.error_description = str[start:end]
      start = end
      end += 1
      (self.is_consistent,) = _get_struct_B().unpack(str[start:end])
      self.is_consistent = bool(self.is_consistent)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.queried_objects = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1 = str[start:end]
        self.queried_objects.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.sparql_queried_objects = []
      for i in range(0, length):
        val1 = armor_msgs.msg.QueryItem()
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
        self.sparql_queried_objects.append(val1)
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
      _x = self
      buff.write(_get_struct_2Bi().pack(_x.success, _x.timeout, _x.exit_code))
      _x = self.error_description
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.is_consistent
      buff.write(_get_struct_B().pack(_x))
      length = len(self.queried_objects)
      buff.write(_struct_I.pack(length))
      for val1 in self.queried_objects:
        length = len(val1)
        if python3 or type(val1) == unicode:
          val1 = val1.encode('utf-8')
          length = len(val1)
        buff.write(struct.Struct('<I%ss'%length).pack(length, val1))
      length = len(self.sparql_queried_objects)
      buff.write(_struct_I.pack(length))
      for val1 in self.sparql_queried_objects:
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
      if self.sparql_queried_objects is None:
        self.sparql_queried_objects = None
      end = 0
      _x = self
      start = end
      end += 6
      (_x.success, _x.timeout, _x.exit_code,) = _get_struct_2Bi().unpack(str[start:end])
      self.success = bool(self.success)
      self.timeout = bool(self.timeout)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.error_description = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.error_description = str[start:end]
      start = end
      end += 1
      (self.is_consistent,) = _get_struct_B().unpack(str[start:end])
      self.is_consistent = bool(self.is_consistent)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.queried_objects = []
      for i in range(0, length):
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1 = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1 = str[start:end]
        self.queried_objects.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.sparql_queried_objects = []
      for i in range(0, length):
        val1 = armor_msgs.msg.QueryItem()
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
        self.sparql_queried_objects.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2Bi = None
def _get_struct_2Bi():
    global _struct_2Bi
    if _struct_2Bi is None:
        _struct_2Bi = struct.Struct("<2Bi")
    return _struct_2Bi
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
