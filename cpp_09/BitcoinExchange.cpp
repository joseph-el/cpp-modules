# include "BitcoinExchange.hpp"

using namespace std;

bool beginline(_st &line) {

    short begin = line.find_first_not_of(SPACE);
    short end   = line.find_last_not_of(SPACE);

    (begin == -1 and end == -1) ? throw TITLE_ERROR : 0;
    line = line.substr(begin, end - begin + 1);
    line = line.substr(0, 4) != "date" ? throw DATE_ERROR: line.substr(4, line.size());
    begin = line.find_first_of("|"); 
    begin = (begin == -1) ? throw PIPESEPARATE_ERROR : line.find_first_not_of("\t\n\r |");
    line = (begin == -1) ? throw VALUE_ERROR : line.substr(begin, line.size());
    return  line != "value" ? throw VALUE_ERROR : true;
}

bool NumberOrMinus(int c)
{
    return isnumber(c) and c == '-';
}

bool parcetime(_st time_) {

    itt iterator_ = time_.begin();
    short _ = 0;

    for (; iterator_ != time_.end(); iterator_++) 
        _ += (*iterator_ == '-');
    if (_ > 2 or _ < 2 or std::all_of(time_.begin(), time_.end(), NumberOrMinus))
        throw DATE_ERROR;
    _ = 
            (   !MAX_MONTHS ( atoi(time_.substr(time_.find_first_of("-") + 1, time_.find_last_of("-")).c_str()) ) and
                !MAX_YEARS  (  atoi(time_.substr(0, time_.find_first_of("-")).c_str()) ) and
                !MAX_DAYS   (   atoi(time_.substr(time_.find_last_of("-") + 1, time_.size()).c_str())  ) 
            );

    // std::cout << "check - >" << _ << std::endl;

    return !_ ? throw DATE_ERROR : true;
}

bool parcevalue(_st lineofvalue) {
    
    short ret;

    ret = 0;
    for ( size_t i = (lineofvalue[0] == '-' or lineofvalue[0] == '+'); i < lineofvalue.length();) {
            ret += (lineofvalue[i] == '.');
            !isdigit(lineofvalue[i]) or ret > 1 ? throw VALUE_ERROR : i++;
    }
    atoi(lineofvalue.c_str()) < 0 ? throw NEGATIVE_VALUE_ERROR: 0;
    return VALUE(atof(lineofvalue.c_str())) ? throw LONG_VALUE_ERROR : true;
}

t_data checkline(_st &line, short flag) {

    t_data      storedData;
    std::string time;

    if (flag & BEGIN)
        return ( beginline(line), storedData);
    
    short begin = line.find_first_not_of(SPACE);
    short end   = line.find_last_not_of (SPACE);

    try {
        line = (begin == -1 or end == -1) ? throw (DATE_ERROR | VALUE_ERROR): line.substr(begin, end - begin + 1);
        end = line.find_first_of("|");
        end == -1 ? throw PIPESEPARATE_ERROR : time = line.substr(0, end);
        line = line.substr(end, line.size());
        end = time.find_last_not_of("\t\n\r -");
        end == -1 ? throw DATE_ERROR: time = time.substr(0, end + 1);
        begin = line.find_first_not_of("\t\n\r |");
        begin == -1 ? throw VALUE_ERROR: line = line.substr(begin, line.size());
        
        
        
        parcetime(time);
        parcevalue(line);
    }
    catch (t_err e) {


        storedData.Date = std::string("he");
        storedData.Value = -1;
        return storedData;

    }

    storedData.Date = std::string(time);
    storedData.Value = atof(line.c_str());
    return (storedData);
}

t_err parce(t_BitcoinExchange &bitcoin, const char *filename)
{
    std::ifstream _FILENAME_(filename);
    std::string gnl;

    if (!_FILENAME_.is_open() or _FILENAME_.peek() == std::ifstream::traits_type::eof())
        return (t_err)(OPEN_ERROR | EMPTY_FILE);
    try {
        std::getline(_FILENAME_, gnl);
        checkline(gnl, BEGIN);
    }
    catch (t_err e) {
        return e;
    }
    while (std::getline(_FILENAME_, gnl))
        bitcoin.push(checkline(gnl, MIDDLE));
    
    return (VALIDE_FILE);
}