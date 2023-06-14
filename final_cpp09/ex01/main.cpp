# include "RPN.hpp"

int main( int argc, char **argv) {

    int    result;

    if (argc != 2)
        {ERROR_MSG}

    result = rpn(*++argv);
    if (result == -1)
        {ERROR_MSG}
    else
        std::cout << result << std::endl;

    exit(EXIT_SUCCESS);
}