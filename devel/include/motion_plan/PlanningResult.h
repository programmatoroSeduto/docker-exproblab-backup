// Generated by gencpp from file motion_plan/PlanningResult.msg
// DO NOT EDIT!


#ifndef MOTION_PLAN_MESSAGE_PLANNINGRESULT_H
#define MOTION_PLAN_MESSAGE_PLANNINGRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace motion_plan
{
template <class ContainerAllocator>
struct PlanningResult_
{
  typedef PlanningResult_<ContainerAllocator> Type;

  PlanningResult_()
    {
    }
  PlanningResult_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::motion_plan::PlanningResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::motion_plan::PlanningResult_<ContainerAllocator> const> ConstPtr;

}; // struct PlanningResult_

typedef ::motion_plan::PlanningResult_<std::allocator<void> > PlanningResult;

typedef boost::shared_ptr< ::motion_plan::PlanningResult > PlanningResultPtr;
typedef boost::shared_ptr< ::motion_plan::PlanningResult const> PlanningResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::motion_plan::PlanningResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::motion_plan::PlanningResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace motion_plan

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::motion_plan::PlanningResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::motion_plan::PlanningResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::motion_plan::PlanningResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::motion_plan::PlanningResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motion_plan::PlanningResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motion_plan::PlanningResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::motion_plan::PlanningResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::motion_plan::PlanningResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::motion_plan::PlanningResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "motion_plan/PlanningResult";
  }

  static const char* value(const ::motion_plan::PlanningResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::motion_plan::PlanningResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
;
  }

  static const char* value(const ::motion_plan::PlanningResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::motion_plan::PlanningResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlanningResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::motion_plan::PlanningResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::motion_plan::PlanningResult_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // MOTION_PLAN_MESSAGE_PLANNINGRESULT_H
