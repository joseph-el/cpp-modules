# include <iostream>
# include <stdbool.h>


typedef class s_class
{
    private :
        short ret;
        short get;
        std::string name;
    public :
        void    init();
        void    disp();

    friend void friend_(s_class & class_);
}               t_class;

void    t_class::init(void)
{
    this->get = ENAMETOOLONG;
    this->ret = ENOLINK;
    this->name = (char *)strdup("HEY MY NAME JOSEPH");
}

using namespace std;

void    t_class::disp(void)
{
    std::cout << "Edited " << this->ret << endl;
    std::cout << "JOSEPH " << this->get << endl;
    std::cout << "ORY " << this->name << endl;
}

void    friend_(t_class &js)
{
    js.get = 1337;
    js.ret = 42;
}

int main(void)
{
    t_class ret;

    ret.init();
    ret.disp();
    friend_(ret);
    ret.disp();

    return (EXIT_SUCCESS);
}

# include "class.hpp"

using namespace std;

void    t_class::disp(void)
{
    std::cout << ret << endl;
    if (country & USA)
        std::cout << USA << " USA" << endl;
    else if (country & (ITALY | ISLAND))
        std::cout << (ITALY | ISLAND) << " ERP" << endl;
    t_list  *tmp = list;

    while (tmp)
    {
        std::cout << "-A-|" << tmp->a << "|" << endl;
        std::cout << "-B-|" << tmp->b << "|" << endl;
        std::cout << "-C-|" << (int)tmp->c << "|" << endl;
        tmp = tmp->object;
    }
}

void    t_class::init_()
{
    ret = 42;
    country = USA;
    t_list  *new_s;
    t_list  *new_p;
    new_s = new t_list;
    new_p = new t_list;
    new_s->object = new_p;
    new_p->object = NULL;
    (*new_s).a = 23;
    (*new_s).b = 24;
    (*new_s).c = 25;
    (*new_p).a = 13;
    (*new_p).b = 14;
    (*new_p).c = 15;
    list = new_s;
}

int   main(int argc, char **argv)
{
    t_class ret;
    
    ret.init_();
    ret.disp();

    exit(EXIT_SUCCESS);
}
