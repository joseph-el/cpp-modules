# include "main.hpp"
# include "learning_concepts/Colors.hpp"

# define GOTO(label) (label & (ADD | SEARCH)) ? (label & ADD : goto add ? goto search) : exit(EXIT_SUCCESS); 

# define interput(OBJ, EMPTY) EMPTY ? goto debut : GOTO(which(OBJ));

# define _cout(CL1, TARGET, CL2) (std::cout << CL1 << TARGET << CL2 << std::endl)

short which(const std::string interput){
    short ret = -1;

    ret = (interput == "ADD") * ADD +
          (interput == "EXIT") * EXIT +
          (interput == "SEARCH") * SEARCH;
    if (ret & ~(ADD | SEARCH | EXIT))
        return (UNKNOWN);
    return (ret);
}

void Contact::set(const std::string &input, short flag)
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

void search(class PhoneBook phonebook) const 
{
    if (!phonebook.contact_size)
        _cout(RED, "EMPTY CONTACT [😃]", WHITE), return ;
    debut :

}

void adding(class PhoneBook &phonebook, const std::string input)
{
    static short User_rem = {0};





    User_rem++;
    User_rem == MAX_CONTACT ? phonebook.label = 0 ; : 0;
}

int main(void)
{
    PhoneBook   phonebook;
    std::string input;

    debut :
        !std::getline(std::cin, input) ? exit(1) : 0;
        interput(input, input.empty());
    Add :
        adding(phonebook, input);
    search :
        search(phonebook);
    goto debut;

}

