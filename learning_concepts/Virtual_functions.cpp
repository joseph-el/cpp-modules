# include <iostream>
# include "Colors.hpp"

struct vec{
    float x,
    y;
};

class set{
    private :
        struct vec *t_new;
        bool    uf_add;
    public :
        set();
        void    DS(void);
};

void set::DS(void){
    std::cout << "INPUT" << std::endl;
    std::cout << "HELLO" << std::endl;
    std::cout << t_new->x << std::endl;
    std::cout << t_new->y << std::endl;
    return ;
}

set::set(){
    t_new = new struct vec;
    t_new->x = 12.12;
    t_new->y = (t_new->x - 4.4);
    std::cout << "EXIT_SUCCESS" << std::endl;
}

int main(){
    set Class;

    Class.DS();

    exit(EXIT_SUCCESS);
}