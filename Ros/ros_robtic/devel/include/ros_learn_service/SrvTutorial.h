// Generated by gencpp from file ros_learn_service/SrvTutorial.msg
// DO NOT EDIT!


#ifndef ROS_LEARN_SERVICE_MESSAGE_SRVTUTORIAL_H
#define ROS_LEARN_SERVICE_MESSAGE_SRVTUTORIAL_H

#include <ros/service_traits.h>


#include <ros_learn_service/SrvTutorialRequest.h>
#include <ros_learn_service/SrvTutorialResponse.h>


namespace ros_learn_service
{

struct SrvTutorial
{

typedef SrvTutorialRequest Request;
typedef SrvTutorialResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SrvTutorial
} // namespace ros_learn_service


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ros_learn_service::SrvTutorial > {
  static const char* value()
  {
    return "d431cae597499d244ef1c576e21358c8";
  }

  static const char* value(const ::ros_learn_service::SrvTutorial&) { return value(); }
};

template<>
struct DataType< ::ros_learn_service::SrvTutorial > {
  static const char* value()
  {
    return "ros_learn_service/SrvTutorial";
  }

  static const char* value(const ::ros_learn_service::SrvTutorial&) { return value(); }
};


// service_traits::MD5Sum< ::ros_learn_service::SrvTutorialRequest> should match
// service_traits::MD5Sum< ::ros_learn_service::SrvTutorial >
template<>
struct MD5Sum< ::ros_learn_service::SrvTutorialRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ros_learn_service::SrvTutorial >::value();
  }
  static const char* value(const ::ros_learn_service::SrvTutorialRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_learn_service::SrvTutorialRequest> should match
// service_traits::DataType< ::ros_learn_service::SrvTutorial >
template<>
struct DataType< ::ros_learn_service::SrvTutorialRequest>
{
  static const char* value()
  {
    return DataType< ::ros_learn_service::SrvTutorial >::value();
  }
  static const char* value(const ::ros_learn_service::SrvTutorialRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ros_learn_service::SrvTutorialResponse> should match
// service_traits::MD5Sum< ::ros_learn_service::SrvTutorial >
template<>
struct MD5Sum< ::ros_learn_service::SrvTutorialResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ros_learn_service::SrvTutorial >::value();
  }
  static const char* value(const ::ros_learn_service::SrvTutorialResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_learn_service::SrvTutorialResponse> should match
// service_traits::DataType< ::ros_learn_service::SrvTutorial >
template<>
struct DataType< ::ros_learn_service::SrvTutorialResponse>
{
  static const char* value()
  {
    return DataType< ::ros_learn_service::SrvTutorial >::value();
  }
  static const char* value(const ::ros_learn_service::SrvTutorialResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROS_LEARN_SERVICE_MESSAGE_SRVTUTORIAL_H
