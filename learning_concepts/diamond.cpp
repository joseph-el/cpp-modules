# include <iostream>
# include <string>

using namespace std;

class A {
    int x;
    public :
    A() : x(8) {}
        void Ds(void) {
            cout << "From A\n";
        }
};

class B : public A {
    int x;
    public :
    B() : x(81) {}

        void Ds(void) {
            cout << "From B\n";
        }
};

class C : public A {
        int x;
    
    public :
    C() : x(18) {}

        void Ds(void) {
            cout << "From C\n";
        }
};


class D : public B, public C {
    int x;
    public :
    D() : x(-8) {}

        // void Ds(void) {
        //     cout << x;
        //     cout << "\nFrom D\n";
        // }
};

int main()
{
    D d;
    d.A::Ds();
}