file(GLOB HEADER_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.h")
file(GLOB SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

set (EXTRA_LIBS ${EXTRA_LIBS} clr)

add_executable (main ${SOURCE_FILES})
target_link_libraries (main  ${EXTRA_LIBS})

install (TARGETS main DESTINATION bin)