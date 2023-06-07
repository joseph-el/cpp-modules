# include "easyfind.hpp"

const char *Error::what( void ) throw() {
    return "I can`t find anything 🍌 ";
}

int main(int , char **) {

    try {
        std::vector<int> a;
        a.push_back(12);
        a.push_back(2);
        a.push_back(3);
        a.push_back(32);
        easyfind(a, 12);

    }
    catch (Error &e) {
        std::cout << e.what() << std::endl;
    }


}