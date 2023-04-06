# include <iostream>
#include "Colors.hpp"

typedef signed long t_short;

struct s_static{
    t_short _H_:POLL_HUP;
    t_short _S_:POLL_HUP;
    t_short _F_:POLL_HUP;
    t_short _E_:POLL_HUP;
};

struct vec1{
    short ret;
    signed short set;
    bool  *call;
    struct s_static *_HAS_ATTRIBUTE;
    static  int s_last;
    struct vec1 (*Uf_Heap)(struct vec1 &, short, int16_t);
};

class vec{
    private :
    struct  vec1 ret;
    static int  s_one;

    public  :
        vec();
        ~vec();
    void static_variable(void);
};

vec::~vec(){

    {
        delete ret._HAS_ATTRIBUTE;
        delete[] ret.call;
        delete
    }
    std::cout << RED"DESTROY | SUCCESS"WHITE << endl;
}

vec::vec(){
    using namespace std;
    {
        this->ret._HAS_ATTRIBUTE = new struct s_static;
        this->ret._HAS_ATTRIBUTE->_F_ = enum {_A_, _B_, _C_, _F_, _E_};
        this->ret._HAS_ATTRIBUTE->_S_ = enum {_A_, _B_, _C_, _F_, _E_};
        this->ret._HAS_ATTRIBUTE->_H_ = enum {_A_, _B_, _C_, _F_, _E_};
        this->ret._HAS_ATTRIBUTE->_E_ = enum {_A_, _B_, _C_, _F_, _E_};
    }
    this->ret.call = new bool[P_PGID];
    *ret.call = true;
    *(ret.call + 1) = false;
    ret.ret = -42;
    ret.set = 42;
    ret.s_last = -1337;
    this->s_one = 1337;
    std::cout << GREEN"INIT | SUCCESS"WHITE << endl;
}


int main(){
    vec Class;

    Class.static_variable();

    return (OFF_MIN);
}