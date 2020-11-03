#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"
#include "op.hpp"

TEST(MultTest, NumTimesZero) {
    Op* zero = new Op(0);
    Op* eight = new Op(8);
    Mult* test = new Mult(zero,eight);
    EXPECT_EQ(test->evaluate(), 0);
}

#endif
