# Install script for directory: /home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/src/mycobot_ros/Mybuddy/mybuddy_socket

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/install")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/build/mycobot_ros/Mybuddy/mybuddy_socket/catkin_generated/installspace/mybuddy_socket.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mybuddy_socket/cmake" TYPE FILE FILES
    "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/build/mycobot_ros/Mybuddy/mybuddy_socket/catkin_generated/installspace/mybuddy_socketConfig.cmake"
    "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/build/mycobot_ros/Mybuddy/mybuddy_socket/catkin_generated/installspace/mybuddy_socketConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mybuddy_socket" TYPE FILE FILES "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/src/mycobot_ros/Mybuddy/mybuddy_socket/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/mybuddy_socket" TYPE PROGRAM FILES "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/build/mycobot_ros/Mybuddy/mybuddy_socket/catkin_generated/installspace/follow_display.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/mybuddy_socket" TYPE PROGRAM FILES "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/build/mycobot_ros/Mybuddy/mybuddy_socket/catkin_generated/installspace/slider_control.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/mybuddy_socket" TYPE PROGRAM FILES "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/build/mycobot_ros/Mybuddy/mybuddy_socket/catkin_generated/installspace/teleop_keyboard.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/mybuddy_socket" TYPE PROGRAM FILES "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/build/mycobot_ros/Mybuddy/mybuddy_socket/catkin_generated/installspace/listen_real.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/mybuddy_socket" TYPE PROGRAM FILES "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/build/mycobot_ros/Mybuddy/mybuddy_socket/catkin_generated/installspace/listen_real_of_topic.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/mybuddy_socket" TYPE PROGRAM FILES "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/build/mycobot_ros/Mybuddy/mybuddy_socket/catkin_generated/installspace/simple_gui.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mybuddy_socket" TYPE DIRECTORY FILES "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/src/mycobot_ros/Mybuddy/mybuddy_socket/launch" REGEX "/setup\\_assistant\\.launch$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mybuddy_socket" TYPE DIRECTORY FILES "/home/tyler/Documents/Github/280-M5_ROS/ros/ros_ws/src/mycobot_ros/Mybuddy/mybuddy_socket/config")
endif()

