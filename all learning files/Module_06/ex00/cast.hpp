# pragma once

# include <iostream>

# define MAX_OF_FLT(X) (X > INT_MAX or X < INT_MIN)
# define MAX_OF_INT(X) (X > __FLT_MAX__ or X < __FLT_MIN__)
# define MAX_OF_DBL(X) (X > __DBL_MAX__ or X < __DBL_MIN__)



class ScalarConverter {

    public :
        ScalarConverter();
        ScalarConverter(const ScalarConverter &);
        ScalarConverter& operator =(const ScalarConverter &);

        static void convert(const std::string &);

        ~ScalarConverter();
};