# include "cast.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &) {}

ScalarConverter& ScalarConverter::operator = (const ScalarConverter &) {
    return (*this);
}

ScalarConverter::~ScalarConverter() {}


# include <limits.h>
# include <cctype>
#include <iomanip>

# define MAX_OF_FLT(X) (X > INT_MAX or X < INT_MIN)
# define MAX_OF_INT(X) (X > __FLT_MAX__ or X < __FLT_MIN__)
# define MAX_OF_DBL(X) (X > __DBL_MAX__ or X < __DBL_MIN__)



void ScalarConverter::convert(const std::string &target) {

    int    ToInt    = std::atoi(target.c_str());
    float  ToFloat  = std::stof(target);
    double ToDouble = std::stod(target);

    target.length() != 1 or isprint(*target.c_str()) ?  std::cout << "char: Non displayable\n" :
                            std::cout << "char: \'" + target + "\'\n";

    MAX_OF_INT(ToInt) ? std::cout << "Int: Non displayable\n" :
                        std::cout << "Int : " << ToInt << std::endl;
    
    MAX_OF_FLT(ToFloat) ? std::cout << "Float: Non displayable\n" :
                        std::cout << "Float : " << std::fixed << std::setprecision(1) << ToFloat << "f" << std::endl;

    MAX_OF_DBL(ToDouble) ? std::cout << "Double: Non displayable\n" :
                        std::cout << "Double : " << ToDouble << std::endl;
}

int main(int argc, char **argv)
{
    if (argc <= 1)
        return (EXIT_FAILURE);

    argv ++;
    ScalarConverter ret;
    ret.convert(std::string(*argv));





}

