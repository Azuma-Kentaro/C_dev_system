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

# 切り替え用のオプションを定義（ON または OFF）
# 初期状態は「製品ビルド=ON」「テストビルド=OFF」に設定
option(BUILD_PRODUCT "Build the product code" ON)
option(BUILD_TESTS "Build the test code" OFF)

# 製品コードのビルド（ONの場合のみ実行）
if (BUILD_PRODUCT)
    message(STATUS "Building product code...")
    add_subdirectory(src)
endif()

# テストコードのビルド（ONの場合のみ実行）
if (BUILD_TESTS)
    message(STATUS "Building test code...")
    add_subdirectory(test)
endif()
