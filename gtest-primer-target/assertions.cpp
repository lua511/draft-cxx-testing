#include <gtest/gtest.h>

TEST(SUITE,CASE1) {
    EXPECT_EQ(5,6) << "check 5 vs 6";
    ASSERT_EQ(7,8);
    EXPECT_EQ(4,9);
}