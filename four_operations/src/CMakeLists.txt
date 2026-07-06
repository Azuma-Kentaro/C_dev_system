# 製品の主要ロジックをライブラリ化（テスト側からもリンクしやすくするため）
add_library(lib_four_operations four_operations.c)
target_include_directories(lib_four_operations PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)

# 製品の実行ファイルを作成
add_executable(app_four_operations main.c)
target_link_libraries(app_four_operations PRIVATE lib_four_operations)
