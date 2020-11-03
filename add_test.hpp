#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "add.hpp"
#include "op.hpp"

TEST(AddTest, NumPlusZero) {
    Op* zero = new Op(0);
    Op* eight = new Op(8);
    Add* test = new Add(zero,eight);
    EXPECT_EQ(test->evaluate(), 8);
}

#endif
