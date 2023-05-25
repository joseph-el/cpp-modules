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

bool    is_char(_st target) {
    return ( target.length() == 1 or isprint(*target.c_str()) );
}

short Is_Number(_st ret, int &ValueofInt, float &ValueofFloat, double &ValueofDouble) {
    
    short remember  = 0;

    for (int i = *ret & '+' | '-' ? 1 : 0; ret[i]; i++)
        if (!isdigit(ret[i]) && ret[i] != '.')
            return false;
        else if (ret[i])
            remember += (ret[i] == '.');
        if (remember > 1)
            return (FLOAT_ERROR | DOUBLE_ERROR);


        return atoi(ret.c_str()) == -1
                    
}



void    ScalarConverter::convert(_st &Theformat)
{
    int ValueofInt;
    char ValueofChar;
    float ValueofFloat;
    double ValueofDouble;





}




int main(int argc, char **argv)
{
    ScalarConverter object;

    if (argc != 2 or !*argv[1])
        {FATAL};
    std::string ret(++*argv);

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








    return (EXIT_SUCCESS);
}