#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"
#include "pow.hpp"
#include "op.hpp"

TEST(PowTest, NumToZero) {
    Op* zero = new Op(0);
    Op* eight = new Op(8);
    Pow* test = new Pow(eight,zero);
    EXPECT_EQ(test->evaluate(), 1);
}

#endif
