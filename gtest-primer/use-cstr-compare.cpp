// use-cstr-compare.cpp
#include <gtest/gtest.h>

TEST(TestPrimer,UseCStringCompare) {
    const char* str1 = "hello world";
    const char* str2 = "Hello World";

    EXPECT_STRCASEEQ(str1,str2);
    EXPECT_EQ(str1,str2);
}
