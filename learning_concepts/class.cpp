# include <iostream>
# include <stdlib.h>
# include <errno.h>
# include <stdalign.h>
# include <sandbox.h>
# include <stdio.h>


typedef struct s_list
{
    short   a;
    int32_t b;
    int8_t  c;
    struct s_list *object;
}               t_list;

typedef enum s_country
{
    USA = (1<<1),
    ISLAND = (1<<2),
    ITALY = (1<<3),
    RUSSIAN = (1<<4)
}               t_country;

typedef class s_Class
{
    private :
    short       ret;
    t_country   country;
    t_list      *list;

    public :
    void    init_(void);
    // void    set_(int *, int *);
    // void    disp(short *, int16_t& temp);
    void    disp(void);

}               t_class;


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