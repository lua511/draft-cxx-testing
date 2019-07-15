#include <gtest/gtest.h>

TEST(SUITE,CASE1) {
    EXPECT_EQ(5,6) << "check 5 vs 6";
    ASSERT_LT(7,8);
    EXPECT_GE(4,9);
}