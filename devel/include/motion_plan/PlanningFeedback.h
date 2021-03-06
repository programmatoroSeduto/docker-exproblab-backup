// Generated by gencpp from file motion_plan/PlanningFeedback.msg
// DO NOT EDIT!


#ifndef MOTION_PLAN_MESSAGE_PLANNINGFEEDBACK_H
#define MOTION_PLAN_MESSAGE_PLANNINGFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>

namespace motion_plan
{
template <class ContainerAllocator>
struct PlanningFeedback_
{
  typedef PlanningFeedback_<ContainerAllocator> Type;

  PlanningFeedback_()
    : actual_pose()
    , stat()  {
    }
  PlanningFeedback_(const ContainerAllocator& _alloc)
    : actual_pose(_alloc)
    , stat(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _actual_pose_type;
  _actual_pose_type actual_pose;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _stat_type;
  _stat_type stat;





  typedef boost::shared_ptr< ::motion_plan::PlanningFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::motion_plan::PlanningFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct PlanningFeedback_

typedef ::motion_plan::PlanningFeedback_<std::allocator<void> > PlanningFeedback;

typedef boost::shared_ptr< ::motion_plan::PlanningFeedback > PlanningFeedbackPtr;
typedef boost::shared_ptr< ::motion_plan::PlanningFeedback const> PlanningFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::motion_plan::PlanningFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::motion_plan::PlanningFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::motion_plan::PlanningFeedback_<ContainerAllocator1> & lhs, const ::motion_plan::PlanningFeedback_<ContainerAllocator2> & rhs)
{
  return lhs.actual_pose == rhs.actual_pose &&
    lhs.stat == rhs.stat;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::motion_plan::PlanningFeedback_<ContainerAllocator1> & lhs, const ::motion_plan::PlanningFeedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace motion_plan

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::motion_plan::PlanningFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::motion_plan::PlanningFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::motion_plan::PlanningFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::motion_plan::PlanningFeedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motion_plan::PlanningFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motion_plan::PlanningFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::motion_plan::PlanningFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3b47324e0baca3583911e643e2a32dcf";
  }

  static const char* value(const ::motion_plan::PlanningFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3b47324e0baca358ULL;
  static const uint64_t static_value2 = 0x3911e643e2a32dcfULL;
};

template<class ContainerAllocator>
struct DataType< ::motion_plan::PlanningFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "motion_plan/PlanningFeedback";
  }

  static const char* value(const ::motion_plan::PlanningFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::motion_plan::PlanningFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"geometry_msgs/Pose actual_pose\n"
"string stat\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::motion_plan::PlanningFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::motion_plan::PlanningFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.actual_pose);
      stream.next(m.stat);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlanningFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::motion_plan::PlanningFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::motion_plan::PlanningFeedback_<ContainerAllocator>& v)
  {
    s << indent << "actual_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.actual_pose);
    s << indent << "stat: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.stat);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOTION_PLAN_MESSAGE_PLANNINGFEEDBACK_H
