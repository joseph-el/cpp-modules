# include "BitcoinExchange.hpp"

struct BitcoinExchange {

    
    private :
        std::stack<std::string> _stack;

};

typedef struct BitcoinExchange t_BitcoinExchange;


const char *ErrorMsg[] = {  "TITLE",
                            "DATE_KEY",
                            "VALUE_KEY",
                            "E_DATE",
                            "E_VALUE",
                            "PIPE_SEPARATE",
                            "LONG_VALUE" 
};

using namespace std;

t_error parce(const char *fileName) {

    // check validate of str;
    std::ofstream file(std::string(fileName));
    if (!file.is_open())
        return ()


    unsigned short ret = TITLE | EMPTY | LONG_VALUE;
    ErrorMsg[(int)log2(ret)];

    return (VALIDE);
}



int main(int Argc, char **Argv) 
{
    struct BitcoinExchange bitcoin;

    if (Argc != 1)
        return std::cout << "try to put some file 📁\n", EXIT_FAILURE;
        
    prace(++*argv);
    search()



    exit(EXIT_SUCCESS);
}