# include "BitcoinExchange.hpp"
using namespace std;

# define NEWLINE 10
# define BEGIN 1 
# define MIDDLE 4
# define SPACE "\t\n\r"

typedef std::string _st;
typedef std::string::iterator itt;
typedef std::stack<struct s_data> t_BitcoinExchange;

bool beginline(_st &line) {

        short begin = line.find_first_not_of(SPACE);
        short end   = line.find_last_not_of(SPACE);

        begin == -1 or end == -1 ? throw (E_DATE): 0;

        line = line.substr(begin, end - begin + 1);
        
        line.substr(0, 4) != "date" ? throw E_DATE: line = line.substr(4, line.size());
        
        line.find_first_of("|") == -1 ? throw PIPE_SEPARATE :
                                            begin = line.find_first_not_of("\t\n\r |");
        
        return line.substr(begin, line.size()) != "value" ? throw E_VALUE : true;
}

t_error parce(t_BitcoinExchange &bitcoin, const char *filename) {
    
    cout << "file " << filename << endl; 

    std::ifstream _FILENAME_(filename);
    std::string gnl;

    if (!_FILENAME_.is_open() or _FILENAME_.peek() == std::ifstream::traits_type::eof())
        return (E_OPEN);
    std::getline(_FILENAME_, gnl);
    try {
        std::cout << gnl << endl;
        beginline(gnl);
        // std::getline(_FILENAME_, gnl);¿
        // bitcoin.push(checkline(gnl, BEGIN)); 
        // while (std::getline(_FILENAME_, gnl))
        //     bitcoin.push(checkline(gnl, MIDDLE));
    }
    catch (t_error ErrorType) {
        return ErrorType;
    }
    return VALIDE;
}


using namespace std;

int main(int ac, char **argv)
{
    if (ac  != 2){
        cout << "ARGUMENT" << endl;
        return 1;
    }
    t_BitcoinExchange bitcoin;
    cout << (int)parce(bitcoin, argv[1]) << endl;







    exit(0);
}