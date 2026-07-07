include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.17.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(test_four_operations test_four_operations.cc)

target_link_libraries(test_four_operations PRIVATE lib_four_operations PRIVATE GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(test_four_operations)
