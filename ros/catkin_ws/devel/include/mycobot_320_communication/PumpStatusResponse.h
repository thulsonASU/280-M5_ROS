// Generated by gencpp from file mycobot_320_communication/PumpStatusResponse.msg
// DO NOT EDIT!


#ifndef MYCOBOT_320_COMMUNICATION_MESSAGE_PUMPSTATUSRESPONSE_H
#define MYCOBOT_320_COMMUNICATION_MESSAGE_PUMPSTATUSRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mycobot_320_communication
{
template <class ContainerAllocator>
struct PumpStatusResponse_
{
  typedef PumpStatusResponse_<ContainerAllocator> Type;

  PumpStatusResponse_()
    : Flag(false)  {
    }
  PumpStatusResponse_(const ContainerAllocator& _alloc)
    : Flag(false)  {
  (void)_alloc;
    }



   typedef uint8_t _Flag_type;
  _Flag_type Flag;





  typedef boost::shared_ptr< ::mycobot_320_communication::PumpStatusResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mycobot_320_communication::PumpStatusResponse_<ContainerAllocator> const> ConstPtr;

}; // struct PumpStatusResponse_

typedef ::mycobot_320_communication::PumpStatusResponse_<std::allocator<void> > PumpStatusResponse;

typedef boost::shared_ptr< ::mycobot_320_communication::PumpStatusResponse > PumpStatusResponsePtr;
typedef boost::shared_ptr< ::mycobot_320_communication::PumpStatusResponse const> PumpStatusResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mycobot_320_communication::PumpStatusResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mycobot_320_communication::PumpStatusResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mycobot_320_communication::PumpStatusResponse_<ContainerAllocator1> & lhs, const ::mycobot_320_communication::PumpStatusResponse_<ContainerAllocator2> & rhs)
{
  return lhs.Flag == rhs.Flag;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mycobot_320_communication::PumpStatusResponse_<ContainerAllocator1> & lhs, const ::mycobot_320_communication::PumpStatusResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mycobot_320_communication

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mycobot_320_communication::PumpStatusResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mycobot_320_communication::PumpStatusResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mycobot_320_communication::PumpStatusResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mycobot_320_communication::PumpStatusResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mycobot_320_communication::PumpStatusResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mycobot_320_communication::PumpStatusResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mycobot_320_communication::PumpStatusResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "93920b0393d28a43d7b512501bb09272";
  }

  static const char* value(const ::mycobot_320_communication::PumpStatusResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x93920b0393d28a43ULL;
  static const uint64_t static_value2 = 0xd7b512501bb09272ULL;
};

template<class ContainerAllocator>
struct DataType< ::mycobot_320_communication::PumpStatusResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mycobot_320_communication/PumpStatusResponse";
  }

  static const char* value(const ::mycobot_320_communication::PumpStatusResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mycobot_320_communication::PumpStatusResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"bool Flag\n"
;
  }

  static const char* value(const ::mycobot_320_communication::PumpStatusResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mycobot_320_communication::PumpStatusResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.Flag);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PumpStatusResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mycobot_320_communication::PumpStatusResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mycobot_320_communication::PumpStatusResponse_<ContainerAllocator>& v)
  {
    s << indent << "Flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Flag);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MYCOBOT_320_COMMUNICATION_MESSAGE_PUMPSTATUSRESPONSE_H