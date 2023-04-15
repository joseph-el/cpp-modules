/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 23:52:53 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/15 18:00:33 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# if !defined(_PHONE_BOOK_HPP_)
# define _PHONE_BOOK_HPP_

#include <iostream>
#include <iomanip>
#include <string>

# define MAX_CONTACT 3
# define Display_Contact 2
# define Display_Contacts 1
# define WHITE  "\033[0;37m"

// Macros Utils

# define _gnl(obj, input) std::cout << obj; std::getline(std::cin, input); 

# define _cout(CL1, TARGET, label) std::cout << CL1 << TARGET << WHITE << std::endl; goto label;

# define Userdetails(obj) (obj.empty() or obj.find_first_not_of(" \t\n\v\f\r") == std::string::npos)

# define _goto(label) (label & (ADD | SEARCH)) ? (label & ADD ? ({goto add;}) : ({goto search;})) : exit(0);

# define Userinput(obj) (obj.empty() or !which(obj)) ? ({_cout(WHITE, "[🆘]", debut);}) : _goto(which(obj)); 

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
        friend class PhoneBook;
};

class PhoneBook{
    private :
        Contact contact[MAX_CONTACT];
        int   contact_size;
        int   label;
    public :
        PhoneBook() : contact_size(0), label(-1)  {}
        void        Display(int, short);
        void        Switch(void);
        friend void adding(PhoneBook &, std::string &);
        friend void search(PhoneBook phonebook, std::string &);
};

# endif
