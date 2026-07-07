include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.17.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(test_four_operations test_four_operations.cc)

target_link_libraries(test_four_operations PRIVATE lib_four_operations PRIVATE GTest::gtest_main)

# カバレッジ用のオプション
# テストコードそのもののカバレッジは不要のためtarget_compile_optionsをコメントアウト
#target_compile_options(test_four_operations PRIVATE --coverage)
target_link_options(test_four_operations PRIVATE --coverage)

include(GoogleTest)
gtest_discover_tests(test_four_operations)

# ビルド完了後、テストプログラムを実行する
add_custom_command(
    TARGET test_four_operations
    POST_BUILD
    COMMAND $<TARGET_FILE:test_four_operations>
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/build/coverage
    COMMENT "Running post-build process..."
)
