# include "Colors.hpp"
# include <iostream>
# include <unistd.h>

class VEC{
    private :
        std::string name;
        short score;
    public :
        int i;
    friend int __HOST__(void);
};

int __HOST__(void){
    usleep(450);
    VEC ret;
    ret.i = 10;
    ret.name = "STD";
    ret.score = &'1';
    exit(-2);
}