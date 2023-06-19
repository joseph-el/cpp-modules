# include "Colors.hpp"
# include <iostream>
# include <string>
# include <unistd.h>

class UNK{
    public :
        std::string unk;

    public:
        UNK();
        UNK(const std::string &, int);
        int i;
};

UNK::UNK(const std::string &target, int fp){
    unk = target;
    i = fp;
    std::cout << GREEN << "INIT BY CONSTRUCTOR ()" << WHITE << std::endl;
}

UNK::UNK(){
    std::cout << RED << "INIT BY CONSTRUCTOR DEFAULT" << WHITE << std::endl;
    unk = "HALA MADRID";
    // i:2;
    i = 10;
}

struct Member{
    private :
        std::string s_name;
        std::string t_name;
        int taille;
    public :

        Member() 
        : s_name("DEXTER"), t_name("JOSEPH"), taille(18) {}
        Member(const std::string &N1, const std::string &N2, int pos)
        : s_name(N1), t_name(N2), taille(pos) {}
        friend void DS(struct Member &);
};

typedef struct Member t_mem;

void DS(t_mem &target){
    using namespace std;

    puts(GREEN"DS FUNCT"WHITE);
    std::cout << target.s_name << endl;
    cout << target.t_name << endl;
    cout << target.taille << endl;
}


int __HOST__(){
    usleep(1000);

    t_mem Mystruct_1;
    t_mem Mystruct_2("LINA", "JOHEN", (int)sizeof(18));

    DS(Mystruct_1);
    puts("---------------");
    DS(Mystruct_2);


    return (1);

    usleep(500);

    UNK ret;
    UNK set("Joseph, EL IDRISSI", 23);

    printf(RED"OPP-RET : %s -- %d\n"WHITE, ret.unk.c_str(), ret.i);
    puts("");
    printf(YELLOW"OPP-SET : %s -- %d\n"WHITE, set.unk.c_str(), set.i);

    exit(-2);
}