#include <gtest/gtest.h>

TEST(SUITE,CASE1) {
    EXPECT_TRUE(5 == 6) << "check 5 vs 6";
    ASSERT_FALSE(7 == 8);
    EXPECT_TRUE(4 == 9);
}