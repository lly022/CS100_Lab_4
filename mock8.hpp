#ifndef __mock8_HPP__
#define __mock8_HPP__

#include "base.hpp"
#include <string>

class EightOpMock: public Base {
    public:
        EightOpMock() { };

        virtual double evaluate() { return 8; }
        virtual std::string stringify() { return "8"; }
};

#endif

~

