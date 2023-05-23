# pragma once

# include <iostream>

class ScalarConverter {

    public :
        ScalarConverter();
        ScalarConverter(const ScalarConverter &);
        ScalarConverter& operator =(const ScalarConverter &);

        static void convert(const std::string &);

        ~ScalarConverter();
};