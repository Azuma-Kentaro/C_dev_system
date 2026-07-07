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
 * @brief myadd(0, 0) が 0 を返すことを確認する。
 */
TEST_F(AddTest, ZeroAndZero)
{
    int8_t a = 0;
    int8_t b = 0;
    int8_t sum = myadd(a, b);
    EXPECT_EQ(sum, 0);
}

/**
 * @brief myadd(0, 1) が 1 を返すことを確認する。
 */
TEST_F(AddTest, ZeroAndPositive)
{
    int8_t a = 0;
    int8_t b = 1;
    int8_t sum = myadd(a, b);
    EXPECT_EQ(sum, 1);
}

/**
 * @brief myadd(1, 1) が 2 を返すことを確認する。
 */
TEST_F(AddTest, PositiveAndPositive)
{
    int8_t a = 1;
    int8_t b = 1;
    int8_t sum = myadd(a, b);
    EXPECT_EQ(sum, 2);
}

/**
 * @brief myadd(127, 1) がオーバーフローして -128 を返すことを確認する。
 */
TEST_F(AddTest, PositiveOverflow)
{
    int8_t a = 127;
    int8_t b = 1;
    int8_t sum = myadd(a, b);
    EXPECT_EQ(sum, -128);
}

/**
 * @brief myadd(0, -1) が -1 を返すことを確認する。
 */
TEST_F(AddTest, ZeroAndNegative)
{
    int8_t a = 0;
    int8_t b = -1;
    int8_t sum = myadd(a, b);
    EXPECT_EQ(sum, -1);
}

/**
 * @brief myadd(-1, -1) が -2 を返すことを確認する。
 */
TEST_F(AddTest, NegativeAndNegative)
{
    int8_t a = -1;
    int8_t b = -1;
    int8_t sum = myadd(a, b);
    EXPECT_EQ(sum, -2);
}

/**
 * @brief myadd(-128, -1) がオーバーフローして 127 を返すことを確認する。
 */
TEST_F(AddTest, NegativeOverflow)
{
    int8_t a = -128;
    int8_t b = -1;
    int8_t sum = myadd(a, b);
    EXPECT_EQ(sum, 127);
}

/**
 * @brief myadd(1, -1) が 0 を返すことを確認する。
 */
TEST_F(AddTest, PositiveAndNegativeWithSameAbsolute)
{
    int8_t a = 1;
    int8_t b = -1;
    int8_t sum = myadd(a, b);
    EXPECT_EQ(sum, 0);
}

/**
 * @brief myadd(2, -1) が 1 を返すことを確認する。
 */
TEST_F(AddTest, PositiveAndNegativeWithPositiveAbsoluteLarger)
{
    int8_t a = 2;
    int8_t b = -1;
    int8_t sum = myadd(a, b);
    EXPECT_EQ(sum, 1);
}

/**
 * @brief myadd(1, -2) が -1 を返すことを確認する。
 */
TEST_F(AddTest, PositiveAndNegativeWithNegativeAbsoluteLarger)
{
    int8_t a = 1;
    int8_t b = -2;
    int8_t sum = myadd(a, b);
    EXPECT_EQ(sum, -1);
}


/**
 * @brief sub関数のテストを行うためのテストフィクスチャ。
 */
class SubTest : public ::testing::Test
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
 * @brief mysub(0, 0) が 0 を返すことを確認する。
 */
TEST_F(SubTest, ZeroAndZero)
{
    int8_t a = 0;
    int8_t b = 0;
    int8_t res = mysub(a, b);
    EXPECT_EQ(res, 0);
}

/**
 * @brief mysub(0, 1) が -1 を返すことを確認する。
 */
TEST_F(SubTest, ZeroAndPositive)
{
    int8_t a = 0;
    int8_t b = 1;
    int8_t res = mysub(a, b);
    EXPECT_EQ(res, -1);
}

