#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include <string>

class Pow : public Base {
        public:
         Pow(Base* val1 ,Base* val2) : Base() {this->val1=val1; this->val2=val2;}
         double evaluate() {
                double num=1;
		if(val2->evaluate()<0){
			for(unsigned i =0; i>val2->evaluate();i--){
			num= num/val1->evaluate();
		}
		}
		else{
			for(unsigned i=0; i<val2->evaluate();i++){
			num*= val1->evaluate();
}
}
		return num;

        }
         std::string stringify() {
                return val1->stringify() + " ** " + val2->stringify();
        }
        private:
         Base* val1;
         Base* val2;
};

#endif
