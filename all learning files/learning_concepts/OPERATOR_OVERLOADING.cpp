# include <iostream> 
# include "Colors.hpp"
# include <unistd.h>

struct OPERATOR_OVERLOADING
{
    short i;
    short j;
    OPERATOR_OVERLOADING(short x, short y) : i(x), j(y) {}
    void    DS();

    OPERATOR_OVERLOADING _SET(OPERATOR_OVERLOADING &);
    
};

OPERATOR_OVERLOADING::_SET(OPERATOR_OVERLOADING &last){
    return OPERATOR_OVERLOADING(i + last.i, j + last.j);
}

OPERATOR_OVERLOADING::DS(void){
    printf("OUT : %d\n", this->i);
    printf("JUT : %d\n", this->j);
}

int __HOST__(void){

    usleep(500);


    OPERATOR_OVERLOADING ret(12, -2);
    OPERATOR_OVERLOADING set(12, -2);
    OPERATOR_OVERLOADING res = ret + set;
    res.DS();

    exit(-2);
}