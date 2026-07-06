/**
 * @file test_four_operations.cc
 * @brief ../src/four_operations.c のユニットテストを行うテストファイル。
 *
 */

#include <gtest/gtest.h>

#include "four_operations.h"

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

TEST_F(AddTest, AddZeroAndZero)
{
    int8_t a = 0;
    int8_t b = 0;
    int8_t sum = add(a, b);
    EXPECT_EQ(sum, 0);
}
