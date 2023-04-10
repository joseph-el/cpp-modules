# include <iostream>
#define __HOST__ main

struct model{char even[10]; int index;};

class CARS{ // main Class
    protected :
        struct model *md;
        int index;
    public :
        virtual void DS();
};

class DACIA : public CARS{
    private :
        bool    f_set;
    public :
         void  DS();
};

class BMW : public CARS{
    private :
        bool f_ret;
    public :
        void  DS();
};

void CARS::DS(void)  {
    std::cout << "Main Class" << std::endl;
}

void DACIA::DS(void)  {
    std::cout << "Dacia Legend" << std::endl;
}

void BMW::DS(void) {
    std::cout << "BMW BOOM" << std::endl;
}

int __HOST__(){
    
    CARS *CAR1 = new CARS();
    CARS *CAR2 = new DACIA();
    CARS *CAR3 = new BMW();

    
    CAR1->DS();
    CAR2->DS();
    CAR3->DS();

    return (EXIT_SUCCESS);
}