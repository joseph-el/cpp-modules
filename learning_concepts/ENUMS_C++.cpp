# include <iostream>
# include <stdlib.h>
# include <errno.h>
# include <stdalign.h>
# include <sandbox.h>
# include <stdio.h>

class s_class{
    private :
        int i;
        int *j;
        std::string name;
        short   status;
    public :
    s_class(int, short, int *, std::string);
    void    disp();
};

s_class::s_class(int a, short b, int *object, std::string name)
{
    this->i = a;
    this->status = b;
    this->j = object;
    this->name = name;
}

using namespace std;

void s_class::disp(void){
    std::cout << this->i << endl;
    std::cout << this->name << endl;
    std::cout << this->status << endl;
    std::cout << *this->j << endl;
}

int main(void)
{
    int a = 1337;

    s_class ret(12, 42, &a, strdup("JOSEPH HERE"));
    ret.disp();






    exit(EXIT_SUCCESS);
}#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>
