// Generated by gencpp from file armor_msgs/ArmorDirectiveListRequest.msg
// DO NOT EDIT!


#ifndef ARMOR_MSGS_MESSAGE_ARMORDIRECTIVELISTREQUEST_H
#define ARMOR_MSGS_MESSAGE_ARMORDIRECTIVELISTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <armor_msgs/ArmorDirectiveReq.h>

namespace armor_msgs
{
template <class ContainerAllocator>
struct ArmorDirectiveListRequest_
{
  typedef ArmorDirectiveListRequest_<ContainerAllocator> Type;

  ArmorDirectiveListRequest_()
    : armor_requests()  {
    }
  ArmorDirectiveListRequest_(const ContainerAllocator& _alloc)
    : armor_requests(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::armor_msgs::ArmorDirectiveReq_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::armor_msgs::ArmorDirectiveReq_<ContainerAllocator> >::other >  _armor_requests_type;
  _armor_requests_type armor_requests;





  typedef boost::shared_ptr< ::armor_msgs::ArmorDirectiveListRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::armor_msgs::ArmorDirectiveListRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ArmorDirectiveListRequest_

typedef ::armor_msgs::ArmorDirectiveListRequest_<std::allocator<void> > ArmorDirectiveListRequest;

typedef boost::shared_ptr< ::armor_msgs::ArmorDirectiveListRequest > ArmorDirectiveListRequestPtr;
typedef boost::shared_ptr< ::armor_msgs::ArmorDirectiveListRequest const> ArmorDirectiveListRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::armor_msgs::ArmorDirectiveListRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::armor_msgs::ArmorDirectiveListRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::armor_msgs::ArmorDirectiveListRequest_<ContainerAllocator1> & lhs, const ::armor_msgs::ArmorDirectiveListRequest_<ContainerAllocator2> & rhs)
{
  return lhs.armor_requests == rhs.armor_requests;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::armor_msgs::ArmorDirectiveListRequest_<ContainerAllocator1> & lhs, const ::armor_msgs::ArmorDirectiveListRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace armor_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::armor_msgs::ArmorDirectiveListRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::armor_msgs::ArmorDirectiveListRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::armor_msgs::ArmorDirectiveListRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::armor_msgs::ArmorDirectiveListRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::armor_msgs::ArmorDirectiveListRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::armor_msgs::ArmorDirectiveListRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::armor_msgs::ArmorDirectiveListRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9b6fe8f675c901087d462c04d41f94e1";
  }

  static const char* value(const ::armor_msgs::ArmorDirectiveListRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9b6fe8f675c90108ULL;
  static const uint64_t static_value2 = 0x7d462c04d41f94e1ULL;
};

template<class ContainerAllocator>
struct DataType< ::armor_msgs::ArmorDirectiveListRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "armor_msgs/ArmorDirectiveListRequest";
  }

  static const char* value(const ::armor_msgs::ArmorDirectiveListRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::armor_msgs::ArmorDirectiveListRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ArmorDirectiveReq[] armor_requests\n"
"\n"
"================================================================================\n"
"MSG: armor_msgs/ArmorDirectiveReq\n"
"string client_name\n"
"string reference_name\n"
"string command\n"
"string primary_command_spec\n"
"string secondary_command_spec\n"
"string[] args\n"
;
  }

  static const char* value(const ::armor_msgs::ArmorDirectiveListRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::armor_msgs::ArmorDirectiveListRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.armor_requests);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ArmorDirectiveListRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::armor_msgs::ArmorDirectiveListRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::armor_msgs::ArmorDirectiveListRequest_<ContainerAllocator>& v)
  {
    s << indent << "armor_requests[]" << std::endl;
    for (size_t i = 0; i < v.armor_requests.size(); ++i)
    {
      s << indent << "  armor_requests[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::armor_msgs::ArmorDirectiveReq_<ContainerAllocator> >::stream(s, indent + "    ", v.armor_requests[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ARMOR_MSGS_MESSAGE_ARMORDIRECTIVELISTREQUEST_H
