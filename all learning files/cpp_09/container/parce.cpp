# include "header.hpp"

using namespace std;

bool beginline(_st &line) {

    short begin = line.find_first_not_of(SPACE);
    short end   = line.find_last_not_of(SPACE);

    (begin == -1 and end == -1) ? throw (t_err)(E_DATE | E_VALUE) : 0;
    line = line.substr(begin, end - begin + 1);
    line = line.substr(0, 4) != "date" ? throw E_DATE: line.substr(4, line.size());
    begin = line.find_first_of("|"); 
    begin = (begin == -1) ? throw PIPE_SEPARATE : line.find_first_not_of("\t\n\r |");
    line = (begin == -1) ? throw E_VALUE : line.substr(begin, line.size());
    return  line != "value" ? throw E_VALUE : true;
}

bool NumberOrMinus(int c)
{
    return isnumber(c) and c == '-';
}

bool parcetime(_st time_) {


    cout << "time given  :>" << time_ << "<:" << endl;

    itt iterator_ = time_.begin();
    short _ = 0;

    for (; iterator_ != time_.end(); iterator_++) 
        _ += (*iterator_ == '-');
    
    if (_ > 2 or _ < 2 or std::all_of(time_.begin(), time_.end(), NumberOrMinus))
        return (false);

// puts("_________________________________________________");
// cout << "month >" << << "<" << endl;
// cout << "years >" <<  << "<" << endl;
// cout << "days >" <<  << "<" << endl;
// puts("_________________________________________________");

// if (MAX_YEARS( atoi(time_.substr(0, time_.find_first_of("-")).c_str()))){
//     puts("-----------------------------");
//     cout << "max years error in : " << time_ << endl; 
// }
// else {
//     cout << "valide date\n";
// }
    return (
            !MAX_MONTHS( atoi(time_.substr(time_.find_first_of("-") + 1, time_.find_last_of("-")).c_str()) ) and
            !MAX_YEARS( atoi(time_.substr(0, time_.find_first_of("-")).c_str()) ) and
            !MAX_DAYS(atoi(time_.substr(time_.find_last_of("-") + 1, time_.size()).c_str()) )
    );
}

bool parcevalue(_st lineofvalue) {
    
    float value;
    short ret;

    ret = 0;
    for ( int i = (lineofvalue[0] == '-' or lineofvalue[0] == '+'); i < lineofvalue.length();) {
            ret += (lineofvalue[i] == '.');
            !isdigit(lineofvalue[i]) or ret > 1 ? throw E_VALUE : i++;
    }

    return VALUE(atof(lineofvalue.c_str())) ? throw E_VALUE : true;
}

t_data checkline(_st &line, short flag) {

    std::string tmp = line;
    t_data      storedData;
    std::string time;

    if (flag & BEGIN)
        return ( beginline(line), storedData ) ;
    short begin = line.find_first_not_of(SPACE);
    short end   = line.find_last_not_of (SPACE);

    try {
        line = (begin == -1 or end == -1) ? throw (DATE_KEY | DATE_KEY): line.substr(begin, end - begin + 1);

        end = line.find_first_of("|");
        end == -1 ? throw PIPE_SEPARATE : time = line.substr(0, end);
        line = line.substr(end, line.size());
        end = time.find_last_not_of("\t\n\r -");
        end == -1 ? throw E_DATE: time = time.substr(0, end + 1);
        begin = line.find_first_not_of("\t\n\r |");
        begin == -1 ? throw E_VALUE : line = line.substr(begin, line.size());



        !!parcetime(time);
        !!parcevalue(line);

        // cout << "line of value = >" << line.c_str() << "<" << endl;
        // cout << "check value " << atof(line.c_str()) << endl;

        // if (VALUE() )
        // {
        //     cout << "Error in " << tmp << endl;
        // }
    // upper_bound
    // lower_bound
        // parcetime(time) or VALUE(atoi(line.c_str())) ? throw (t_err)(E_DATE | E_VALUE) : 0;





        // !!parcetime(time) or VALUE(l)
        // if (!parcetime(time) or va) {
        //     puts("----------------------------");
        //     cout << "time error in " << tmp << endl;
        //     puts("----------------------------");
        // }
    }
    catch (t_err e) {
        puts("-------------------------------");
        cout << "ERRORO line Error >" << tmp << "< error code : " << e << endl;
        puts("-------------------------------");
        storedData.Date = std::string(ErrorMsg[(int)log2((double)e)]);
        storedData.Value = -1;
    }
    storedData.Date = std::string(time);
    storedData.Value = atoi(line.c_str());
    return (storedData);
}

t_err parce(t_BitcoinExchange &bitcoin, const char *filename)
{
    cout << "the FILE is : " << filename << endl;

    std::ifstream _FILENAME_(filename);
    std::string gnl;

    if (!_FILENAME_.is_open() or _FILENAME_.peek() == std::ifstream::traits_type::eof())
        return (t_err)(E_OPEN | EMPTY);
    try {
        std::getline(_FILENAME_, gnl);
        checkline(gnl, BEGIN);
    }
    catch (t_err e) {
        std::cout << "check error : " << e << std::endl;
        return e;
    }
    while (std::getline(_FILENAME_, gnl))
        bitcoin.push(checkline(gnl, MIDDLE));
    return (VALIDE);
}







int main(int argc, char **argv) {
    t_BitcoinExchange ret;

    if (argc != 2) {
        cout << "Argument " << endl;
        return -1;
    }


    if (parce(ret, argv[1]) == VALIDE) 
    {
            puts("");
            puts("");
            puts("");
            puts("");
            puts("");
            puts("");
            cout << "IS VALIDE \n";
    }
    else {
        cout << "NOT VALIDE \n";
        return 1;
    }

    // while (!ret.empty())
    // {
    //     cout << "time : >" << ret.top().Date << "<" << endl;
    //     cout << "value : >" << ret.top().Value << "<" << endl;
    //     ret.pop();
    // }
    

    exit(EXIT_SUCCESS);
}