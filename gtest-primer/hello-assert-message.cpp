// hello-assert-message.cpp
#include <gtest/gtest.h>

TEST(TestPrimer,HelloAssertMessage) {
    ASSERT_TRUE(5 == 8) << "you think 5==8？面对疾风吧！";
}
