# include "ScalarConverter.hpp"

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

bool Is_Number(_st target, int &ValueofInt, float &ValueofFloat, double &ValueofDouble) {

    short remember  = 0;

    for (int i = 0; target.c_str()[i]; i++)
        if (!isdigit(target.c_str()[i]))
            return false;
        else if (target.c_str()[i])
            remember += (target.c_str()[i] == '.');
    
    ValueofInt = std::atoi(target.c_str());
    ValueofFloat = std::stof(target);
    ValueofDouble = std::stod(target);

    return  (remember == 1 ? MAX_OF_FLT(ValueofFloat) : MAX_OF_DBL(ValueofDouble)) or 
                            MAX_OF_INT(ValueofInt) or remember > 2 ? false : true;
}

enum flags {

    INT_ERROR = (1<<1),
    INT_NUMBER = (1<<2),
    FLOAT_ERROR = (1<<3),
    FLOAT_NUMBER = (1<<4),
    DOUBLE_ERROR = (1<<5),
    DOUBLE_NUMBER = (1<<6)

};

short Is_Number(_st ret) {

    short remember = 0;

    for (int i = 0; ret.c_str()[i]; i++)
        if (!isdigit(ret.c_str()[i]) or ret.c_str()[i] != '.')
            return (INT_ERROR);
        else if (ret.c_str()[i])
            remember += (ret.c_str()[i] == '.');
    
    if (remember > 1)
        return (FLOAT_ERROR | DOUBLE_ERROR);

    
}


int main(int argc, char **argv) 
{
    ScalarConverter object;

    if (argc != 2 or !*argv[1])
        {FATAL};
    argv++;
    std::string ret(*argv);

    try {
        pseudoLiterals(ret) ? throw (short)-2 : 0;
    }
    catch (short) {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible \n";
        std::cout << "float: " << ret + "f\n";
        std::cout << "double: " << ret << std::endl;
    }

    object.convert(ret);
    
    return (EXIT_SUCCESS)
}