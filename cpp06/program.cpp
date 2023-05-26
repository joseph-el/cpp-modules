# include "ScalarConverter.hpp"
# define pr(c) std::cout << c << std::endl;

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &) {}

ScalarConverter& ScalarConverter::operator = (const ScalarConverter &) {return *this;}

ScalarConverter::~ScalarConverter() {}

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
    return ( ret.length() == 1 and isalpha(ret[0]) );
}

// bool Is_Number(_st ret, int &ValueofInt, char &ValueofChar,\
//     float &ValueofFloat, double &ValueofDouble) {
//     short remember  = 0;
//     ValueofInt   = std::strtol(ret.c_str(), NULL, 10);
//     ValueofChar  = is_char(ret) ? ret[0] : -1;
//     ValueofFloat = static_cast<float>(ValueofDouble);
//     if (is_char(ret))
//         return (false);
//     for (int i = *ret.c_str() & '+' | '-' ? 1 : 0; ret[i]; i++)
//         if (!isdigit(ret[i]) && ret[i] != '.')
//             return (false);
//         else if (ret[i])
//             remember += (ret[i] == '.');
//     if (remember > 1)
//             return (false);
//     if (errno == ERANGE || MAX_OF_INT(ValueofInt) || isnan(ValueofFloat) \
//                         || isinf(ValueofFloat) || isnan(ValueofDouble) || isinf(ValueofDouble))
//         return (false);
//     return (true);
// }

bool    Is_Number(_st ret, int &ValueofInt, char &ValueofChar, \
    float &ValueofFloat, double &ValueofDouble) {


    short   remember  = 0;
    char    *endl;

    ValueofDouble = strtod(ret.c_str(), &endl);
    ValueofChar   = is_char(ret) ? ret[0] : -1;
    ValueofInt    = static_cast<int>(ValueofDouble);
    ValueofFloat  = static_cast<float>(ValueofDouble);
    if (is_char(ret)) {
        std::cout << "IM H" << std::endl;
        return (true);
    }
    for (int i = ret[0] == '+' or ret[0] == '-' ? 1 : 0; ret[i]; i++)
        if (!isdigit(ret[i]) && ret[i] != '.')
            return (false);
        else if (ret[i])
            remember += (ret[i] == '.');
    if (remember > 1)
            return (false);
    
    if (errno == ERANGE || MAX_OF_INT(ValueofInt) || isnan(ValueofFloat) \
                        || isinf(ValueofFloat) || isnan(ValueofDouble) || isinf(ValueofDouble) || endl[0])
        return (false);
    return true;
}



void    ScalarConverter::convert(_st Theformat)
{
    int ValueofInt;
    char ValueofChar;
    float ValueofFloat;
    double ValueofDouble;
    bool   Error;

    Error = Is_Number(Theformat, ValueofInt, ValueofChar, ValueofFloat, ValueofDouble);

    if (!Error)
        std::cout << "Error Convert !" << std::endl;
    else {
        std::cout << "char: ";
        if (ValueofChar == -1 && !isprint(ValueofInt))
            std::cout << "impossible" << std::endl;
        else
            std::cout << static_cast<char>(ValueofInt) << std::endl;
        std::cout << "int: " << ValueofInt << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(2) << ValueofFloat << "f\n";
        std::cout << "Double: " << ValueofDouble << std::endl;
    }
}

int main(int argc, char **argv)
{
    ScalarConverter object;

    if (argc != 2 or !*argv[1])
        {FATAL};
    std::string ret(*++argv);

    try {
        pseudoLiterals(ret) ? throw (short)-2 : 0;
    }
    catch (short) {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible \n";
        std::cout << "float: " << ret + "f\n";
        std::cout << "double: " << ret << std::endl;
        return (EXIT_SUCCESS);
    }

    object.convert(ret);
    return (EXIT_SUCCESS);
}