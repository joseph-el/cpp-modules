# include <iostream>

class UU {
    protected :
        int i;
    public :
        void SET(){
            puts("Dd");
            return ;
        }
};

class YY : private UU {
        int y;
    public :
        void ff(){
            puts("$$$");
            i;
        }
};


int main()
{

}