# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "roscpp;tf;nav_msgs;sensor_msgs;geometry_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lSelfLocalizer".split(';') if "-lSelfLocalizer" != "" else []
PROJECT_NAME = "nav2d_localizer"
PROJECT_SPACE_DIR = "/root/ros_ws/install"
PROJECT_VERSION = "0.4.2"
