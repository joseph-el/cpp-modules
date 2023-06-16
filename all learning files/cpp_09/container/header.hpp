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
# include <fstream>
# include <iostream>
# include <math.h>
# include <limits>
# include <limits.h>


# define VALUE(x)      (x < 1 and x > INT_MAX)

# define MAX_DAYS(x)   (1 < x and x > 30)
# define MAX_YEARS(x)  (2009 < x and x > 2022)
# define MAX_MONTHS(x) (1 < x and x > 12)

# define BEGIN   1 
# define MIDDLE  4
# define SPACE   "\t\n\r "
# define NEWLINE 10

typedef std::string _st;


struct s_data {
    _st Date;
    short Value;
};


enum Error_flag {

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

typedef struct s_data t_data;
typedef enum Error_flag t_err;
typedef std::string::iterator itt;
typedef std::stack<struct s_data> t_BitcoinExchange;

// const char *ErrorMsg[] = {  "TITLE",
//                             "DATE_KEY",
//                             "VALUE_KEY",
//                             "E_DATE",
//                             "E_VALUE",
//                             "E_VALUE",

//                             "PIPE_SEPARATE",
//                             "PIPE_SEPARATE",
//                             "PIPE_SEPARATE",
//                             "PIPE_SEPARATE",
//                             "PIPE_SEPARATE",

//                             "LONG_VALUE" 
// };

