cmake_minimum_required(VERSION 3.18)
project(CppChallenges VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(GTest REQUIRED)

enable_testing()

add_subdirectory("cpp_challenges")
add_subdirectory("tests")
