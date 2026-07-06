cmake_minimum_required(VERSION 3.14)
project(four_operations LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB FOUR_OPERATIONS_SOURCES CONFIGURE_DEPENDS src/*.c)
file(GLOB FOUR_OPERATIONS_TEST_SOURCES CONFIGURE_DEPENDS test/*.c test/*.cc test/*.cpp)

add_library(four_operations STATIC ${FOUR_OPERATIONS_SOURCES})
target_include_directories(four_operations
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(test_four_operations
    ${FOUR_OPERATIONS_TEST_SOURCES}
)
target_link_libraries(test_four_operations PRIVATE four_operations)


