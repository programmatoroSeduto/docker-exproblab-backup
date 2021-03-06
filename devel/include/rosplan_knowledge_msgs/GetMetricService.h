// Generated by gencpp from file rosplan_knowledge_msgs/GetMetricService.msg
// DO NOT EDIT!


#ifndef ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_GETMETRICSERVICE_H
#define ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_GETMETRICSERVICE_H

#include <ros/service_traits.h>


#include <rosplan_knowledge_msgs/GetMetricServiceRequest.h>
#include <rosplan_knowledge_msgs/GetMetricServiceResponse.h>


namespace rosplan_knowledge_msgs
{

struct GetMetricService
{

typedef GetMetricServiceRequest Request;
typedef GetMetricServiceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetMetricService
} // namespace rosplan_knowledge_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rosplan_knowledge_msgs::GetMetricService > {
  static const char* value()
  {
    return "d8654505c165321f0d5dd974ec4ca392";
  }

  static const char* value(const ::rosplan_knowledge_msgs::GetMetricService&) { return value(); }
};

template<>
struct DataType< ::rosplan_knowledge_msgs::GetMetricService > {
  static const char* value()
  {
    return "rosplan_knowledge_msgs/GetMetricService";
  }

  static const char* value(const ::rosplan_knowledge_msgs::GetMetricService&) { return value(); }
};


// service_traits::MD5Sum< ::rosplan_knowledge_msgs::GetMetricServiceRequest> should match
// service_traits::MD5Sum< ::rosplan_knowledge_msgs::GetMetricService >
template<>
struct MD5Sum< ::rosplan_knowledge_msgs::GetMetricServiceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rosplan_knowledge_msgs::GetMetricService >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::GetMetricServiceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosplan_knowledge_msgs::GetMetricServiceRequest> should match
// service_traits::DataType< ::rosplan_knowledge_msgs::GetMetricService >
template<>
struct DataType< ::rosplan_knowledge_msgs::GetMetricServiceRequest>
{
  static const char* value()
  {
    return DataType< ::rosplan_knowledge_msgs::GetMetricService >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::GetMetricServiceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rosplan_knowledge_msgs::GetMetricServiceResponse> should match
// service_traits::MD5Sum< ::rosplan_knowledge_msgs::GetMetricService >
template<>
struct MD5Sum< ::rosplan_knowledge_msgs::GetMetricServiceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rosplan_knowledge_msgs::GetMetricService >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::GetMetricServiceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosplan_knowledge_msgs::GetMetricServiceResponse> should match
// service_traits::DataType< ::rosplan_knowledge_msgs::GetMetricService >
template<>
struct DataType< ::rosplan_knowledge_msgs::GetMetricServiceResponse>
{
  static const char* value()
  {
    return DataType< ::rosplan_knowledge_msgs::GetMetricService >::value();
  }
  static const char* value(const ::rosplan_knowledge_msgs::GetMetricServiceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_GETMETRICSERVICE_H
