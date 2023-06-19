# include "BitcoinExchange.hpp"

static std::string getbound(std::vector<t_data>::iterator &it, std::vector<std::string> &database) {

    std::vector<std::string>::iterator lower = std::lower_bound(database.begin(), database.end(), it.base()->Date);
    
    (it.base()->error_msg) ? throw it.base()->Date: 0;
    
    if (it.base()->Date == lower->substr(0, 10)) {
        return *lower;
    }
    if (lower != database.end() && *lower != it.base()->Date) {
        if (lower != database.begin()) {
            --lower;
        }
        return *lower;
    } else if (lower == database.end())
        return *(std::prev(lower));
    return (*lower);
}

void _SHOW_DATE_(t_BitcoinExchange &bitcoin)
{
    std::vector<std::string> database;

    std::ifstream _FILENAME_(DATE_CSV);
    if (!_FILENAME_.is_open()) {
        std::cout << "Why u remove the data.csv file ?\n";
        exit(EXIT_FAILURE); 
    }
    std::string gnl;
    while (std::getline(_FILENAME_, gnl))
        database.push_back(gnl);
    
    std::vector<t_data>::iterator it = bitcoin.begin();
    for (;it != bitcoin.end(); it++) {
        try {
            getbound(it, database);
            std::cout << it.base()->Date;
            std::cout << " => " << it.base()->Value;
            std::cout << " = " << atof(getbound(it, database).substr(11).c_str()) * it.base()->Value << std::endl;
        }
        catch (...) {
            std::cout << it.base()->Date << std::endl;
        }
    }
}