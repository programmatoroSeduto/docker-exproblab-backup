// Generated by gencpp from file rosplan_dispatch_msgs/NonBlockingDispatchFeedback.msg
// DO NOT EDIT!


#ifndef ROSPLAN_DISPATCH_MSGS_MESSAGE_NONBLOCKINGDISPATCHFEEDBACK_H
#define ROSPLAN_DISPATCH_MSGS_MESSAGE_NONBLOCKINGDISPATCHFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <rosplan_dispatch_msgs/ActionFeedback.h>

namespace rosplan_dispatch_msgs
{
template <class ContainerAllocator>
struct NonBlockingDispatchFeedback_
{
  typedef NonBlockingDispatchFeedback_<ContainerAllocator> Type;

  NonBlockingDispatchFeedback_()
    : feedback()  {
    }
  NonBlockingDispatchFeedback_(const ContainerAllocator& _alloc)
    : feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::rosplan_dispatch_msgs::ActionFeedback_<ContainerAllocator>  _feedback_type;
  _feedback_type feedback;





  typedef boost::shared_ptr< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct NonBlockingDispatchFeedback_

typedef ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<std::allocator<void> > NonBlockingDispatchFeedback;

typedef boost::shared_ptr< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback > NonBlockingDispatchFeedbackPtr;
typedef boost::shared_ptr< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback const> NonBlockingDispatchFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator1> & lhs, const ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator2> & rhs)
{
  return lhs.feedback == rhs.feedback;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator1> & lhs, const ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rosplan_dispatch_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b0e54af8f023d5f87ea17158522ba89a";
  }

  static const char* value(const ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb0e54af8f023d5f8ULL;
  static const uint64_t static_value2 = 0x7ea17158522ba89aULL;
};

template<class ContainerAllocator>
struct DataType< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosplan_dispatch_msgs/NonBlockingDispatchFeedback";
  }

  static const char* value(const ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"rosplan_dispatch_msgs/ActionFeedback feedback\n"
"\n"
"\n"
"================================================================================\n"
"MSG: rosplan_dispatch_msgs/ActionFeedback\n"
"#actionFeedback message\n"
"int32 ACTION_PRECONDITION_FALSE = 0\n"
"int32 ACTION_ENABLED = 1\n"
"int32 ACTION_DISPATCHED_TO_GOAL_STATE = 1\n"
"int32 ACTION_SUCCEEDED_TO_GOAL_STATE = 2\n"
"int32 ACTION_DISPATCHED_TO_START_STATE = 3\n"
"int32 ACTION_SUCCEEDED_TO_START_STATE = 4\n"
"int32 ACTION_FAILED = 10\n"
"\n"
"int32 action_id\n"
"int32 plan_id\n"
"int32 status\n"
"diagnostic_msgs/KeyValue[] information\n"
"\n"
"================================================================================\n"
"MSG: diagnostic_msgs/KeyValue\n"
"string key # what to label this value when viewing\n"
"string value # a value to track over time\n"
;
  }

  static const char* value(const ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NonBlockingDispatchFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosplan_dispatch_msgs::NonBlockingDispatchFeedback_<ContainerAllocator>& v)
  {
    s << indent << "feedback: ";
    s << std::endl;
    Printer< ::rosplan_dispatch_msgs::ActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSPLAN_DISPATCH_MSGS_MESSAGE_NONBLOCKINGDISPATCHFEEDBACK_H
