# 获取所有 mini 子目录的源文件和头文件
file(GLOB_RECURSE HEADER_FILES 
	"${CMAKE_CURRENT_SOURCE_DIR}/mini/*.h"
)
file(GLOB_RECURSE SOURCE_FILES 
	"${CMAKE_CURRENT_SOURCE_DIR}/mini/*.cpp"
)

# 添加Windows平台源文件到 SOURCE_FILES 变量中
if(PLARFORM_WINDOWS)
message(STATUS "Add Windows File")
file(GLOB_RECURSE WIN_SOURCE_FILES 
	"${CMAKE_CURRENT_SOURCE_DIR}/cross/private/windows/*.cpp" 
)
list(APPEND SOURCE_FILES "${WIN_SOURCE_FILES}")
endif(PLARFORM_WINDOWS)

# 头文件包含目录
include_directories(cross/public)
include_directories(mini/public)
include_directories(.)

# add the executable
add_library (clr STATIC ${SOURCE_FILES})

install (TARGETS clr DESTINATION bin)

target_compile_definitions(clr PRIVATE DLL_EXPORTS)

add_subdirectory (main)