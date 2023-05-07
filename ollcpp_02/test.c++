#include <iostream>

class s{

    public:
    int i;
    s(){printf("called\n");}
    ~s(){printf("removed\n");}
};


s f()
{
    s s;
    printf("in the f = %p\n", &s.i);
    return s;
}


int main()
{
    s a;

    
    a  = f();
    printf("%p\n", &a.i);
}