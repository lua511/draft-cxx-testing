// hello-assert.cpp
#include <gtest/gtest.h>

TEST(TestPrimer,HelloAssert) {
    ASSERT_TRUE(5 == 8);
}