/**
 * @brief mysub(1, 1) が 0 を返すことを確認する。
 */
TEST_F(SubTest, PositiveAndPositiveWithSameAbsolute)
{
    int8_t a = 1;
    int8_t b = 1;
    int8_t res = mysub(a, b);
    EXPECT_EQ(res, 0);
}

/**
 * @brief mysub(2, 1) が 1 を返すことを確認する。
 */
TEST_F(SubTest, PositiveAndPositiveWithFirstOperandLarger)
{
    int8_t a = 2;
    int8_t b = 1;
    int8_t res = mysub(a, b);
    EXPECT_EQ(res, 1);
}

/**
 * @brief mysub(1, 2) が -1 を返すことを確認する。
 */
TEST_F(SubTest, PositiveAndPositiveWithSecondOperandLarger)
{
    int8_t a = 1;
    int8_t b = 2;
    int8_t res = mysub(a, b);
    EXPECT_EQ(res, -1);
}

/**
 * @brief mysub(127, -1) がオーバーフローして -128 を返すことを確認する。
 */
TEST_F(SubTest, PositiveOverflow)
{
    int8_t a = 127;
    int8_t b = -1;
    int8_t res = mysub(a, b);
    EXPECT_EQ(res, -128);
}

/**
 * @brief mysub(0, -1) が 1 を返すことを確認する。
 */
TEST_F(SubTest, ZeroAndNegative)
{
    int8_t a = 0;
    int8_t b = -1;
    int8_t res = mysub(a, b);
    EXPECT_EQ(res, 1);
}

/**
 * @brief mysub(-1, -1) が 0 を返すことを確認する。
 */
TEST_F(SubTest, NegativeAndNegativeWithSameAbsolute)
{
    int8_t a = -1;
    int8_t b = -1;
    int8_t res = mysub(a, b);
    EXPECT_EQ(res, 0);
}

/**
 * @brief mysub(-1, -2) が 1 を返すことを確認する。
 */
TEST_F(SubTest, NegativeAndNegativeWithFirstOperandLarger)
{
    int8_t a = -1;
    int8_t b = -2;
    int8_t res = mysub(a, b);
    EXPECT_EQ(res, 1);
}

/**
 * @brief mysub(-2, -1) が -1 を返すことを確認する。
 */
TEST_F(SubTest, NegativeAndNegativeWithSecondOperandLarger)
{
    int8_t a = -2;
    int8_t b = -1;
    int8_t res = mysub(a, b);
    EXPECT_EQ(res, -1);
}

/**
 * @brief mysub(-128, 1) がオーバーフローして 127 を返すことを確認する。
 */
TEST_F(SubTest, NegativeOverflow)
{
    int8_t a = -128;
    int8_t b = 1;
    int8_t res = mysub(a, b);
    EXPECT_EQ(res, 127);
}

/**
 * @brief mysub(1, -1) が 2 を返すことを確認する。
 */
TEST_F(SubTest, PositiveAndNegative)
{
    int8_t a = 1;
    int8_t b = -1;
    int8_t res = mysub(a, b);
    EXPECT_EQ(res, 2);
}


/**
 * @brief mul関数のテストを行うためのテストフィクスチャ。
 */
class MulTest : public ::testing::Test
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
 * @brief mymul(0, 5) が 0 を返すことを確認する。
 */
TEST_F(MulTest, ZeroAndPositive)
{
    int8_t a = 0;
    int8_t b = 5;
    int8_t res = mymul(a, b);
    EXPECT_EQ(res, 0);
}

/**
 * @brief mymul(0, -5) が 0 を返すことを確認する。
 */
TEST_F(MulTest, ZeroAndNegative)
{
    int8_t a = 0;
    int8_t b = -5;
    int8_t res = mymul(a, b);
    EXPECT_EQ(res, 0);
}

/**
 * @brief mymul(2, 3) が 6 を返すことを確認する。
 */
