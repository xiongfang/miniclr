cmake_minimum_required (VERSION 2.6)
project (clr)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
SET(CMAKE_INSTALL_PREFIX ${PROJECT_BINARY_DIR})

# The version number.
set (LIGHT_NET_VERSION_MAJOR 1)
set (LIGHT_NET_VERSION_MINOR 0)

# 平台定义

if(MSVC)
option(PLARFORM_WINDOWS "platform define" ON)
endif(MSVC)

if(ANDROID)
option(PLARFORM_ANDROID "platform define" ON)
endif(ANDROID)

if(APPLE)
if(APPLE_IOS)
	option(PLARFORM_IOS "platform define" ON)
else()
	option(PLARFORM_OSX "platform define" ON)
endif(APPLE_IOS)

endif(APPLE)

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