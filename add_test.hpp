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

TEST(AddTest, NumPlusNum) {
    Op* one = new Op(1);
    Op* eight = new Op(8);
    Add* test = new Add(one,eight);
    EXPECT_EQ(test->evaluate(), 9);
}

TEST(AddTest, NegNumPlusNum) {
    Op* one = new Op(-1);
    Op* eight = new Op(8);
    Add* test = new Add(one,eight);
    EXPECT_EQ(test->evaluate(), 7);
}

TEST(AddTest, NegNumPlusNegNum) {
    Op* one = new Op(-1);
    Op* eight = new Op(-8);
    Add* test = new Add(one,eight);
    EXPECT_EQ(test->evaluate(), -9);
}

TEST(AddTest, StringNumPlusNum) {
    Op* one = new Op(1);
    Op* eight = new Op(8);
    Add* test = new Add(one,eight);
    EXPECT_EQ(test->stringify(), "1.000000 + 8.000000");
}

TEST(AddTest, StringNegNumPlusNum) {
    Op* one = new Op(-1);
    Op* eight = new Op(8);
    Add* test = new Add(one,eight);
    EXPECT_EQ(test->stringify(), "-1.000000 + 8.000000");
}

TEST(AddTest, StringNegNumPlusNegNum) {
    Op* one = new Op(-1);
    Op* eight = new Op(-8);
    Add* test = new Add(one,eight);
    EXPECT_EQ(test->stringify(), "-1.000000 + -8.000000");
}




#endif
