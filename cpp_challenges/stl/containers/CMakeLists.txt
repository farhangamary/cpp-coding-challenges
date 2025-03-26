cmake_minimum_required(VERSION 3.8)

project(ContainersChallenges)

# make it as a static lib - this will be then used in tests
add_library(containers STATIC challenge.cpp)
# Include directory for headers
target_include_directories(containers PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})