// Generated by gencpp from file ultraarm_communication/SetCoordsRequest.msg
// DO NOT EDIT!


#ifndef ULTRAARM_COMMUNICATION_MESSAGE_SETCOORDSREQUEST_H
#define ULTRAARM_COMMUNICATION_MESSAGE_SETCOORDSREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ultraarm_communication
{
template <class ContainerAllocator>
struct SetCoordsRequest_
{
  typedef SetCoordsRequest_<ContainerAllocator> Type;

  SetCoordsRequest_()
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , speed(0)  {
    }
  SetCoordsRequest_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , speed(0)  {
  (void)_alloc;
    }



   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _z_type;
  _z_type z;

   typedef int8_t _speed_type;
  _speed_type speed;





  typedef boost::shared_ptr< ::ultraarm_communication::SetCoordsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ultraarm_communication::SetCoordsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetCoordsRequest_

typedef ::ultraarm_communication::SetCoordsRequest_<std::allocator<void> > SetCoordsRequest;

typedef boost::shared_ptr< ::ultraarm_communication::SetCoordsRequest > SetCoordsRequestPtr;
typedef boost::shared_ptr< ::ultraarm_communication::SetCoordsRequest const> SetCoordsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ultraarm_communication::SetCoordsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ultraarm_communication::SetCoordsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ultraarm_communication::SetCoordsRequest_<ContainerAllocator1> & lhs, const ::ultraarm_communication::SetCoordsRequest_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z &&
    lhs.speed == rhs.speed;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ultraarm_communication::SetCoordsRequest_<ContainerAllocator1> & lhs, const ::ultraarm_communication::SetCoordsRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ultraarm_communication

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ultraarm_communication::SetCoordsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ultraarm_communication::SetCoordsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ultraarm_communication::SetCoordsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ultraarm_communication::SetCoordsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ultraarm_communication::SetCoordsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ultraarm_communication::SetCoordsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ultraarm_communication::SetCoordsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8ea3ad4a8a93b7084b136640e2eeae90";
  }

  static const char* value(const ::ultraarm_communication::SetCoordsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8ea3ad4a8a93b708ULL;
  static const uint64_t static_value2 = 0x4b136640e2eeae90ULL;
};

template<class ContainerAllocator>
struct DataType< ::ultraarm_communication::SetCoordsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ultraarm_communication/SetCoordsRequest";
  }

  static const char* value(const ::ultraarm_communication::SetCoordsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ultraarm_communication::SetCoordsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 x\n"
"float32 y\n"
"float32 z\n"
"\n"
"int8 speed\n"
"\n"
;
  }

  static const char* value(const ::ultraarm_communication::SetCoordsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ultraarm_communication::SetCoordsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.speed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetCoordsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ultraarm_communication::SetCoordsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ultraarm_communication::SetCoordsRequest_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
    s << indent << "speed: ";
    Printer<int8_t>::stream(s, indent + "  ", v.speed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ULTRAARM_COMMUNICATION_MESSAGE_SETCOORDSREQUEST_H
