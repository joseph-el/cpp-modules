# pragma once

# include <iostream>
# include <limits>
# include <cctype>
# include <iomanip>
#include  <errno.h>

# define MAX_OF_INT(X) ( X > INT_MAX or X < INT_MIN )

# define _st std::string &
# define FATAL std::cout << "invalid parameters 🚨\n"; return 1;

enum flags {

    INT_ERROR = (1<<1),
    INT_NUMBER = (1<<2),
    FLOAT_ERROR = (1<<3),
    FLOAT_NUMBER = (1<<4),
    DOUBLE_ERROR = (1<<5),
    DOUBLE_NUMBER = (1<<6),
    RANGE_ERROR = ( 1<< 7)

};

class ScalarConverter {

    public :
        ScalarConverter();
        ScalarConverter(const ScalarConverter &);
        ScalarConverter& operator =(const ScalarConverter &);
        static void convert(std::string &);

        ~ScalarConverter();
};