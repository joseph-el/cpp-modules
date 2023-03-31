

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