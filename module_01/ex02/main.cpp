# include <iostream>

int main(void) {

    std::string variable = std::string("HI THIS IS BRAIN");
    std::string *stringPTR = &variable;
    std::string &stringREF = variable;
    
    std::cout << "The memory address of the string variable : " << &variable << std::endl;
    std::cout << "The memory address held by stringPTR.     : " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF.     : " << &stringREF << std::endl;

    std::cout << "----------------------------------------------------------" << std::endl;
    
    std::cout << "The value of the string variable   : " << variable << std::endl;
    std::cout << "The value pointed to by stringPTR  : " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF. : " << stringREF << std::endl;
    
    return (EXIT_SUCCESS);
}