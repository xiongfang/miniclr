# define header and source files for the library
file(GLOB_RECURSE HEADER_FILES 
	"${CMAKE_CURRENT_SOURCE_DIR}/mini/*.h"
	"${CMAKE_CURRENT_SOURCE_DIR}/metadata/*.h"
)
file(GLOB_RECURSE SOURCE_FILES 
	"${CMAKE_CURRENT_SOURCE_DIR}/metadata/*.cpp" 
	"${CMAKE_CURRENT_SOURCE_DIR}/mini/*.cpp"
)

if(PLARFORM_WINDOWS)
message(STATUS "Add Windows File")
file(GLOB_RECURSE WIN_SOURCE_FILES 
	"${CMAKE_CURRENT_SOURCE_DIR}/cross/private/windows/*.cpp" 
)
list(APPEND SOURCE_FILES "${WIN_SOURCE_FILES}")
endif(PLARFORM_WINDOWS)

include_directories(mini/public)
include_directories(metadata/public)
include_directories(cross/public)
include_directories(.)


# add the executable
add_library (clr STATIC ${SOURCE_FILES})

install (TARGETS clr DESTINATION bin)

target_compile_definitions(clr PRIVATE DLL_EXPORTS)

add_subdirectory (main)