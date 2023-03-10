# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from mybuddy_communication/GetAnglesRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class GetAnglesRequest(genpy.Message):
  _md5sum = "d41d8cd98f00b204e9800998ecf8427e"
  _type = "mybuddy_communication/GetAnglesRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """
"""
  __slots__ = []
  _slot_types = []

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GetAnglesRequest, self).__init__(*args, **kwds)

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
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
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
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from mybuddy_communication/GetAnglesResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class GetAnglesResponse(genpy.Message):
  _md5sum = "3171ff4c46453619f029b9644dce9ae5"
  _type = "mybuddy_communication/GetAnglesResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# float32 joint_1
# float32 joint_2
# float32 joint_3
# float32 joint_4
# float32 joint_5
# float32 joint_6

float32 joint_0
float32 joint_1
float32 joint_2
float32 joint_3
float32 joint_4
float32 joint_5
float32 joint_6
float32 joint_7
float32 joint_8
float32 joint_9
float32 joint_10
float32 joint_11
float32 joint_12


"""
  __slots__ = ['joint_0','joint_1','joint_2','joint_3','joint_4','joint_5','joint_6','joint_7','joint_8','joint_9','joint_10','joint_11','joint_12']
  _slot_types = ['float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       joint_0,joint_1,joint_2,joint_3,joint_4,joint_5,joint_6,joint_7,joint_8,joint_9,joint_10,joint_11,joint_12

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GetAnglesResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.joint_0 is None:
        self.joint_0 = 0.
      if self.joint_1 is None:
        self.joint_1 = 0.
      if self.joint_2 is None:
        self.joint_2 = 0.
      if self.joint_3 is None:
        self.joint_3 = 0.
      if self.joint_4 is None:
        self.joint_4 = 0.
      if self.joint_5 is None:
        self.joint_5 = 0.
      if self.joint_6 is None:
        self.joint_6 = 0.
      if self.joint_7 is None:
        self.joint_7 = 0.
      if self.joint_8 is None:
        self.joint_8 = 0.
      if self.joint_9 is None:
        self.joint_9 = 0.
      if self.joint_10 is None:
        self.joint_10 = 0.
      if self.joint_11 is None:
        self.joint_11 = 0.
      if self.joint_12 is None:
        self.joint_12 = 0.
    else:
      self.joint_0 = 0.
      self.joint_1 = 0.
      self.joint_2 = 0.
      self.joint_3 = 0.
      self.joint_4 = 0.
      self.joint_5 = 0.
      self.joint_6 = 0.
      self.joint_7 = 0.
      self.joint_8 = 0.
      self.joint_9 = 0.
      self.joint_10 = 0.
      self.joint_11 = 0.
      self.joint_12 = 0.

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
      buff.write(_get_struct_13f().pack(_x.joint_0, _x.joint_1, _x.joint_2, _x.joint_3, _x.joint_4, _x.joint_5, _x.joint_6, _x.joint_7, _x.joint_8, _x.joint_9, _x.joint_10, _x.joint_11, _x.joint_12))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 52
      (_x.joint_0, _x.joint_1, _x.joint_2, _x.joint_3, _x.joint_4, _x.joint_5, _x.joint_6, _x.joint_7, _x.joint_8, _x.joint_9, _x.joint_10, _x.joint_11, _x.joint_12,) = _get_struct_13f().unpack(str[start:end])
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
      buff.write(_get_struct_13f().pack(_x.joint_0, _x.joint_1, _x.joint_2, _x.joint_3, _x.joint_4, _x.joint_5, _x.joint_6, _x.joint_7, _x.joint_8, _x.joint_9, _x.joint_10, _x.joint_11, _x.joint_12))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 52
      (_x.joint_0, _x.joint_1, _x.joint_2, _x.joint_3, _x.joint_4, _x.joint_5, _x.joint_6, _x.joint_7, _x.joint_8, _x.joint_9, _x.joint_10, _x.joint_11, _x.joint_12,) = _get_struct_13f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_13f = None
def _get_struct_13f():
    global _struct_13f
    if _struct_13f is None:
        _struct_13f = struct.Struct("<13f")
    return _struct_13f
class GetAngles(object):
  _type          = 'mybuddy_communication/GetAngles'
  _md5sum = '3171ff4c46453619f029b9644dce9ae5'
  _request_class  = GetAnglesRequest
  _response_class = GetAnglesResponse
