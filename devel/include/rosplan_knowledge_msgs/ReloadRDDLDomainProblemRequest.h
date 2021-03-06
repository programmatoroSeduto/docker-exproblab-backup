// Generated by gencpp from file rosplan_knowledge_msgs/ReloadRDDLDomainProblemRequest.msg
// DO NOT EDIT!


#ifndef ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_RELOADRDDLDOMAINPROBLEMREQUEST_H
#define ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_RELOADRDDLDOMAINPROBLEMREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosplan_knowledge_msgs
{
template <class ContainerAllocator>
struct ReloadRDDLDomainProblemRequest_
{
  typedef ReloadRDDLDomainProblemRequest_<ContainerAllocator> Type;

  ReloadRDDLDomainProblemRequest_()
    : problem_path()  {
    }
  ReloadRDDLDomainProblemRequest_(const ContainerAllocator& _alloc)
    : problem_path(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _problem_path_type;
  _problem_path_type problem_path;





  typedef boost::shared_ptr< ::rosplan_knowledge_msgs::ReloadRDDLDomainProblemRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosplan_knowledge_msgs::ReloadRDDLDomainProblemRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ReloadRDDLDomainProblemRequest_

typedef ::rosplan_knowledge_msgs::ReloadRDDLDomainProblemRequest_<std::allocator<void> > ReloadRDDLDomainProblemRequest;

typedef boost::shared_ptr< ::rosplan_knowledge_msgs::ReloadRDDLDomainProblemRequest > ReloadRDDLDomainProblemRequestPtr;
typedef boost::shared_ptr< ::rosplan_knowledge_msgs::ReloadRDDLDomainProblemRequest const> ReloadRDDLDomainProblemRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosplan_knowledge_msgs::ReloadRDDLDomainProblemRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosplan_knowledge_msgs::ReloadRDDLDomainProblemRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rosplan_knowledge_msgs::ReloadRDDLDomainProblemRequest_<ContainerAllocator1> & lhs, const ::rosplan_knowledge_msgs::ReloadRDDLDomainProblemRequest_<ContainerAllocator2> & rhs)
{
  return lhs.problem_path == rhs.problem_path;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rosplan_knowledge_msgs::ReloadRDDLDomainProblemRequest_<ContainerAllocator1> & lhs, const ::rosplan_knowledge_msgs::ReloadRDDLDomainProblemRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rosplan_knowledge_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rosplan_knowledge_msgs::ReloadRDDLDomainProblemRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_knowledge_msgs::ReloadRDDLDomainProblemRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_knowledge_msgs::ReloadRDDLDomainProblemRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_knowledge_msgs::ReloadRDDLDomainProblemRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_knowledge_msgs::ReloadRDDLDomainProblemRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_knowledge_msgs::ReloadRDDLDomainProblemRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosplan_knowledge_msgs::ReloadRDDLDomainProblemRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "292d3c8400a7f9aff04549bd1e88094e";
  }

  static const char* value(const ::rosplan_knowledge_msgs::ReloadRDDLDomainProblemRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x292d3c8400a7f9afULL;
  static const uint64_t static_value2 = 0xf04549bd1e88094eULL;
};

template<class ContainerAllocator>
struct DataType< ::rosplan_knowledge_msgs::ReloadRDDLDomainProblemRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosplan_knowledge_msgs/ReloadRDDLDomainProblemRequest";
  }

  static const char* value(const ::rosplan_knowledge_msgs::ReloadRDDLDomainProblemRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosplan_knowledge_msgs::ReloadRDDLDomainProblemRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string problem_path\n"
;
  }

  static const char* value(const ::rosplan_knowledge_msgs::ReloadRDDLDomainProblemRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosplan_knowledge_msgs::ReloadRDDLDomainProblemRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.problem_path);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ReloadRDDLDomainProblemRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosplan_knowledge_msgs::ReloadRDDLDomainProblemRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosplan_knowledge_msgs::ReloadRDDLDomainProblemRequest_<ContainerAllocator>& v)
  {
    s << indent << "problem_path: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.problem_path);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_RELOADRDDLDOMAINPROBLEMREQUEST_H
