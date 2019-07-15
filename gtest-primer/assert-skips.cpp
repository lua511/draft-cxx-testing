// assert-skips.cpp
#include <gtest/gtest.h>

TEST(TestPrimer,AssertSkips) {
    ASSERT_TRUE(3==5);
    ASSERT_TRUE(4==6);
}
