cmake_minimum_required(VERSION 3.14)
project(my_googletest_practice)

# GoogleTest requires at least C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.17.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_executable(
    test_four_opetarions
    test_four_operations.cc
)
target_link_libraries(
    test_four_operations
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(test_four_operations)
