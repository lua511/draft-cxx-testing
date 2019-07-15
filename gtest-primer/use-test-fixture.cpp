// use-test-fixture.cpp
#include <gtest/gtest.h>

class TestPrimerFixture : public ::testing::Test {
public:
    void SetUp() override;
protected:
    int _factor;
};

void TestPrimerFixture::SetUp() {
    _factor = 3;
}

TEST_F(TestPrimerFixture,TestAdd) {
    ASSERT_EQ(8,_factor+5);
}

TEST_F(TestPrimerFixture,TestMul) {
    ASSERT_EQ(15,_factor*5);
}