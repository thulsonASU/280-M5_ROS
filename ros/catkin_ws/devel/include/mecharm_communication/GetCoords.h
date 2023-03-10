// Generated by gencpp from file mecharm_communication/GetCoords.msg
// DO NOT EDIT!


#ifndef MECHARM_COMMUNICATION_MESSAGE_GETCOORDS_H
#define MECHARM_COMMUNICATION_MESSAGE_GETCOORDS_H

#include <ros/service_traits.h>


#include <mecharm_communication/GetCoordsRequest.h>
#include <mecharm_communication/GetCoordsResponse.h>


namespace mecharm_communication
{

struct GetCoords
{

typedef GetCoordsRequest Request;
typedef GetCoordsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetCoords
} // namespace mecharm_communication


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::mecharm_communication::GetCoords > {
  static const char* value()
  {
    return "740a0696f94797c91679d50dca7e75ad";
  }

  static const char* value(const ::mecharm_communication::GetCoords&) { return value(); }
};

template<>
struct DataType< ::mecharm_communication::GetCoords > {
  static const char* value()
  {
    return "mecharm_communication/GetCoords";
  }

  static const char* value(const ::mecharm_communication::GetCoords&) { return value(); }
};


// service_traits::MD5Sum< ::mecharm_communication::GetCoordsRequest> should match
// service_traits::MD5Sum< ::mecharm_communication::GetCoords >
template<>
struct MD5Sum< ::mecharm_communication::GetCoordsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::mecharm_communication::GetCoords >::value();
  }
  static const char* value(const ::mecharm_communication::GetCoordsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::mecharm_communication::GetCoordsRequest> should match
// service_traits::DataType< ::mecharm_communication::GetCoords >
template<>
struct DataType< ::mecharm_communication::GetCoordsRequest>
{
  static const char* value()
  {
    return DataType< ::mecharm_communication::GetCoords >::value();
  }
  static const char* value(const ::mecharm_communication::GetCoordsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::mecharm_communication::GetCoordsResponse> should match
// service_traits::MD5Sum< ::mecharm_communication::GetCoords >
template<>
struct MD5Sum< ::mecharm_communication::GetCoordsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::mecharm_communication::GetCoords >::value();
  }
  static const char* value(const ::mecharm_communication::GetCoordsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::mecharm_communication::GetCoordsResponse> should match
// service_traits::DataType< ::mecharm_communication::GetCoords >
template<>
struct DataType< ::mecharm_communication::GetCoordsResponse>
{
  static const char* value()
  {
    return DataType< ::mecharm_communication::GetCoords >::value();
  }
  static const char* value(const ::mecharm_communication::GetCoordsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MECHARM_COMMUNICATION_MESSAGE_GETCOORDS_H
