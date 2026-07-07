/**
 * @file four_operations.h
 * @brief 四則演算を行うための関数を宣言するヘッダファイル。
 *
 * このファイルには、加算などの基本的な四則演算処理を宣言する。
 */

#ifndef FOUR_OPERATIONS_H_INCLUDED
#define FOUR_OPERATIONS_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <stdint.h>

/**
 * @brief 2つの整数を加算する。
 *
 */
int8_t myadd(int8_t a, int8_t b);

/**
 * @brief 2つの整数を減算する。
 *
 */
int8_t mysub(int8_t a, int8_t b);

/**
 * @brief 2つの整数を乗算する。
 *
 */
int8_t mymul(int8_t a, int8_t b);

/**
 * @brief 2つの整数を除算する。
 *
 */
int8_t mydiv(int8_t a, int8_t b);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* FOUR_OPERATIONS_H_INCLUDED */
