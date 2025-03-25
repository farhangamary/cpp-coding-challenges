cmake_minimum_required(VERSION 3.8)

project(GraphChallenges)

# make it as a static lib - this will be then used in tests
add_library(count_unreachable_pairs STATIC challenge.cpp)
# Include directory for headers
target_include_directories(count_unreachable_pairs PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})