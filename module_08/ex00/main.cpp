# include "easyfind.hpp"

const char* Error::what() const throw() {
    return "I can`t find anything 🍌 ";
}

int main(int , char **) {

    try {
        std::vector<int> a;
        a.push_back(10);
        a.push_back(1);
        a.push_back(2);
        a.push_back(25);
        a.push_back(12);
        easyfind(a, 4);
    }
    catch (Error &e) {
        std::cout << e.what() << std::endl;
    }

    puts("-----------------------------------");

    try {
        std::array<int, 5> arr = {1, 1, 55, 55, 'A'};
        easyfind(arr, 55);
    }
    catch (Error &e) {
        std::cout << e.what() << std::endl;
    }

    puts("-----------------------------------");

    try {
        std::string R("hello");
    
        easyfind(R, 'e');
    }
    catch (Error &e) {
        std::cout << e.what() << std::endl;
    }

    puts("-----------------------------------");

    exit(EXIT_SUCCESS);

}