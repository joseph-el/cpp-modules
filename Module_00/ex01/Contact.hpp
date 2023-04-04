# if !defined(_CONTACT_HPP)
# define _CONTACT_HPP

#pragma once

# include <iostream>

# define MAX_CONTACTS 8

typedef struct s_data {
    std::string f_name;
    std::string l_name;
    std::string nickname;
    std::string darkest_secre;
}               t_data;

class Contact{
    private :
        t_data Contatc_info[MAX_CONTACTS];
    public :
        void adding(Contact &);
};








# endif
