cmake_minimum_required (VERSION 3.0)
project (clr)

add_compile_options(-std=c++11)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
SET(CMAKE_INSTALL_PREFIX ${PROJECT_BINARY_DIR})

# The version number.
set (LIGHT_NET_VERSION_MAJOR 1)
set (LIGHT_NET_VERSION_MINOR 0)

# 平台定义
set(TARGET_PLATFORM "PLATFORM_WINDOWS")
#set(TARGET_PLATFORM "PLARFORM_ANDROID")
#set(TARGET_PLATFORM "PLATFORM_OSX")
#set(TARGET_PLATFORM "PLATFORM_IOS")

if(${TARGET_PLATFORM} MATCHES "PLATFORM_WINDOWS")
option(PLARFORM_WINDOWS "platform define" ON)
endif()

if(${TARGET_PLATFORM} EQUAL "PLARFORM_ANDROID")
option(PLARFORM_ANDROID "platform define" ON)
endif()

if(${TARGET_PLATFORM} EQUAL "PLARFORM_IOS")
	option(PLARFORM_IOS "platform define" ON)
endif()

if(${TARGET_PLATFORM} EQUAL "PLARFORM_OSX")
	option(PLARFORM_OSX "platform define" ON)
endif()

message(STATUS ${TARGET_PLATFORM})

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/src/cmakeconfig.h.in"
  "${PROJECT_BINARY_DIR}/cmakeconfig.h"
  )

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories ("${PROJECT_BINARY_DIR}")

add_subdirectory (src)

# 安装配置
# install (TARGETS main clr DESTINATION bin)