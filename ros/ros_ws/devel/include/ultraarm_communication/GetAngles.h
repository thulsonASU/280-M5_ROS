// Generated by gencpp from file ultraarm_communication/GetAngles.msg
// DO NOT EDIT!


#ifndef ULTRAARM_COMMUNICATION_MESSAGE_GETANGLES_H
#define ULTRAARM_COMMUNICATION_MESSAGE_GETANGLES_H

#include <ros/service_traits.h>


#include <ultraarm_communication/GetAnglesRequest.h>
#include <ultraarm_communication/GetAnglesResponse.h>


namespace ultraarm_communication
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
} // namespace ultraarm_communication


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ultraarm_communication::GetAngles > {
  static const char* value()
  {
    return "8fb7487773865b96db936ca595817338";
  }

  static const char* value(const ::ultraarm_communication::GetAngles&) { return value(); }
};

template<>
struct DataType< ::ultraarm_communication::GetAngles > {
  static const char* value()
  {
    return "ultraarm_communication/GetAngles";
  }

  static const char* value(const ::ultraarm_communication::GetAngles&) { return value(); }
};


// service_traits::MD5Sum< ::ultraarm_communication::GetAnglesRequest> should match
// service_traits::MD5Sum< ::ultraarm_communication::GetAngles >
template<>
struct MD5Sum< ::ultraarm_communication::GetAnglesRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ultraarm_communication::GetAngles >::value();
  }
  static const char* value(const ::ultraarm_communication::GetAnglesRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ultraarm_communication::GetAnglesRequest> should match
// service_traits::DataType< ::ultraarm_communication::GetAngles >
template<>
struct DataType< ::ultraarm_communication::GetAnglesRequest>
{
  static const char* value()
  {
    return DataType< ::ultraarm_communication::GetAngles >::value();
  }
  static const char* value(const ::ultraarm_communication::GetAnglesRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ultraarm_communication::GetAnglesResponse> should match
// service_traits::MD5Sum< ::ultraarm_communication::GetAngles >
template<>
struct MD5Sum< ::ultraarm_communication::GetAnglesResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ultraarm_communication::GetAngles >::value();
  }
  static const char* value(const ::ultraarm_communication::GetAnglesResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ultraarm_communication::GetAnglesResponse> should match
// service_traits::DataType< ::ultraarm_communication::GetAngles >
template<>
struct DataType< ::ultraarm_communication::GetAnglesResponse>
{
  static const char* value()
  {
    return DataType< ::ultraarm_communication::GetAngles >::value();
  }
  static const char* value(const ::ultraarm_communication::GetAnglesResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ULTRAARM_COMMUNICATION_MESSAGE_GETANGLES_H
