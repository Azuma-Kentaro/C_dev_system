/**
 * @file four_operations.c
 * @brief 四則演算を行うための関数を実装するソースファイル。
 *
 * このファイルには、加算などの基本的な四則演算処理を定義する。
 */

#include "four_operations.h"


/**
 * @brief 2つの整数を加算する。
 *
 * @param [in] a 加算する第1の整数
 * @param [in] b 加算する第2の整数
 * @return a と b の合計
 */
int8_t add(int8_t a, int8_t b)
{
    int8_t result;

    result = a + b;

    return result;
}
