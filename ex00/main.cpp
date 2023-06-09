# include "easyfind.hpp"

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
    catch (const char *ErrorMsg) {
        std::cout << ErrorMsg << std::endl;
    }

    puts("-----------------------------------");

    try {
        std::array<int, 5> arr = {1, 1, 55, 55, 'A'};
        easyfind(arr, 55);
    }
    catch (const char *ErrorMsg) {
        std::cout << ErrorMsg << std::endl;
    }

    puts("-----------------------------------");

    try {
        std::string R("hello");
    
        easyfind(R, 'e');
    }
    catch (const char *ErrorMsg) {
        std::cout << ErrorMsg << std::endl;
    }

    puts("-----------------------------------");

    exit(EXIT_SUCCESS);

}