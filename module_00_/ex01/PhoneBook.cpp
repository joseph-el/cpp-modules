# include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contact_size(0), label(-1)  {}

std::string Contact::set(const std::string& input, short flag, bool To_get)
{
    if (flag & FIRSTNAME)
        if (To_get) return (f_name); else this->f_name = input;
    else if (flag & LASTNAME)
        if (To_get) return (f_name); else this->l_name = input;
    else if (flag & NICKNAME)
        if (To_get) return (f_name); else this->nickname = input;
    else if (flag & PHONE_NUMBER)
        if (To_get) return (f_name); else this->phone_number = input;
    else if (flag & DARKEST_SECRE){
        if (To_get) return (darkest_secre); else this->darkest_secre = input;}
    return (input);
}

void PhoneBook::Switch(void) {
    contact_size += (contact_size < MAX_CONTACT) ? 1 : 0;
    label = (label == MAX_CONTACT - 1) ? 0 : label + 1;
}

void PhoneBook::adding(PhoneBook &phonebook, std::string &input)
{
    f_name:
        _gnl("First Name : ", input);
        if (Userdetails(input)) {_cout("[😝]", f_name);}
        phonebook.contact[phonebook.label].set(input, FIRSTNAME, 0);
    l_name:
        _gnl("Last Name : ", input);
        if (Userdetails(input)) {_cout("[😝]", l_name);}
        phonebook.contact[phonebook.label].set(input, LASTNAME, 0);
    nickname :
        _gnl("nickname : ", input);
        if (Userdetails(input)) {_cout("[😝]", nickname);}
        phonebook.contact[phonebook.label].set(input, NICKNAME, 0);
    phone_number :
        _gnl("phone_number : ", input);
        if (Userdetails(input)) {_cout("[😝]", phone_number);}
        phonebook.contact[phonebook.label].set(input, PHONE_NUMBER, 0);
    darkest_secre :
        _gnl("darkest_secre : ", input);
        if (Userdetails(input)) {_cout("[😝]", darkest_secre);}
        phonebook.contact[phonebook.label].set(input, DARKEST_SECRE, 0);
}

void PhoneBook::search(PhoneBook phonebook, std::string &input)
{
    if (!phonebook.contact_size) {
        std::cout << "Empty Contact [😤]" <<std::endl;
        return ;
    }
    phonebook.Display(0, Display_Contacts);
    debut :
        _gnl("Which index : ", input);
        for (int i = 0; i < input.length() ; i++)
            if (!isdigit(input[i]))
                {_cout("[😭]", debut);}
        if (input.empty() or std::stoi(input) < 1 or std::stoi(input) > phonebook.contact_size)
            {_cout("[😣]", debut);}
    phonebook.Display(std::stoi(input) - 1, Display_Contact);
}

void PhoneBook::Display(int index, short flag)
{
    if (flag & Display_Contact) {
        std::cout << "\n-----------------[Contact info]-----------------" << std::endl;
        std::cout << "First NAME    : " << contact[index].set("", FIRSTNAME, 1) << std::endl;
        std::cout << "Last NAME     : " << contact[index].set("", LASTNAME, 1) << std::endl;
        std::cout << "Nickname      : " << contact[index].set("", NICKNAME, 1) << std::endl;
        std::cout << "Phone Number  : " << contact[index].set("", PHONE_NUMBER, 1) << std::endl;
        std::cout << "Darkest Secre : " << contact[index].set("", DARKEST_SECRE, 1) << std::endl; 
        std::cout << "------------------------------------------------\n" << std::endl;
        return ;
    }
    std::cout   << std::setfill('-') << std::setw(50) << "" << std::endl;
    std::cout   << std::setfill(' ') << std::setw(5) << "Index" << " | "
                << std::setw(10) << "First" << " | "
                << std::setw(10) << "Last" <<  " | "
                << std::setw(10) << "Nickname" << std::endl;
    std::cout   << std::setfill('-') << std::setw(50) << "" << std::endl;
    for (int i = 0; i < contact_size; i++) 
        std::cout << std::setfill(' ')  << std::setw(5) << i + 1 << " | "
                                        << std::setw(10) << contact[i].set("", FIRSTNAME, 1).substr(0, 10) << " | "
                                        << std::setw(10) << contact[i].set("", LASTNAME, 1).substr(0, 10) << " | "
                                        << std::setw(10) << contact[i].set("", NICKNAME, 1).substr(0, 10) << "."
                                        << std::endl;
}