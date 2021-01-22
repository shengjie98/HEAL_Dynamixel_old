// Generated by gencpp from file dynamixel_workbench_msgs/DynamixelCommandRequest.msg
// DO NOT EDIT!


#ifndef DYNAMIXEL_WORKBENCH_MSGS_MESSAGE_DYNAMIXELCOMMANDREQUEST_H
#define DYNAMIXEL_WORKBENCH_MSGS_MESSAGE_DYNAMIXELCOMMANDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dynamixel_workbench_msgs
{
template <class ContainerAllocator>
struct DynamixelCommandRequest_
{
  typedef DynamixelCommandRequest_<ContainerAllocator> Type;

  DynamixelCommandRequest_()
    : command()
    , id(0)
    , addr_name()
    , value(0)  {
    }
  DynamixelCommandRequest_(const ContainerAllocator& _alloc)
    : command(_alloc)
    , id(0)
    , addr_name(_alloc)
    , value(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _command_type;
  _command_type command;

   typedef uint8_t _id_type;
  _id_type id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _addr_name_type;
  _addr_name_type addr_name;

   typedef int32_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::dynamixel_workbench_msgs::DynamixelCommandRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamixel_workbench_msgs::DynamixelCommandRequest_<ContainerAllocator> const> ConstPtr;

}; // struct DynamixelCommandRequest_

typedef ::dynamixel_workbench_msgs::DynamixelCommandRequest_<std::allocator<void> > DynamixelCommandRequest;

typedef boost::shared_ptr< ::dynamixel_workbench_msgs::DynamixelCommandRequest > DynamixelCommandRequestPtr;
typedef boost::shared_ptr< ::dynamixel_workbench_msgs::DynamixelCommandRequest const> DynamixelCommandRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dynamixel_workbench_msgs::DynamixelCommandRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dynamixel_workbench_msgs::DynamixelCommandRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dynamixel_workbench_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'dynamixel_workbench_msgs': ['/home/shengjie/catkin_ws/src/dynamixel-workbench-msgs/dynamixel_workbench_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dynamixel_workbench_msgs::DynamixelCommandRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dynamixel_workbench_msgs::DynamixelCommandRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamixel_workbench_msgs::DynamixelCommandRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamixel_workbench_msgs::DynamixelCommandRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamixel_workbench_msgs::DynamixelCommandRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamixel_workbench_msgs::DynamixelCommandRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dynamixel_workbench_msgs::DynamixelCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "567da0de54717bf69d417bbe8d582ee9";
  }

  static const char* value(const ::dynamixel_workbench_msgs::DynamixelCommandRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x567da0de54717bf6ULL;
  static const uint64_t static_value2 = 0x9d417bbe8d582ee9ULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamixel_workbench_msgs::DynamixelCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dynamixel_workbench_msgs/DynamixelCommandRequest";
  }

  static const char* value(const ::dynamixel_workbench_msgs::DynamixelCommandRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dynamixel_workbench_msgs::DynamixelCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
string command\n\
\n\
uint8 id\n\
string addr_name\n\
int32 value\n\
\n\
";
  }

  static const char* value(const ::dynamixel_workbench_msgs::DynamixelCommandRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dynamixel_workbench_msgs::DynamixelCommandRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command);
      stream.next(m.id);
      stream.next(m.addr_name);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DynamixelCommandRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamixel_workbench_msgs::DynamixelCommandRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dynamixel_workbench_msgs::DynamixelCommandRequest_<ContainerAllocator>& v)
  {
    s << indent << "command: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.command);
    s << indent << "id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.id);
    s << indent << "addr_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.addr_name);
    s << indent << "value: ";
    Printer<int32_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DYNAMIXEL_WORKBENCH_MSGS_MESSAGE_DYNAMIXELCOMMANDREQUEST_H
