#include <iostream>
#include <stdexcept>

class SHOW : public std::exception {
    public :
        const char *what() const throw();
};

const char *SHOW::what() const throw(){
    return "What function !";
}

bool GHEPL( bool mode ) {
    mode ? throw SHOW() : 0;
    return false;
}


int main (int ac, char **atfff) {
    (void)atfff;
    try {
        std::cout << "Main" << std::endl;
        GHEPL(true);
    }
    catch (SHOW &exc) {
        std::cerr << "Err : _-=-_ " << exc.what() << std::endl;
    }
    return -1;
}