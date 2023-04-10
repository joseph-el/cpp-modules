# include <iostream>

class RET{
    protected :


    public :
                int i;
        int j;
        void set(void);
};

class NET : protected RET{ // when set the (private | protected) , extern function can't acess to public Var in pere
    private :
        int x;
    public :
        void ret(void);
};

void NET::ret(void){
    puts("Iam RET");
}

void RET::set(void){
    puts("Iam SET");
}



void extern_func(NET &obj){
    obj.i = 2;
    obj.j = 1;
    // obj.x = 12;
    printf("%d %d \n", obj.i, obj.j);
}


int main()
{
    NET CL;

    CL.ret();
    extern_func(CL);



}