# include "BitcoinExchange.hpp"
# include <unistd.h>
# include <stdlib.h>
# include <deque>

struct BitcoinExchange {


    private :
        std::stack<std::string> _stack;


};

typedef struct BitcoinExchange t_BitcoinExchange;

enum Error_flags {

    VALIDE = 1<<1,
    TITLE = 1<<2,
    DATE_KEY,
    VALUE_KEY,
    DATE, 
    VALUE,
    LONG_VALUE,
    PIPE_SEPARET,
    NEGATIVE,
    EMPTY
};

typedef enum Error_flag t_error;

const char *ErrorMsg[] = { "", "", "", "", "", "", "" };

Error_flags parce(const char *fileName) {



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