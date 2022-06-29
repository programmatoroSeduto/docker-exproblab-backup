# Install script for directory: /root/ros_ws/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/root/ros_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/root/ros_ws/install/_setup_util.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/root/ros_ws/install" TYPE PROGRAM FILES "/root/ros_ws/build/catkin_generated/installspace/_setup_util.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/root/ros_ws/install/env.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/root/ros_ws/install" TYPE PROGRAM FILES "/root/ros_ws/build/catkin_generated/installspace/env.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/root/ros_ws/install/setup.bash;/root/ros_ws/install/local_setup.bash")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/root/ros_ws/install" TYPE FILE FILES
    "/root/ros_ws/build/catkin_generated/installspace/setup.bash"
    "/root/ros_ws/build/catkin_generated/installspace/local_setup.bash"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/root/ros_ws/install/setup.sh;/root/ros_ws/install/local_setup.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/root/ros_ws/install" TYPE FILE FILES
    "/root/ros_ws/build/catkin_generated/installspace/setup.sh"
    "/root/ros_ws/build/catkin_generated/installspace/local_setup.sh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/root/ros_ws/install/setup.zsh;/root/ros_ws/install/local_setup.zsh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/root/ros_ws/install" TYPE FILE FILES
    "/root/ros_ws/build/catkin_generated/installspace/setup.zsh"
    "/root/ros_ws/build/catkin_generated/installspace/local_setup.zsh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/root/ros_ws/install/.rosinstall")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/root/ros_ws/install" TYPE FILE FILES "/root/ros_ws/build/catkin_generated/installspace/.rosinstall")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/root/ros_ws/build/gtest/cmake_install.cmake")
  include("/root/ros_ws/build/SLAM_packages/hector_slam/hector_slam/cmake_install.cmake")
  include("/root/ros_ws/build/SLAM_packages/hector_slam/hector_slam_launch/cmake_install.cmake")
  include("/root/ros_ws/build/SLAM_packages/navigation_2d/nav2d/cmake_install.cmake")
  include("/root/ros_ws/build/SLAM_packages/navigation_2d/nav2d_tutorials/cmake_install.cmake")
  include("/root/ros_ws/build/SLAM_packages/octomap_mapping/octomap_mapping/cmake_install.cmake")
  include("/root/ros_ws/build/rosjava_build_tools/cmake_install.cmake")
  include("/root/ros_ws/build/armor/multi_ontology_reference/cmake_install.cmake")
  include("/root/ros_ws/build/ROSPlan/rosplan/cmake_install.cmake")
  include("/root/ros_ws/build/rosplan_demos/rosplan_demos/cmake_install.cmake")
  include("/root/ros_ws/build/rosplan_demos/rosplan_demos_interfaces/rosplan_demos_interfaces/cmake_install.cmake")
  include("/root/ros_ws/build/ROSPlan/rosplan_rqt/cmake_install.cmake")
  include("/root/ros_ws/build/rosplan_demos/rosplan_stage_demo/cmake_install.cmake")
  include("/root/ros_ws/build/rosplan_demos/rosplan_stage_exploration_demo/cmake_install.cmake")
  include("/root/ros_ws/build/rosplan_demos/rosplan_stage_waypoint_demo/cmake_install.cmake")
  include("/root/ros_ws/build/rosplan_demos/rosplan_turtlebot2_demo/cmake_install.cmake")
  include("/root/ros_ws/build/rosplan_demos/rosplan_turtlebot3_demo/cmake_install.cmake")
  include("/root/ros_ws/build/SLAM_packages/slam_gmapping/slam_gmapping/cmake_install.cmake")
  include("/root/ros_ws/build/executive_smach_tutorials/cmake_install.cmake")
  include("/root/ros_ws/build/armor/armor_msgs/cmake_install.cmake")
  include("/root/ros_ws/build/armor/armor/cmake_install.cmake")
  include("/root/ros_ws/build/SLAM_packages/hector_slam/hector_map_tools/cmake_install.cmake")
  include("/root/ros_ws/build/SLAM_packages/hector_slam/hector_nav_msgs/cmake_install.cmake")
  include("/root/ros_ws/build/ROSPlan/rosplan_action_interface/cmake_install.cmake")
  include("/root/ros_ws/build/armor/armor_py_api/cmake_install.cmake")
  include("/root/ros_ws/build/SLAM_packages/hector_slam/hector_marker_drawing/cmake_install.cmake")
  include("/root/ros_ws/build/ROSPlan/rosplan_dispatch_msgs/cmake_install.cmake")
  include("/root/ros_ws/build/ROSPlan/rosplan_knowledge_msgs/cmake_install.cmake")
  include("/root/ros_ws/build/ROSPlan/rosplan_dependencies/cmake_install.cmake")
  include("/root/ros_ws/build/ROSPlan/rosplan_sensing_interface/cmake_install.cmake")
  include("/root/ros_ws/build/ROSPlan/rosplan_planning_system/cmake_install.cmake")
  include("/root/ros_ws/build/rosplan_demos/rosplan_demos_interfaces/rosplan_interface_movebase/cmake_install.cmake")
  include("/root/ros_ws/build/SLAM_packages/hector_slam/hector_compressed_map_transport/cmake_install.cmake")
  include("/root/ros_ws/build/rt2_packages/motion_plan/cmake_install.cmake")
  include("/root/ros_ws/build/SLAM_packages/navigation_2d/nav2d_msgs/cmake_install.cmake")
  include("/root/ros_ws/build/armor/armor_rds_tutorial/cmake_install.cmake")
  include("/root/ros_ws/build/SLAM_packages/slam_gmapping/gmapping/cmake_install.cmake")
  include("/root/ros_ws/build/SLAM_packages/hector_slam/hector_imu_attitude_to_tf/cmake_install.cmake")
  include("/root/ros_ws/build/SLAM_packages/hector_slam/hector_imu_tools/cmake_install.cmake")
  include("/root/ros_ws/build/SLAM_packages/hector_slam/hector_map_server/cmake_install.cmake")
  include("/root/ros_ws/build/SLAM_packages/hector_slam/hector_trajectory_server/cmake_install.cmake")
  include("/root/ros_ws/build/SLAM_packages/navigation_2d/nav2d_localizer/cmake_install.cmake")
  include("/root/ros_ws/build/SLAM_packages/navigation_2d/nav2d_karto/cmake_install.cmake")
  include("/root/ros_ws/build/occupancy_grid_utils/cmake_install.cmake")
  include("/root/ros_ws/build/SLAM_packages/octomap_ros/cmake_install.cmake")
  include("/root/ros_ws/build/SLAM_packages/octomap_mapping/octomap_server/cmake_install.cmake")
  include("/root/ros_ws/build/rosplan_demos/rosplan_demos_interfaces/rosplan_interface_mapping/cmake_install.cmake")
  include("/root/ros_ws/build/ROSPlan/rosplan_knowledge_base/cmake_install.cmake")
  include("/root/ros_ws/build/SLAM_packages/hector_slam/hector_mapping/cmake_install.cmake")
  include("/root/ros_ws/build/planning/cmake_install.cmake")
  include("/root/ros_ws/build/rt2_packages/robot1_description/cmake_install.cmake")
  include("/root/ros_ws/build/robot_description/cmake_install.cmake")
  include("/root/ros_ws/build/m-explore/explore/cmake_install.cmake")
  include("/root/ros_ws/build/SLAM_packages/navigation_2d/nav2d_operator/cmake_install.cmake")
  include("/root/ros_ws/build/SLAM_packages/navigation_2d/nav2d_navigator/cmake_install.cmake")
  include("/root/ros_ws/build/SLAM_packages/navigation_2d/nav2d_exploration/cmake_install.cmake")
  include("/root/ros_ws/build/SLAM_packages/navigation_2d/nav2d_remote/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/root/ros_ws/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
