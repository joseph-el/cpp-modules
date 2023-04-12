# include <iostream>
# include "Colors.hpp"

class s_class {
    private :
        unsigned int _A_:10;
        std::string NAME;
    public :
        //  s_class() : _A_(42), NAME("-<OLD>-") {}
        explicit s_class(const std::string &);
        explicit s_class(int);
    friend void print_implicit(const class s_class &ret);
};

typedef class s_class t_MyL;

s_class::s_class(int target){
    this->_A_ = target;
}

s_class::s_class(const std::string &name){
    this->NAME = name;
}

void print_implicit(const s_class &ret) {
    printf("std::string %s|-->\n", ret.NAME.c_str());
    printf("Unsiged     %u|-->\n", ret._A_);
}



int __HOST__(){

    // s_class ret( 12 , "IN HOST" );

    s_class RT = 22;
    // s_class MT = "HLLLLLLLL";
    // print_implicit();

}