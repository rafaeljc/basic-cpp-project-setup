cmake_minimum_required(VERSION 3.20)

# C++ settings
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# force C++ runtime libraries to link statically on Windows
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Release>:Release>")

project(myproject)

# project source files
file(GLOB_RECURSE MY_SOURCES CONFIGURE_DEPENDS 
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
)

add_executable(${PROJECT_NAME} "${MY_SOURCES}")

# project header files
target_include_directories("${CMAKE_PROJECT_NAME}" PUBLIC 
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

# external libraries
add_subdirectory(external/foo)
target_include_directories(foo PUBLIC 
    "${CMAKE_CURRENT_SOURCE_DIR}/external/foo/include/"
)
target_link_libraries("${CMAKE_PROJECT_NAME}" PRIVATE foo)
