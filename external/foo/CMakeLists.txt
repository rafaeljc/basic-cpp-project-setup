cmake_minimum_required(VERSION 3.20)

project(foo)

# project header files
target_include_directories("${CMAKE_PROJECT_NAME}" PUBLIC 
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

# project source files
file(GLOB_RECURSE MY_SOURCES CONFIGURE_DEPENDS 
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
)

add_library(${PROJECT_NAME} STATIC "${MY_SOURCES}")
