# include "Colors.hpp"
# include <iostream>

using namespace std;


class CARS {
    protected :
        char *name;
        bool    Ds;
    public :
        void DS(){
            puts("Gare");
        }
};

class BMW : public virtual CARS {
    public :
        void DS() {
            puts("BMW");
        }
};

class MRS : public virtual CARS {
    public :
        void DS(){
            puts("MRC");
        }
};

class DACIA : public MRS, public BMW {
    public :
        void DS(){
            this->name = strdup("NBNBNB");
            puts("DACIA");
            puts(this->name);
        }
};

int __HOST__() {

    DACIA *R = new DACIA();
    CARS *S = new BMW();

    R->DS();
    S->DS();


}
