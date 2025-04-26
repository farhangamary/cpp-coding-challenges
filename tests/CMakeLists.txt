enable_testing()

find_package(GTest CONFIG REQUIRED)

add_executable(test_count_unreachable_pairs graph/test_count_unreachable_pairs.cpp)
add_executable(test_containers stl/test_containers.cpp)

# Link test executable with GTest and the challenge library
target_link_libraries(test_count_unreachable_pairs PRIVATE count_unreachable_pairs GTest::gtest GTest::gtest_main)
target_link_libraries(test_containers PRIVATE containers GTest::gtest GTest::gtest_main)

# Ensure the test depends on the challenge library being built first
add_dependencies(test_count_unreachable_pairs count_unreachable_pairs)
add_dependencies(test_containers containers)

# Register the tests
add_test(NAME RunAllGraphTests COMMAND test_count_unreachable_pairs)
add_test(NAME RunAllContainsersTests COMMAND test_containers)
