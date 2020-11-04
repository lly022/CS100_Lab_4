#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "sub.hpp"

TEST(SubTest, SubEvaluateNormalValues){
        Op* op1 = new Op(8);
        Op* op2 = new Op(4);
        Sub* test  = new Sub(op1, op2);
        EXPECT_EQ(test->evaluate(), 4);
}

TEST(DivTest, DivStringifyNormalValues){
        Op* op1 = new Op(8);
        Op* op2 = new Op(4);
        Div* test  = new Div(op1, op2);
        EXPECT_EQ(test->stringify(), "8.000000-4.000000");
}


#endif //__SUB_TEST_HPP__
