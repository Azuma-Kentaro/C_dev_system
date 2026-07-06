cmake_minimum_required(VERSION 3.14)
project(four_operations LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

file(GLOB FOUR_OPERATIONS_SOURCES CONFIGURE_DEPENDS *.c)

add_library(four_operations STATIC ${FOUR_OPERATIONS_SOURCES})
target_include_directories(four_operations
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/../include
)

