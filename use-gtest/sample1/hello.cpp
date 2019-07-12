#include <gtest/gtest.h>
using namespace testing;
TEST(SUITE1,CASE1) {
    int a = 5;
    ASSERT_EQ(a,5);
}
int main(int argc, char *argv[]) {
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}