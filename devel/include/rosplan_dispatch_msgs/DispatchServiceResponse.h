// Generated by gencpp from file rosplan_dispatch_msgs/DispatchServiceResponse.msg
// DO NOT EDIT!


#ifndef ROSPLAN_DISPATCH_MSGS_MESSAGE_DISPATCHSERVICERESPONSE_H
#define ROSPLAN_DISPATCH_MSGS_MESSAGE_DISPATCHSERVICERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosplan_dispatch_msgs
{
template <class ContainerAllocator>
struct DispatchServiceResponse_
{
  typedef DispatchServiceResponse_<ContainerAllocator> Type;

  DispatchServiceResponse_()
    : success(false)
    , goal_achieved(false)  {
    }
  DispatchServiceResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , goal_achieved(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef uint8_t _goal_achieved_type;
  _goal_achieved_type goal_achieved;





  typedef boost::shared_ptr< ::rosplan_dispatch_msgs::DispatchServiceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosplan_dispatch_msgs::DispatchServiceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct DispatchServiceResponse_

typedef ::rosplan_dispatch_msgs::DispatchServiceResponse_<std::allocator<void> > DispatchServiceResponse;

typedef boost::shared_ptr< ::rosplan_dispatch_msgs::DispatchServiceResponse > DispatchServiceResponsePtr;
typedef boost::shared_ptr< ::rosplan_dispatch_msgs::DispatchServiceResponse const> DispatchServiceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosplan_dispatch_msgs::DispatchServiceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosplan_dispatch_msgs::DispatchServiceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rosplan_dispatch_msgs::DispatchServiceResponse_<ContainerAllocator1> & lhs, const ::rosplan_dispatch_msgs::DispatchServiceResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success &&
    lhs.goal_achieved == rhs.goal_achieved;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rosplan_dispatch_msgs::DispatchServiceResponse_<ContainerAllocator1> & lhs, const ::rosplan_dispatch_msgs::DispatchServiceResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rosplan_dispatch_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rosplan_dispatch_msgs::DispatchServiceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_dispatch_msgs::DispatchServiceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_dispatch_msgs::DispatchServiceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_dispatch_msgs::DispatchServiceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_dispatch_msgs::DispatchServiceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_dispatch_msgs::DispatchServiceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosplan_dispatch_msgs::DispatchServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7e14a3412cb82ba736fcf0fad2853ed3";
  }

  static const char* value(const ::rosplan_dispatch_msgs::DispatchServiceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7e14a3412cb82ba7ULL;
  static const uint64_t static_value2 = 0x36fcf0fad2853ed3ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosplan_dispatch_msgs::DispatchServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosplan_dispatch_msgs/DispatchServiceResponse";
  }

  static const char* value(const ::rosplan_dispatch_msgs::DispatchServiceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosplan_dispatch_msgs::DispatchServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success # True if the dispatch was successful\n"
"bool goal_achieved # True if the goal is achieved after the dispatching\n"
"\n"
;
  }

  static const char* value(const ::rosplan_dispatch_msgs::DispatchServiceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosplan_dispatch_msgs::DispatchServiceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.goal_achieved);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DispatchServiceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosplan_dispatch_msgs::DispatchServiceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosplan_dispatch_msgs::DispatchServiceResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "goal_achieved: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.goal_achieved);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSPLAN_DISPATCH_MSGS_MESSAGE_DISPATCHSERVICERESPONSE_H
