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


/**
 * @brief 2つの整数を減算する。
 *
 * @param [in] a 減算の被演算子（左オペランド）
 * @param [in] b 減算の減算子（右オペランド）
 * @return a - b の結果
 */
int8_t sub(int8_t a, int8_t b)
{
    int8_t result;

    result = a - b;

    return result;
}


/**
 * @brief 2つの整数を乗算する。
 *
 * @param [in] a 乗算する第1の整数
 * @param [in] b 乗算する第2の整数
 * @return a と b の積
 */
int8_t mul(int8_t a, int8_t b)
{
    int8_t result;

    result = a * b;

    return result;
}


/**
 * @brief 2つの整数を除算する。
 *
 * @param [in] a 除算の被演算子（左オペランド）
 * @param [in] b 除算の除数（右オペランド）
 * @return a / b の結果
 */
int8_t div(int8_t a, int8_t b)
{
    int8_t result;

    result = a / b;

    return result;
}
