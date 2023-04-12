# include <iostream>
# include "Colors.hpp"
# include <string>

struct VEC{
    int i;
    int j;
};

struct meme{
    private :
        int set;
        int ret;
        mutable int offset;
    public :
        short uf_sattus;
        meme(int f, int l) : set(f), ret(l) {}
        void DS () const;
};

void meme::DS(void) const{

    {
        // DS fucnt cont that mean can`t edit to variable of meme Class
        // uf_sattus = 12; error compiler
        /**
         * @brief  Using @param _mutable_____DS_FUNC_CAN_EDIT_TO_OFFSET_VAR__INSIDE_CONST_FUNC
         */
        offset = -1; // No error compiler
    }

    std::cout << this->set << std::endl;
    std::cout << this->ret << std::endl;
}

int __HOST__(){

    struct meme MyStruct(42, -42) ;

    MyStruct.DS();


    return (0);

    int _MAX_ = -42;
    const struct VEC ret = {12, 12};

    int *ptr = new int;
    {
        // const int *ptr = new int; 
        // int* const ptr = new int;
        *ptr = 42;
        ptr = &_MAX_;
    }
    exit(-2);
}