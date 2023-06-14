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

using namespace std;


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

using namespace std;

# define NEWLINE 10
# define BEGIN 1 
# define MIDDLE 4

typedef std::string::iterator itt;
typedef std::string _st;

bool beginline(_st &line) {

        short begin = line.find_first_not_of(" \t\n\r");
        short end   = line.find_last_not_of(" \t\n\r");

        begin == -1 or end == -1 ? throw (E_DATE | E_VALUE): 0;

        line = line.substr(begin, end - begin + 1);
        
        line.substr(0, 4) != "date" ? throw E_DATE: line = line.substr(4, line.size());
        
        line.find_first_of("|") == -1 ? throw PIPE_SEPARATE : begin = line.find_first_not_of("\t\n\r |");
        
        return line.substr(begin, line.size()) != "value" ? throw E_VALUE : true;
}


int main( ) {

    cout << atoi("2011-01-03");
    // 2011-01-03

return 1;

    std::string ret("date  value");

try {
    cout << beginline(ret);

}
catch (t_error e)
{
    cout << "error code : " << e << endl;
}

    // ret = ret.substr(0, 3);
    // ret+= 3;
    // cout << "sdd  " << ret << endl;









}