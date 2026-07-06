/**
 * @file main.c
 * @brief main関数を実装するソースファイル。
 *
 */

#include <stdio.h>

#include "four_operations.h"

int main(int argc, char *argv[])
{
    printf("add(1, 2) = %d\n", add(1, 2));
    printf("sub(1, 2) = %d\n", sub(1, 2));
    printf("mul(2, 3) = %d\n", mul(2, 3));
    printf("div(6, 2) = %d\n", div(6, 2));
    return 0;
}
