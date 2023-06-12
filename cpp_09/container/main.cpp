# include <iostream>

struct s_date 
{
    std::string lo;
    int c;
};

typedef struct s_date t_d;


t_d ret()
{
    t_d r;

    r.c = 12;
    r.lo = std::string("HHH");

    return r;
}



int main() {

    t_d bb = ret();

    std::cout << "check " << bb.lo << std::endl;
    std::cout << "BB " << bb.c << std::endl;





}