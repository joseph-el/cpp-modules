# pragma once

# include <iostream>
# include <map>
# include <vector>
# include <iterator>
# include <unistd.h>
# include <stack>
# include <limits>

# include <unistd.h>
# include <stdlib.h>
# include <deque>
# include <iterator>
#include <fstream>
#include <iostream>

# include <limits>
# include <limits.h>
    typedef std::string _st;

# include <math.h>

struct s_data {
    _st Date;
    short Value;
};

typedef struct s_data t_data;

// struct BitcoinExchange {

//     void insert( struct s_data );
    
//     private :
//         std::stack<t_data> _stack;
    
// };

typedef struct BitcoinExchange t_BitcoinExchange;


enum Error_flag : short {

    TITLE = 1 << 1,
    EMPTY  = 1 << 9,
    E_DATE = 1 << 4,
    E_OPEN = 1 << 8,
    VALIDE = 1 << 10,
    E_VALUE = 1 << 5,
    DATE_KEY = 1 << 2,
    NEGATIVE = 1 << 8,
    VALUE_KEY = 1 << 3,
    LONG_VALUE = 1 << 6,
    PIPE_SEPARATE = 1 << 7
};

typedef enum Error_flag t_error;

// const char *ErrorMsg[] = {  "TITLE",
//                             "DATE_KEY",
//                             "VALUE_KEY",
//                             "E_DATE",
//                             "E_VALUE",
//                             "PIPE_SEPARATE",
//                             "LONG_VALUE" 
// };