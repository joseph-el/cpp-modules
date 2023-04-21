# include "Colors.hpp"
# include <iostream>
# include <string>

using namespace std;

class Vec {
    private :
        int a;
        int b;
    public :
        Vec() : a(2), b(3) {}
        Vec(int _a, int _s) : a(_a) , b(_s) {}

        void Ds(void){
            cout << a << endl << b << endl;
        }

        Vec operator ++(){ // prefix
            ++a; ++b;
            return (Vec(a, b));
        }

        Vec operator ++(int){ //postFix
            a++, b++;
            return (Vec(a, b));
        }
        bool operator + (const Vec &ther) {
            a += ther.a;
            b += ther.b; 
            return (0);
        }

};


int main(void)
{
    Vec ret1(2, 3);
    Vec set;


    // set = ++ret; // prefix
    set = ret1++;
    bool res = set + ret1;
    if (res)
        set.Ds();
    else
        std::cout << "Ze\n"; 

    // set.Ds();

}