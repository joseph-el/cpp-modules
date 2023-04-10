# include <iostream>
# include <stdio.h>
# include <unctrl.h>
# include <string>
# include "Colors.hpp"

class VEC{
    protected :
        int x;
        float y;
        char *str;
    public :
        int GF;
        void DS(void);
};

class SUB : private VEC{
    private :
        int Js;
        wchar_t key;
    public :
        SUB();
        void NET(void);
};

SUB::SUB(){
    Js = 12;
    key = 'A';
    GF = 10;
    this->DS();
}

void    VEC::DS(void){
    this->x = 42;
    this->y = 3.2;
    str = strdup("HALA 3.2");
}

void SUB::NET(void){
    using namespace std;
    cout << RED << "-----PRINT-----" << endl;
    cout << GREEN << "SUB Js VAR \t" << this->Js << endl << "SUB key VAR \t" << this->key << endl;
    cout << GREEN << "PERE x VAR \t" << this->x  << endl << "PERE y VAR \t" << this->y << endl << "PERE str VAR \t" << str << endl;
    cout << WHITE;
}

int main(){

    SUB MyClass;

    MyClass.NET();
    {  // check size of Class
        std::cout << "VEC size : " << sizeof(VEC) << std::endl;
        std::cout << "SUB size : " << sizeof(SUB) << std::endl;
    }
    exit(EXIT_SUCCESS);
}