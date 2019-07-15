// use-expect-eq.cpp

#include <gtest/gtest.h>

TEST(TestPrimer,UseExpectEq) {
    EXPECT_EQ(3.9999999,4.0000001);
    EXPECT_FLOAT_EQ(3.9999999,4.0000001);
    ASSERT_LT(3.9999999,4.0000001);
    EXPECT_DOUBLE_EQ(3.9999999,4.0000001);
}
