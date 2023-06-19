# include "PhoneBook.hpp"

short which(const std::string interput){
    
    short ret = (interput == "ADD") * ADD +
                (interput == "EXIT") * EXIT +
                (interput == "SEARCH") * SEARCH;
    if (ret & ~(ADD | SEARCH | EXIT))
        return (UNKNOWN);
    return (ret);
}

int main(void)
{ 
    PhoneBook phonebook;
    std::string input;
    
    debut :
        _gnl(WHITE"Write a command (ADD | SEARCH | EXIT) : ", input);
        Userinput(input);
    
    add :
        phonebook.Switch();
        phonebook.adding(phonebook, input);
        goto debut;
        
    search :
        phonebook.search(phonebook, input);
        goto debut;
}
