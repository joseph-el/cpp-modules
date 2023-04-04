# pragma once

# include "Contact.hpp"

typedef enum s_user_interput
{
    ADD = (1<<1),
    EXIT = (1<<1),
    SEARCH = (1<<1)
}           t_user_interput;



class phonebook {
    private :
        int     index;
        Contact &contacts;
    public :
        void    adding();
        void    search();
};