# if !defined(PHONE_BOOK_HPP)
# define PHONE_BOOK_HPP

#include <string>
#include <iomanip>
#include <iostream>

# define MAX_CONTACT 8
# define Display_Contact 2
# define Display_Contacts 1
# define WHITE  "\033[0;37m"

// Macros Utils

# define _gnl(obj, input) std::cout << obj; std::getline(std::cin, input); if (std::cin.eof()) exit(1);

# define _cout(TARGET, label) std::cout << TARGET << std::endl; goto label;

# define Userdetails(obj) (obj.empty() or obj.find_first_not_of(" \t\n\v\f\r") == std::string::npos)

# define _goto(label) (label & (ADD | SEARCH)) ? (label & ADD ? ({goto add;}) : ({goto search;})) : exit(0);

# define Userinput(obj) (obj.empty() or !which(obj)) ? ({_cout("[🆘]", debut);}) : _goto(which(obj)); 

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
        std::string set(const std::string &, short, bool);
};

class PhoneBook{
    private :
        Contact contact[MAX_CONTACT];
        int   contact_size;
        int   label;
    public :
        PhoneBook();
        void        Display(int, short);
        void        Switch(void);
        void adding(PhoneBook &, std::string &);
        void search(PhoneBook phonebook, std::string &);
};

# endif
