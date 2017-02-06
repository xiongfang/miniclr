cmake_minimum_required (VERSION 2.6)
project (clr)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

# define header and source files for the library
file(GLOB_RECURSE HEADER_FILES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.h")
file(GLOB_RECURSE SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

include_directories(src)
include_directories(src/vm)
include_directories(src/type_system)

# add the executable
add_library (clr SHARED ${SOURCE_FILES})
