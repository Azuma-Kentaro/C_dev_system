/**
 * @file test_four_operations.cc
 * @brief ../src/four_operations.c のユニットテストを行うテストファイル。
 *
 */

#include <gtest/gtest.h>

#include "four_operations.h"

/**
 * @brief add関数のテストを行うためのテストフィクスチャ。
 */
class AddTest : public ::testing::Test
{
protected:
    void SetUp() override
    {
    }

    void TearDown() override
    {
    }
};

/**
 * @brief add(0, 0) が 0 を返すことを確認する。
 */
TEST_F(AddTest, ZeroAndZero)
{
    int8_t a = 0;
    int8_t b = 0;
    int8_t sum = add(a, b);
    EXPECT_EQ(sum, 0);
}

/**
 * @brief add(0, 1) が 1 を返すことを確認する。
 */
TEST_F(AddTest, ZeroAndPositive)
{
    int8_t a = 0;
    int8_t b = 1;
    int8_t sum = add(a, b);
    EXPECT_EQ(sum, 1);
}

/**
 * @brief add(1, 1) が 2 を返すことを確認する。
 */
TEST_F(AddTest, PositiveAndPositive)
{
    int8_t a = 1;
    int8_t b = 1;
    int8_t sum = add(a, b);
    EXPECT_EQ(sum, 2);
}

/**
 * @brief add(127, 1) がオーバーフローして -128 を返すことを確認する。
 */
TEST_F(AddTest, PositiveOverflow)
{
    int8_t a = 127;
    int8_t b = 1;
    int8_t sum = add(a, b);
    EXPECT_EQ(sum, -128);
}

/**
 * @brief add(0, -1) が -1 を返すことを確認する。
 */
TEST_F(AddTest, ZeroAndNegative)
{
    int8_t a = 0;
    int8_t b = -1;
    int8_t sum = add(a, b);
    EXPECT_EQ(sum, -1);
}

/**
 * @brief add(-1, -1) が -2 を返すことを確認する。
 */
TEST_F(AddTest, NegativeAndNegative)
{
    int8_t a = -1;
    int8_t b = -1;
    int8_t sum = add(a, b);
    EXPECT_EQ(sum, -2);
}

/**
 * @brief add(-128, -1) がオーバーフローして 127 を返すことを確認する。
 */
TEST_F(AddTest, NegativeOverflow)
{
    int8_t a = -128;
    int8_t b = -1;
    int8_t sum = add(a, b);
    EXPECT_EQ(sum, 127);
}

/**
 * @brief add(1, -1) が 0 を返すことを確認する。
 */
TEST_F(AddTest, PositiveAndNegativeWithSameAbsolute)
{
    int8_t a = 1;
    int8_t b = -1;
    int8_t sum = add(a, b);
    EXPECT_EQ(sum, 0);
}

/**
 * @brief add(2, -1) が 1 を返すことを確認する。
 */
TEST_F(AddTest, PositiveAndNegativeWithPositiveAbsoluteLarger)
{
    int8_t a = 2;
    int8_t b = -1;
    int8_t sum = add(a, b);
    EXPECT_EQ(sum, 1);
}

/**
 * @brief add(1, -2) が -1 を返すことを確認する。
 */
TEST_F(AddTest, PositiveAndNegativeWithNegativeAbsoluteLarger)
{
    int8_t a = 1;
    int8_t b = -2;
    int8_t sum = add(a, b);
    EXPECT_EQ(sum, -1);
}
