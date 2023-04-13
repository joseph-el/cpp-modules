# if !defined(_MAIN_HPP_)
# define _MAIN_HPP_

# include <iostream>
# include <string>
# include <unistd.h>

# define MAX_CONTACT 8

# define _cout(CL1, TARGET, label) std::cout << CL1 << TARGET << std::endl; goto label;

enum User_interput{
    ADD = (1<<1),
    EXIT = (1<<2),
    SEARCH = (1<<3),
    UNKNOWN = (1<<4)
};

enum personal_info {
    NICKNAME = (1<<1),
    LASTNAME = (1<<2),
    FIRSTNAME = (1<<3),
    PHONE_NUMBER = (1<<4),
    DARKEST_SECRE = (1<<5)
};

class Contact{
    private :
        std::string f_name;
        std::string l_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secre;
    public :
        void set(const std::string, short);
};

class PhoneBook{
    private :
        Contact contact[MAX_CONTACT];
        short   contact_size;
        short   label;
    PhoneBook() : contact_size(0), label(0)  {}
    friend void adding(class PhoneBook &, const std::string);
    friend void search(class PhoneBook &) const;
};



# endif