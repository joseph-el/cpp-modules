# include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &) {}

ScalarConverter& ScalarConverter::operator = (const ScalarConverter &) {}

ScalarConverter::~ScalarConverter() {}

bool    is_char(_st target) {
    return ( target.length() != 1 or isprint(*target.c_str()) );
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



bool ScalarConverter::convert(std::string &target, int &ValueofInt, float &ValueofFloat, double &ValueofDouble) {

    int Int = static_cast<int> (ValueofInt);
    float Float = static_cast<float> (ValueofFloat);
    double Double = static_cast<double> (ValueofDouble);

    std::cout << "char: " << is_char(target) ? ""



    return (true);
}


int main(int argc, char **argv) 
{
    ScalarConverter object;
    std::string ret(*argv);
    int Int;
    float Float;
    double Double;

    if (argc != 2 or !*argv[1])
        {FATAL};
    argv++;
    
    try {
        pseudoLiterals(ret) ? throw (short)-2 : 0;
    }
    catch (short) {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible \n";
        std::cout << "float: " << ret + "f\n";
        std::cout << "double: " << ret << std::endl;
    }

    Is_Number(ret, Int, Float, Double) or is_char(ret) ?
        object.convert(ret, Int, Float, Double) : puts("test");

    return (EXIT_SUCCESS);
}