TEST_F(MulTest, PositiveAndPositive)
{
    int8_t a = 2;
    int8_t b = 3;
    int8_t res = mymul(a, b);
    EXPECT_EQ(res, 6);
}

/**
 * @brief mymul(-2, -3) が 6 を返すことを確認する。
 */
TEST_F(MulTest, NegativeAndNegative)
{
    int8_t a = -2;
    int8_t b = -3;
    int8_t res = mymul(a, b);
    EXPECT_EQ(res, 6);
}

/**
 * @brief mymul(2, -3) が -6 を返すことを確認する。
 */
TEST_F(MulTest, PositiveAndNegative)
{
    int8_t a = 2;
    int8_t b = -3;
    int8_t res = mymul(a, b);
    EXPECT_EQ(res, -6);
}

/**
 * @brief mymul(127, 2) がオーバーフローして -2 を返すことを確認する。
 */
TEST_F(MulTest, PositiveOverflow)
{
    int8_t a = 127;
    int8_t b = 2;
    int8_t res = mymul(a, b);
    EXPECT_EQ(res, -2);
}


/**
 * @brief div関数のテストを行うためのテストフィクスチャ。
 */
class DivTest : public ::testing::Test
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
 * @brief mydiv(0, 5) が 0 を返すことを確認する。
 */
TEST_F(DivTest, ZeroAndPositive)
{
    int8_t a = 0;
    int8_t b = 5;
    int8_t res = mydiv(a, b);
    EXPECT_EQ(res, 0);
}

/**
 * @brief mydiv(0, -5) が 0 を返すことを確認する。
 */
TEST_F(DivTest, ZeroAndNegative)
{
    int8_t a = 0;
    int8_t b = -5;
    int8_t res = mydiv(a, b);
    EXPECT_EQ(res, 0);
}

/**
 * @brief mydiv(6, 2) が 3 を返すことを確認する。
 */
TEST_F(DivTest, PositiveAndPositive)
{
    int8_t a = 6;
    int8_t b = 2;
    int8_t res = mydiv(a, b);
    EXPECT_EQ(res, 3);
}

/**
 * @brief mydiv(5, 2) が 2 を返すことを確認する。
 */
TEST_F(DivTest, PositiveAndPositiveWithRemainder)
{
    int8_t a = 5;
    int8_t b = 2;
    int8_t res = mydiv(a, b);
    EXPECT_EQ(res, 2);
}

/**
 * @brief mydiv(-6, 2) が -3 を返すことを確認する。
 */
TEST_F(DivTest, NegativeAndPositive)
{
    int8_t a = -6;
    int8_t b = 2;
    int8_t res = mydiv(a, b);
    EXPECT_EQ(res, -3);
}

/**
 * @brief mydiv(6, -2) が -3 を返すことを確認する。
 */
TEST_F(DivTest, PositiveAndNegative)
{
    int8_t a = 6;
    int8_t b = -2;
    int8_t res = mydiv(a, b);
    EXPECT_EQ(res, -3);
}

/**
 * @brief mydiv(-6, -2) が 3 を返すことを確認する。
 */
TEST_F(DivTest, NegativeAndNegative)
{
    int8_t a = -6;
    int8_t b = -2;
    int8_t res = mydiv(a, b);
    EXPECT_EQ(res, 3);
}

/**
 * @brief mydiv(-5, -2) が 2 を返すことを確認する。
 */
TEST_F(DivTest, NegativeAndNegativeWithRemainder)
{
    int8_t a = -5;
    int8_t b = -2;
    int8_t res = mydiv(a, b);
    EXPECT_EQ(res, 2);
}

/**
 * @brief mydiv(6, 0) が異常終了することを確認する。
 */
TEST_F(DivTest, DivisionByZero)
{
    EXPECT_DEATH(
        {
            int8_t a = 6;
            int8_t b = 0;
            mydiv(a, b);
        },
        ""
    );
}
