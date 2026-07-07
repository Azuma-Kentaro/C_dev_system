cmake_minimum_required(VERSION 3.14)
project(four_operations LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

# GoogleTest requires at least C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
cmake_policy(SET CMP0135 NEW)

# 製品コードのビルド
message(STATUS "Building product code...")
add_subdirectory(src)

# テストコードのビルド
message(STATUS "Building test code...")
add_subdirectory(test)
