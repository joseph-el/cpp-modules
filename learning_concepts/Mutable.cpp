# include <istream>
# include <string>
# include "Colors.hpp"
# include <unistd.h>

struct OPP{
    private :
    const    std::string obj;
    const    std::string offset;
    mutable size_t   count_dpi = {};

    public :
        OPP(){this->___OPP___ = &helper}
        int pr_vt;
        int (*___OPP___)(void *, __STRUCT_HOST__ OPP &);
        std::string &getObj(void) const;
        int count(void) const ;
};


int OPP::count(void) const {

    std::cout << "Cout Func" << std::endl;

    {

        /**
         * @brief Ican`t edit to this->count_dpi;
         * @param USE_mutable_KEYWORD_FOR_EDIT_THIS_VAR_INSIDE_COUT_FUNC
         */
        this->count_dpi++;
    }

    return (true);
}


int helper(void *_pointers, struct OPP &refresences){
    (_pointers) ? _pointers = nullptr : usleep(12);
    refresences.pr_vt = -99;
    return (ENOATTR);
}

std::string &OPP::getObj(void) const{
    return (this->obj);
}


int __HOST__(){

    const struct OPP Myopp;

    Myopp.___OPP___(nullptr, Myopp);
    Myopp.getObj();
}