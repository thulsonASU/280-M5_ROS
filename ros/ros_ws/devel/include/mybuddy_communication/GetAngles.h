// Generated by gencpp from file mybuddy_communication/GetAngles.msg
// DO NOT EDIT!


#ifndef MYBUDDY_COMMUNICATION_MESSAGE_GETANGLES_H
#define MYBUDDY_COMMUNICATION_MESSAGE_GETANGLES_H

#include <ros/service_traits.h>


#include <mybuddy_communication/GetAnglesRequest.h>
#include <mybuddy_communication/GetAnglesResponse.h>


namespace mybuddy_communication
{

struct GetAngles
{

typedef GetAnglesRequest Request;
typedef GetAnglesResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetAngles
} // namespace mybuddy_communication


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::mybuddy_communication::GetAngles > {
  static const char* value()
  {
    return "3171ff4c46453619f029b9644dce9ae5";
  }

  static const char* value(const ::mybuddy_communication::GetAngles&) { return value(); }
};

template<>
struct DataType< ::mybuddy_communication::GetAngles > {
  static const char* value()
  {
    return "mybuddy_communication/GetAngles";
  }

  static const char* value(const ::mybuddy_communication::GetAngles&) { return value(); }
};


// service_traits::MD5Sum< ::mybuddy_communication::GetAnglesRequest> should match
// service_traits::MD5Sum< ::mybuddy_communication::GetAngles >
template<>
struct MD5Sum< ::mybuddy_communication::GetAnglesRequest>
{
  static const char* value()
  {
    return MD5Sum< ::mybuddy_communication::GetAngles >::value();
  }
  static const char* value(const ::mybuddy_communication::GetAnglesRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::mybuddy_communication::GetAnglesRequest> should match
// service_traits::DataType< ::mybuddy_communication::GetAngles >
template<>
struct DataType< ::mybuddy_communication::GetAnglesRequest>
{
  static const char* value()
  {
    return DataType< ::mybuddy_communication::GetAngles >::value();
  }
  static const char* value(const ::mybuddy_communication::GetAnglesRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::mybuddy_communication::GetAnglesResponse> should match
// service_traits::MD5Sum< ::mybuddy_communication::GetAngles >
template<>
struct MD5Sum< ::mybuddy_communication::GetAnglesResponse>
{
  static const char* value()
  {
    return MD5Sum< ::mybuddy_communication::GetAngles >::value();
  }
  static const char* value(const ::mybuddy_communication::GetAnglesResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::mybuddy_communication::GetAnglesResponse> should match
// service_traits::DataType< ::mybuddy_communication::GetAngles >
template<>
struct DataType< ::mybuddy_communication::GetAnglesResponse>
{
  static const char* value()
  {
    return DataType< ::mybuddy_communication::GetAngles >::value();
  }
  static const char* value(const ::mybuddy_communication::GetAnglesResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MYBUDDY_COMMUNICATION_MESSAGE_GETANGLES_H
