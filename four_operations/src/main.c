/**
 * @file main.c
 * @brief main関数を実装するソースファイル。
 *
 */

#include <stdio.h>

#include "four_operations.h"

int main(int argc, char *argv[])
{
    printf("myadd(1, 2) = %d\n", myadd(1, 2));
    printf("mysub(1, 2) = %d\n", mysub(1, 2));
    printf("mymul(2, 3) = %d\n", mymul(2, 3));
    printf("mydiv(6, 2) = %d\n", mydiv(6, 2));
    return 0;
}
