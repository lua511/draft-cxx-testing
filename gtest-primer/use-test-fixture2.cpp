// use-test-fixture2.cpp
#include <gtest/gtest.h>

class TestPrimerFixture : public ::testing::Test {
public:
    void SetUp() override;
    void TearDown() override;
protected:
    int* _ptrFactor;
};

void TestPrimerFixture::SetUp() {
    _ptrFactor = new int;
    *_ptrFactor = 3;
}

void TestPrimerFixture::TearDown() {
    delete _ptrFactor;
}

TEST_F(TestPrimerFixture,TestAdd) {
    ASSERT_EQ(8,*_ptrFactor+5);
}

TEST_F(TestPrimerFixture,TestMul) {
    ASSERT_EQ(15,*_ptrFactor*5);
}