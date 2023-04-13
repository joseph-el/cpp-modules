# include "main.hpp"
# include "../learning_concepts/Colors.hpp"

# define GOTO(label) (label & (ADD | SEARCH)) ? (label & ADD : goto add ? goto search) : exit(EXIT_SUCCESS); 

# define interput(obj, empty) (empty or !which(obj)) ? _cout(RED, "INV input [😃]", WHITE, label): GOTO(which(obj));

# define user_information(obj) (obj == "" or obj.find_first_not_of(" \t\n\v\f\r") == std::string::npos)

# define _gnl(obj, input) std::cout << obj << std::flush; std::getline(std::cin, input);

short which(const std::string interput){
    
    short ret = (interput == "ADD") * ADD +
                (interput == "EXIT") * EXIT +
                (interput == "SEARCH") * SEARCH;
    if (ret & ~(ADD | SEARCH | EXIT))
        return (UNKNOWN);
    return (ret);
}

void Contact::set(const std::string input, short flag)
{
    if (flag & FIRSTNAME)
        this->f_name = input;
    else if (flag & LASTNAME)
        this->l_name = input;
    else if (flag & NICKNAME)
        this->nickname = input;
    else if (flag & PHONE_NUMBER)
        this->phone_number = input;
    else
        this->darkest_secre = input;
}

void Switch(class PhoneBook &phonebook){
    for (int i = 0; i < MAX_CONTACT; i++)
        phonebook.contact[i] = phonebook[i + 1];
}


void adding(class PhoneBook &phonebook, const std::string intput)
{
    std::string input;

    if (phonebook.contact_size > MAX_CONTACT)
        Switch(phonebook);
    
    f_name :
        _gnl("First Name :", input);
		user_information(input) ? _cout(RED, "IVL 🥲", f_name) : 0;
        phonebook.contact[phonebook.label].set(input, FIRSTNAME);
    
    l_name :
        _gnl("Last Name :", input);
		user_information(input) ? _cout(RED, "IVL 🥲", l_name) : 0;
        phonebook.contact[phonebook.label].set(input, LASTNAME);
    
    nickname :
        _gnl("Nickname :", input);
		user_information(input) ? _cout(RED, "IVL 🥲", nickname) : 0;
        phonebook.contact[phonebook.label].set(input, NICKNAME);
    
    phone_number :
        _gnl("Phone Number :", input);
		user_information(input) ? _cout(RED, "IVL 🥲", phone_number) : 0;
        phonebook.contact[phonebook.label].set(input, PHONE_NUMBER);
    
    darkest_secre :
        _gnl("Darkest Secre :", input);
		user_information(input) ? _cout(RED, "IVL 🥲", darkest_secre) : 0;
        phonebook.contact[phonebook.label].set(input, DARKEST_SECRE);
    phonebook.contact_size ++;

    phonebook.label > MAX_CONTACT ? phonebook.label = 0 : phonebook.label = phonebook.contact_size;
}


# define Display_Contacts 1
# define Display_Contact 2

void    Desplay(class PhoneBook phonebook, int index,  short flag)
{
    if (flag & Display_Contact){
        std::cout << "\nFirst NAME : " << phonebook.contact[index] << std::endl;
        std::cout << "Last NAME : " << phonebook.contact[index] << std::endl;
        std::cout << "Nickname : " << phonebook.contact[index] << std::endl;
        std::cout << "Phone Number : " << phonebook.contact[index] << std::endl;
        std::cout << "Darkest Secre : " << phonebook.contact[index] << std::endl; return ;
    }
    std::cout   << std::setw(6) <<  "Index"
                << std::setw(20) <<  "First Name"
                << std::setw(20) << "Last Name"
                << std::setw(30) << "Nickname" << std::endl;
    
    for (int i = 0; i < phonebook.contact_size; i++) 
        std::cout   << std::setw(6) << i
                    << std::setw(20) << phonebook.contact[i].f_name.substr(0, 10);
                    << std::setw(20) << phonebook.contact[i].l_name.substr(0, 10);
                    << std::setw(20) << phonebook.contact[i].nickname.substr(0, 10);;
}

void search(class PhoneBook phonebook)
{
    std::string input;

    if (!phonebook.contact_size){
        std::cout << "empty phone" << std::endl;
        return ;
    }
    debut :
        Desplay(phonebook, 0, Display_Contacts);
        _gnl("Which index :", input);
        for (int i = 0; i < (int)input.length(); i++)
            if (!isdigit(input.c_str[i]))
                _cout(RED, "INC 😝", debut);
        Desplay(phonebook, atoi(input.c_str), Display_Contact);
}


int main(void)
{
    PhoneBook   phonebook;
    std::string input;

    debut :
        !std::getline(std::cin, input) ? exit(1) : 0;
        interput(input, input.empty());
    
    add :
        adding(phonebook, input);
        goto debut;

    search :
        search(phonebook);
        goto debut;
}