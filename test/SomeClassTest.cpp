#include "gtest/gtest.h"
#include "SomeClass.hpp"

class SomeClassTest: public testing::Test {
public:
   SomeClass someClass;
};

TEST_F(SomeClassTest, shouldReturnOne) {
   ASSERT_EQ(1, someClass.someMethod());
}

TEST_F(SomeClassTest, failOnPurposeOfTestingCmakeConfiguration) {
    FAIL();
}

