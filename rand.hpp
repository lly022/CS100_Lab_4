#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
#include <stdlib.h> //for rand() 

class Rand : public Base {
	protected:
		double value;
	public:
		Rand() : Base() {this->value = rand() % 100; }
		virtual double evaluate() {return value; }
		virtual std::string stringify() {return std::to_string(value); }
};
#endif //__RAND_HPP__