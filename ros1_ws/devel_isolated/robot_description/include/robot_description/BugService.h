// Generated by gencpp from file robot_description/BugService.msg
// DO NOT EDIT!


#ifndef ROBOT_DESCRIPTION_MESSAGE_BUGSERVICE_H
#define ROBOT_DESCRIPTION_MESSAGE_BUGSERVICE_H

#include <ros/service_traits.h>


#include <robot_description/BugServiceRequest.h>
#include <robot_description/BugServiceResponse.h>


namespace robot_description
{

struct BugService
{

typedef BugServiceRequest Request;
typedef BugServiceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct BugService
} // namespace robot_description


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::robot_description::BugService > {
  static const char* value()
  {
    return "2e7093e959d0985796ebd7942ac40474";
  }

  static const char* value(const ::robot_description::BugService&) { return value(); }
};

template<>
struct DataType< ::robot_description::BugService > {
  static const char* value()
  {
    return "robot_description/BugService";
  }

  static const char* value(const ::robot_description::BugService&) { return value(); }
};


// service_traits::MD5Sum< ::robot_description::BugServiceRequest> should match
// service_traits::MD5Sum< ::robot_description::BugService >
template<>
struct MD5Sum< ::robot_description::BugServiceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::robot_description::BugService >::value();
  }
  static const char* value(const ::robot_description::BugServiceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::robot_description::BugServiceRequest> should match
// service_traits::DataType< ::robot_description::BugService >
template<>
struct DataType< ::robot_description::BugServiceRequest>
{
  static const char* value()
  {
    return DataType< ::robot_description::BugService >::value();
  }
  static const char* value(const ::robot_description::BugServiceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::robot_description::BugServiceResponse> should match
// service_traits::MD5Sum< ::robot_description::BugService >
template<>
struct MD5Sum< ::robot_description::BugServiceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::robot_description::BugService >::value();
  }
  static const char* value(const ::robot_description::BugServiceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::robot_description::BugServiceResponse> should match
// service_traits::DataType< ::robot_description::BugService >
template<>
struct DataType< ::robot_description::BugServiceResponse>
{
  static const char* value()
  {
    return DataType< ::robot_description::BugService >::value();
  }
  static const char* value(const ::robot_description::BugServiceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOT_DESCRIPTION_MESSAGE_BUGSERVICE_H
