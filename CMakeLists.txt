cmake_minimum_required(VERSION 3.8)

project(CppChallenges)

if(WIN32 AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
  set(CMAKE_TOOLCHAIN_FILE "D:/sources/dev/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "")
endif()
if(UNIX)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -Wextra -Wpedantic")
endif()

enable_testing()

add_subdirectory("cpp_challenges")
add_subdirectory("tests")
