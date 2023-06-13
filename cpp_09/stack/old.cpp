# include "PmergeMe.hpp"

using namespace std;

void checkNumber(std::list<std::string> &splitNumbers) {

    std::list<std::string>::iterator it = splitNumbers.begin();
    for (; it != splitNumbers.end(); it++)
    {
        if (std::distance(splitNumbers.begin(), it) > 3000)
            throw "test";
        for (int i = 0; it->c_str()[i];)
            !std::isdigit(it->c_str()[i]) ? throw "test" : i++;
        atoi(it->c_str()) < 0 ? throw "test" : 0;
    }
}

double _sort_(t_pmergeme &Numbers)
{
    double  us;
    struct timeval      _time_begin, _time_end;

    std::cout << "Before:  ";
    t_pmergeme::iterator it = Numbers.begin();
    for (; it != Numbers.end(); it++)
        std::cout << *it << " ";
    gettimeofday(&_time_begin, NULL);
    std::sort(Numbers.begin(), Numbers.end());
    gettimeofday(&_time_end, NULL);
    std::cout << "After: ";
    it = Numbers.begin();
    for (; it != Numbers.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    us = (_time_end.tv_usec - _time_begin.tv_usec);
    return (us);
} 

double  _stable_sort_(t_pmergeme &Numbers)
{
    double  us;
    struct timeval      _time_begin, _time_end;

    t_pmergeme::iterator it = Numbers.begin();
    std::cout << "Before:  ";
    for (; it != Numbers.end(); it++)
        std::cout << *it << " ";
    gettimeofday(&_time_begin, NULL);
    std::stable_sort(Numbers.begin(), Numbers.end());
    gettimeofday(&_time_end, NULL);
    std::cout << "After: ";
    it = Numbers.begin();
    for (; it != Numbers.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    us = (_time_end.tv_usec - _time_begin.tv_usec);
    return (us);
}

void pmergeme (std::list<std::string> &splitNumbers) {

    t_pmergeme ret;
    useconds_t time_algotithm1;
    useconds_t time_algotithm2;

    checkNumber(splitNumbers);
    std::list<std::string>::iterator it = splitNumbers.begin();
    
    for (; it != splitNumbers.end(); it++)
        ret.push_back(atoi(it->c_str()));
    time_algotithm1 = _sort_(ret);
    time_algotithm2 = _stable_sort_(ret);

    std::cout << "Time to process a range of " << splitNumbers.size() << " elements with std::sort : " << time_algotithm1 << " us" << std::endl;
    std::cout << "Time to process a range of " << splitNumbers.size() << " elements with std::stable_sort : " << time_algotithm2 << " us" << std::endl;
}