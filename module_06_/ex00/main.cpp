# include "ScalarConverter.hpp"

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