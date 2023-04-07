# include <iostream>
# include "Colors.hpp"
# include <unistd.h>
# include <string.h>

static short _S_;

class UF{
    private :
        static  int _H_;
        static  int _F_;
        int32_t Val_Of_object;

    public :
        UF();
        void    show(int16_t);
        void    set_(int);
        friend bool    last_value(class UF *, class UF *);
        static bool UF_UNDER_NULL();
};

UF::UF(){
    UF::_H_ = 42;
    UF::_F_ = 13;
    UF::Val_Of_object = 1;
}

# if !defined(__OPPCLASS__)
    #define opp_org (1<<2)
    #define opp_cpy (1<<4)
    #define MOVE "\t\t\t\t"
    int UF::_H_ = 0;
    int UF::_F_ = 0;
# endif

bool UF::UF_UNDER_NULL(){
    using namespace std;
    (_H_ > _F_) ? 
        std::cout << RED << strerror(ENOLCK) << endl
    :
        std::cout << YELLOW << strerror(ENOBUFS) << endl;
    return (true);
}

void    UF::show(int16_t opp_flag_showed){
    using namespace std; 
    if (opp_flag_showed & ~(opp_cpy | opp_org))
        return ;
    if (opp_flag_showed & opp_org)
        cout << GREEN;
    else if (opp_flag_showed & opp_cpy)
        cout << YELLOW << endl;
    cout << "_F_ : " << UF::_F_ << endl;
    cout << "_H_ : " << UF::_H_ << endl;
    cout << "Val_Of_object : " << UF::Val_Of_object << endl;
    cout << WHITE << endl;
}

void UF::set_(int __Val_Of_object__){
    UF::_F_ += 1;
    UF::_H_ += 2;
    UF::Val_Of_object += __Val_Of_object__;
}

# include <stdio.h>

bool    last_value(class UF *org, class UF *cpy){
    bool ret = false;
    printf(RED"CHECK ORG VALUES : _H_ : <%d> \t\t _F_ : <%d>\n\n", org->_H_, org->_F_);
    std::cout << WHITE;
    printf(YELLOW"CHECK CPY VALUES : _H_ : <%d> \t\t _F_ : <%d>\n\n", cpy->_H_, cpy->_F_);
    std::cout << WHITE;
    printf(GREEN"CHECK ORG VALUES : Val_Of_object : <%d>\n\n", org->Val_Of_object);
    std::cout << WHITE;
    printf(GREEN"CHECK CPY VALUES : Val_Of_object : <%d>\n\n", cpy->Val_Of_object);
    std::cout << WHITE;
    ret = (org->Val_Of_object == cpy->Val_Of_object);
    return (ret);
}

int main(){

    UF OPPCLASS;
    UF OPPCOPIER;

    short  len = 3;
    do
    {
        OPPCLASS.set_(2);
        OPPCLASS.show(opp_org);
        usleep(420000);
        OPPCOPIER.set_(4);
        OPPCOPIER.show(opp_cpy);
    } while (len--);
    usleep(420000);
    if (last_value(&OPPCLASS, &OPPCOPIER)){
        system("clear");
        std::cout << "YES" << std::endl;
    }
    UF::UF_UNDER_NULL();
    return (EXIT_SUCCESS);
}