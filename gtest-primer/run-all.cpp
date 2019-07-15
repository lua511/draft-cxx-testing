// run-all.cpp
#include <gtest/gtest.h>

TEST(TestPrimer,SimpleCase1) {
    SUCCEED();
}

class TestPrimerFixture1 : public ::testing::Test {

};

TEST_F(TestPrimerFixture1,FixtureCase1) {
    FAIL() << "marked by dp";
}

int main(int argc,char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}