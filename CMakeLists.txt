cmake_minimum_required (VERSION 2.6)
project (clr)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

set(src_files 
	${PROJECT_SOURCE_DIR}/src/vm/loader.cpp
	${PROJECT_SOURCE_DIR}/src/type_system/type.cpp
)

include_directories(src)
include_directories(src/vm)
include_directories(src/type_system)

# add the executable
add_library (clr SHARED ${src_files})
