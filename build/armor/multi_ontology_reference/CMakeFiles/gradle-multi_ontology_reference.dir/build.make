# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/ros_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/ros_ws/build

# Utility rule file for gradle-multi_ontology_reference.

# Include the progress variables for this target.
include armor/multi_ontology_reference/CMakeFiles/gradle-multi_ontology_reference.dir/progress.make

armor/multi_ontology_reference/CMakeFiles/gradle-multi_ontology_reference:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/ros_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Gradling tasks for multi_ontology_reference"
	cd /root/ros_ws/src/armor/multi_ontology_reference && ROS_MAVEN_REPOSITORY=https://github.com/rosjava/rosjava_mvn_repo/raw/master /root/ros_ws/build/catkin_generated/env_cached.sh /root/ros_ws/src/armor/multi_ontology_reference/gradlew -q install publishMavenJavaPublicationToMavenRepository

gradle-multi_ontology_reference: armor/multi_ontology_reference/CMakeFiles/gradle-multi_ontology_reference
gradle-multi_ontology_reference: armor/multi_ontology_reference/CMakeFiles/gradle-multi_ontology_reference.dir/build.make

.PHONY : gradle-multi_ontology_reference

# Rule to build all files generated by this target.
armor/multi_ontology_reference/CMakeFiles/gradle-multi_ontology_reference.dir/build: gradle-multi_ontology_reference

.PHONY : armor/multi_ontology_reference/CMakeFiles/gradle-multi_ontology_reference.dir/build

armor/multi_ontology_reference/CMakeFiles/gradle-multi_ontology_reference.dir/clean:
	cd /root/ros_ws/build/armor/multi_ontology_reference && $(CMAKE_COMMAND) -P CMakeFiles/gradle-multi_ontology_reference.dir/cmake_clean.cmake
.PHONY : armor/multi_ontology_reference/CMakeFiles/gradle-multi_ontology_reference.dir/clean

armor/multi_ontology_reference/CMakeFiles/gradle-multi_ontology_reference.dir/depend:
	cd /root/ros_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/ros_ws/src /root/ros_ws/src/armor/multi_ontology_reference /root/ros_ws/build /root/ros_ws/build/armor/multi_ontology_reference /root/ros_ws/build/armor/multi_ontology_reference/CMakeFiles/gradle-multi_ontology_reference.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : armor/multi_ontology_reference/CMakeFiles/gradle-multi_ontology_reference.dir/depend

