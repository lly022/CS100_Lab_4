#ifndef __mock7_HPP__
#define __mock7_HPP__

#include "base.hpp"
#include <string>

class SevenOpMock: public Base {
    public:
        SevenOpMock() { };

        virtual double evaluate() { return 7.5; }
        virtual std::string stringify() { return "7.5"; }
};

#endif

