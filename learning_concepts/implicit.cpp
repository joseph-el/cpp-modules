# include <iostream>
# include "Colors.hpp"
# include <string>


struct implicit
{
    private:    
        short _A_;
        std::string _ST;
    public :
        implicit(const std::string &obj) : _A_(42), _ST(obj) {}
        implicit(short obj) : _A_(obj), _ST("JOSEPH") {}
        void DS(void);
};

void implicit::DS(void){ puts(""); printf(YELLOW"OK <%d> and <%s>\n"WHITE, this->_A_, this->_ST.c_str()); }

int __HOST__(){
    implicit ret1 = "HELLO";
    ret1.DS();
    implicit ret2(-42);
    ret2.DS();
}