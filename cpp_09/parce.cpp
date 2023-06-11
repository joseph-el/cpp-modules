# include "BitcoinExchange.hpp"
using namespace std;

# define NEWLINE 10
# define BEGIN 1 
# define MIDDLE 4
# define SPACE "\t\n\r"

typedef std::string::iterator itt;
typedef std::string _st;

typedef std::stack<struct s_data> t_BitcoinExchange;


bool beginline(_st &line) {

        short begin = line.find_first_not_of(SPACE);
        short end   = line.find_last_not_of(SPACE);

        begin == -1 or end == -1 ? throw (E_DATE | E_VALUE): 0;
        line = line.substr(begin, end - begin + 1);
        line.substr(0, 4) != "date" ? throw E_DATE: line = line.substr(4, line.size());
        line.find_first_of("|") == -1 ? throw PIPE_SEPARATE 
                                        : begin = line.find_first_not_of("\t\n\r |");
        return line.substr(begin, line.size()) != "value" ? throw E_VALUE : true;
}

# define MAX_MONTHS (x) (1 < x or x > 12)

# define MAX_DAYS (x) (1 < x or x > 31) 

# define MAX_YEARS ((int)x) ( 2009 < x or x > 2022 )

# define VALUE(x) (x < 1 or x > INT_MAX)

bool NumberOrMinus(int c)
{
    return std::isdigit(c) or c == '-';
}

bool parcetime(_st time_) {

    itt iterator_ = time_.begin();
    short _ = -1;

    for (; iterator_ != time_.end(); iterator_++) 
        _ += (*iterator_ == '-');
    
    if (_ > 2 or _ < 2 or std::all_of(time_.begin(), time_.end(), NumberOrMinus))
        return false;

    return (

        !MAX_YEARS(atoi(time_.substr(0, time_.find_first_of("-")).c_str()) ) and
        !MAX_DAYS(atoi(time_.substr(time_.find_last_of("-"), time_.size()).c_str())) and
        !MAX_MONTHS(atoi(time_.substr(time_.find_first_of("-"), time_.find_last_of("-")).c_str())) 
        
        );
}

t_data &checkline(_st &line, short flag) {

    t_data storedDate;
    
    if (flag & BEGIN) return (beginline(line), storedDate);

    short begin = line.find_first_not_of(SPACE);
    short end   = line.find_last_not_of (SPACE);

    begin == -1 or end == -1 ? throw (DATE_KEY | DATE_KEY): 0;
    line  = line.substr(begin, end - begin + 1);
    end = line.find_last_of("|") == -1 ? throw DATE_KEY : 0;
    std::string time = line.substr(0, end);
    end = time.find_last_not_of(SPACE) == -1 ? throw DATE_KEY : 0;
    line = line.substr(end, line.size());
    begin = line.find_first_not_of(SPACE) == -1 ? throw DATE_KEY : 0;
    line.substr(begin, line.size());
    !parcetime(time = time.substr(0, end)) or VALUE(atoi(line.c_str())) ? throw TIME_UTC : 0;
    storedDate.Date = time;
    storedDate.Value = atoi(line.c_str());
    return storedDate;
}

t_error parce(t_BitcoinExchange &bitcoin, const char *filename) {
    
    cout << "file " << filename << endl; 

    std::ifstream _FILENAME_(filename);
    std::string gnl;

    if (_FILENAME_.is_open() or _FILENAME_.peek() == std::ifstream::traits_type::eof())
        return (E_OPEN);
    std::getline(_FILENAME_, gnl, (char)0);
    try {

        std::getline(_FILENAME_, gnl);
        bitcoin.push(checkline(gnl, BEGIN)); 
        while (std::getline(_FILENAME_, gnl))
            bitcoin.push(checkline(gnl, MIDDLE));
    }
    catch (t_error ErrorType) {
        return ErrorType;
    }

}

int main(int ac, char **argv) {


if (ac != 2)
    {
        cout << "argument " << endl;
        return 1;
    }
    t_BitcoinExchange bitcoin;

    std::cout << parce(bitcoin, argv[1]);
}








































// using namespace std;
// # define NEWLINE 10
// # define BEGIN 1 
// # define MIDDLE 4

// typedef std::string::iterator itt;
// typedef std::string _st;

// void checkline(_st &line , short flag) {

//     itt it = line.begin();

//     short possition = line.find(" | ");
    
//     possition == std::string::npos ? throw E_DATE | E_VALUE: 0;

//     if (line.substr(0, possition).find("date "))


//     for (; it != line.end(); it++)
//     {

//         if (isspace(static_cast<int>(*it)))  
//             continue;


//     }

// }


// void checkline(itt &iterator_, short flag) {
    
//     for (; *iterator_ != NEWLINE; iterator_++)
//     {
//         if (flag & BEGIN) {
            
//             continue;
//         }
//     }
// }

// t_error parce(t_BitcoinExchange &bitcoin, const char *filename) {

//     cout << "file " << filename << endl; 
//     std::ifstream _FILENAME_(filename);
//     std::string gnl;
//     if (_FILENAME_.is_open() & false)
//         return (E_OPEN);
//     std::getline(_FILENAME_, gnl, (char)0);

//     // if (_FILENAME_.fail())
//     //     return (E_OPEN);

//     itt it = gnl.begin();

//     for (; it != gnl.end();  it++)
//     {
//         try {
//             checkline(it, MIDDLE);
//             // if (*it & NEWLINE)
//             //     checkline()
//         }
//         catch (t_error &e) {
//             return e;
//         }
//     }
    
//     cout << gnl << ">---------|||END\n";




//     return (_FILENAME_.close(), VALIDE);
// }

// int main(int ar, char **argv) {


//     return 1;
//     t_BitcoinExchange ret;
//     parce(ret, argv[1]);
// }