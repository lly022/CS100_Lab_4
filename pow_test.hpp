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

TEST(PowTest, NumToNum) {
    Op* two = new Op(2);
    Op* eight = new Op(8);
    Pow* test = new Pow(eight,two);
    EXPECT_EQ(test->evaluate(), 64);
}

TEST(PowTest, NegNumToNum) {
    Op* two = new Op(-2);
    Op* three = new Op(3);
    Pow* test = new Pow(two,three);
    EXPECT_EQ(test->evaluate(), -8);
}

TEST(PowTest, NumToNegNum) {
    Op* two = new Op(-2);
    Op* eight = new Op(8);
    Pow* test = new Pow(eight,two);
    EXPECT_EQ(test->evaluate(), (1/64));
}

TEST(PowTest, StringNumToNum) {
    Op* two = new Op(2);
    Op* eight = new Op(8);
    Pow* test = new Pow(eight,two);
    EXPECT_EQ(test->stringify(), "8.000000 ** 2.000000");
}



#endif
