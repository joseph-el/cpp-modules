# include <iostream>
# include <stdio.h>
# include "Colors.hpp"


struct VEC
{
    int _FI_, _LA_;
    int64_t _LC_:10;
};

class UF{
    protected :
        struct VEC *__mp;
        bool       *mode;
    public :
        UF();
    void (*___leet___)(void);
};

class newClass : public UF{ // when set public i can acess UF VAR and Method
    bool    t_ret;
    public :
        void print_Class();
};

void    newClass::print_Class(void){
    this->t_ret = 1;
    this->__mp->_FI_ = 12;
}

void leet(void){
    using namespace std;
    cout << RED;
    cout << "UP--UP--UP" << endl;
    cout << WHITE;
}

UF::UF(){
    __mp = new struct VEC;
    __mp->_FI_ = 42;
    __mp->_LA_ = -42;
    __mp->_LC_ = 1;
    mode = new bool;
    *mode = false;
    ___leet___ = &leet;
    std::cout << "INIT EXIT_SUCCESS" << std::endl;
}

int main(){
    newClass LOL;
    LOL.___leet___();
}