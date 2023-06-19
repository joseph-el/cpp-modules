# include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &) {}
ScalarConverter& ScalarConverter::operator = (const ScalarConverter &) {return *this;}

bool    pseudoLiterals(_st target) {

    short ret;

    ret =   (target == "-inff") * 1 + \
            (target == "+inff") * 1 + \
            (target ==  "nanf") * 1;
    if (ret) 
        return target.pop_back(), true;
    ret =   (target == "+inf" ) * 1 + \
            (target == "-inf" ) * 1 + \
            (target ==  "nan" ) * 1;
    return (!ret ? false : true); 
}

bool    is_char(_st ret) {
    return ( ret.length() == 1 and isprint(ret[0]) );
}

bool    parse(_st ret, int &ValueofInt, char &ValueofChar, float &ValueofFloat, double &ValueofDouble) {

    short   remember  = 0;
    char    *endl;

    ValueofDouble = strtod(ret.c_str(), &endl);
    is_char(ret) ? ValueofChar = ret[0], ValueofDouble = static_cast<double>(ValueofChar) :  ValueofChar = -1;
    ValueofInt    = static_cast<int>(ValueofDouble);
    ValueofFloat  = static_cast<float>(ValueofDouble);

    if ( is_char(ret) )
        return ( true );
    
    return (remember > 1 or  MAX_OF_INT(ValueofDouble) ? false : true );
}

void    ScalarConverter::convert(_st Theformat)
{
    int ValueofInt;
    char ValueofChar;
    float ValueofFloat;
    double ValueofDouble;
    bool   Error;

    Error = parse(Theformat, ValueofInt, ValueofChar, ValueofFloat, ValueofDouble);

    if (!Error)
        std::cout << "Error Convert !" << std::endl;
    else {
        std::cout << "char: ";
        if (!isprint(ValueofInt) and ValueofChar == -1)
            std::cout << "Non displayable" << std::endl;
        else 
            std::cout << static_cast<char>(ValueofInt) << std::endl;
        std::cout << "int: " << ValueofInt << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(2) << ValueofFloat << "f\n";
        std::cout << "Double: " << ValueofDouble << std::endl;
    }
}