# include "main.hpp"
# include "../learning_concepts/Colors.hpp"


# define GOTO(label) (label & (ADD | SEARCH)) ? (label & ADD : goto add ? goto search) : exit(EXIT_SUCCESS); 

# define interput(obj, empty) (empty or !which(obj)) ? _cout(RED, "INV input [😃]", WHITE, label): GOTO(which(obj));


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

void adding(class PhoneBook &phonebook, const std::string intput)
{
    std::string input;

    


    f_name :
        std::getline(std::cin, input);
    l_name :
        std::getline(std::cin, input);
    nickname :
        std::getline(std::cin, input);
    phone_number :
        std::getline(std::cin, input);
    darkest_secre :
        std::getline(std::cin, input);
    phonebook.contact_size ++;
}





int main(void)
{
    PhoneBook   phonebook;
    std::string input;

    debut :
        !std::getline(std::cin, input) ? exit(1) : default;
        interput(input, input.empty());
    
    add :
        adding()
        goto debut;

    search :
        search();
        goto debut;
}