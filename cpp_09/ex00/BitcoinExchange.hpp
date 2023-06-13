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
# include <cmath>

# define VALUE(x)      (x >= 0 and x <= 1000)
# define MAX_DAYS(x)   (x >= 1 and x <= 31)
# define MAX_YEARS(x)  (x >= 2009 and x <= 2022)
# define MAX_MONTHS(x) (x >= 1 and x <= 12)
# define BEGIN   1 
# define MIDDLE  4
# define SPACE   "\t\n\r "
# define NEWLINE 10
# define DATE_CSV "data.csv"
# define ARGM_ERROR puts("Put Just The File Name (database) 📁"); return (EXIT_FAILURE);

typedef std::string _st;

struct s_data {
    _st Date;
    float Value;
    bool error_msg;
    bool _push;
};

enum Error_flag  {

    EMPTY_CONTENT = 1 << 0,
    DATE_ERROR = 1 << 1,
    OPEN_ERROR = 1 << 2,
    VALUE_ERROR = 1 << 3,
    TITLE_ERROR = 1 << 4,
    LONG_VALUE_ERROR = 1 << 5,
    PIPESEPARATE_ERROR = 1 << 6,
    NEGATIVE_VALUE_ERROR = 1 << 7,
    VALIDE_FILE = 1 << 8,

};

extern const char* _ErrorMsg_[];

typedef struct s_data t_data;
typedef enum Error_flag t_err;
typedef std::string::iterator itt;
typedef std::vector<struct s_data> t_BitcoinExchange;

bool    parcetime(_st );
bool    beginline( _st &);
bool    parcevalue( _st );
bool    NumberOrMinus( int );
t_data  checkline( _st & , short );
void    _SHOW_DATE_(t_BitcoinExchange &bitcoin);
t_err   parce( t_BitcoinExchange & , const char * );