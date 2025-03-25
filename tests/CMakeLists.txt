# GoogleTest Setup
enable_testing()
# Adjust this to point where the google test is installed - if you are on windows.
set(GTest_DIR "D:/sources/dev/vcpkg/installed/x64-windows/share/gtest")
# Find GoogleTest
find_package(GTest CONFIG REQUIRED)

# Add tests for each challenge
add_executable(test_count_unreachable_pairs graph/test_count_unreachable_pairs.cpp)

# Link test executable with GTest and the challenge library
target_link_libraries(test_count_unreachable_pairs PRIVATE count_unreachable_pairs GTest::gtest GTest::gtest_main)
# Ensure the test depends on the challenge library being built first
add_dependencies(test_count_unreachable_pairs count_unreachable_pairs)

# Register the tests
add_test(NAME RunAllGraphTests COMMAND test_count_unreachable_pairs)