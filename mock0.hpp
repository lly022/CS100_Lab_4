#ifndef __mock0_HPP__
#define __mock0_HPP__

#include <string>
#include "base.hpp"


class ZeroOpMock: public Base {
    public:
        ZeroOpMock() { };

        virtual double evaluate() { return 0; }
        virtual std::string stringify() { return "0"; }
};

#endif
