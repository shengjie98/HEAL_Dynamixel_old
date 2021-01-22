# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dynamixel_workbench_msgs/DynamixelLoadInfo.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class DynamixelLoadInfo(genpy.Message):
  _md5sum = "af24d77e0b8329be8d17a782ba80f5e2"
  _type = "dynamixel_workbench_msgs/DynamixelLoadInfo"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# This message includes dynamixel's load information

string device_name
uint64 baud_rate
float32 protocol_version
"""
  __slots__ = ['device_name','baud_rate','protocol_version']
  _slot_types = ['string','uint64','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       device_name,baud_rate,protocol_version

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(DynamixelLoadInfo, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.device_name is None:
        self.device_name = ''
      if self.baud_rate is None:
        self.baud_rate = 0
      if self.protocol_version is None:
        self.protocol_version = 0.
    else:
      self.device_name = ''
      self.baud_rate = 0
      self.protocol_version = 0.

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
      _x = self.device_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_Qf().pack(_x.baud_rate, _x.protocol_version))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.device_name = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.device_name = str[start:end]
      _x = self
      start = end
      end += 12
      (_x.baud_rate, _x.protocol_version,) = _get_struct_Qf().unpack(str[start:end])
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
      _x = self.device_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_Qf().pack(_x.baud_rate, _x.protocol_version))
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
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.device_name = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.device_name = str[start:end]
      _x = self
      start = end
      end += 12
      (_x.baud_rate, _x.protocol_version,) = _get_struct_Qf().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_Qf = None
def _get_struct_Qf():
    global _struct_Qf
    if _struct_Qf is None:
        _struct_Qf = struct.Struct("<Qf")
    return _struct_Qf
