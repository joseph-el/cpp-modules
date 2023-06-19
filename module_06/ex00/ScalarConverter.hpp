# pragma once

# include <iostream>
# include <limits>
# include <cctype>
# include <iomanip>
#include  <errno.h>


# define _st std::string &
# define MAX_OF_INT(X) ( X > INT_MAX or X < INT_MIN )
# define FATAL std::cout << "invalid parameters 🚨\n"; return 1;

class ScalarConverter {

    public :
        ScalarConverter();
        ScalarConverter(const ScalarConverter &);
        ScalarConverter& operator =(const ScalarConverter &);
        static void convert(_st);

        ~ScalarConverter();
};

bool    is_char(_st);
bool    pseudoLiterals(_st);
bool    parse(_st ret, int &, char &, float &, double &);
