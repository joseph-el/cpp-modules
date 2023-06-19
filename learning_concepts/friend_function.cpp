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
