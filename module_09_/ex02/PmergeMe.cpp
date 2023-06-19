# include "PmergeMe.hpp"

void checkNumber(std::list<std::string> &splitNumbers) {

    std::list<std::string>::iterator it = splitNumbers.begin();
    for (; it != splitNumbers.end(); it++)
    {
        for (int i = (*it->c_str() == '-' or *it->c_str() == '+'); it->c_str()[i];)
            !std::isdigit(it->c_str()[i]) ? throw "Not a valide Number" : i++;
        atoi(it->c_str()) < 0 ? throw "Negative Number" : 0;
    }
}

template<typename _container_type>

void container_sorting(_container_type &container)
{
    if (container.size() <= 1)
        return ;

    _container_type left_container, right_container;
    size_t middle = container.size() / 2;

    typename _container_type::iterator itt = container.begin();

    for (size_t i = 0; i < middle; ++i, ++itt)
        left_container.push_back(*itt);
    
    for (size_t i = middle; i < container.size(); ++i, ++itt)
        right_container.push_back(*itt);

    container_sorting(left_container);
    container_sorting(right_container);
    container.clear();
    typename _container_type::iterator leftIt  = left_container.begin();
    typename _container_type::iterator rightIt = right_container.begin();

    while (leftIt != left_container.end() && rightIt != right_container.end()) {
        if (*leftIt < *rightIt) {
            container.push_back(*leftIt);
            ++leftIt;
        } else {
            container.push_back(*rightIt);
            ++rightIt;
        }
    }
    for (;leftIt != left_container.end(); ++leftIt)
        container.push_back(*leftIt);
    for (;rightIt != right_container.end(); ++rightIt)
        container.push_back(*rightIt);
}

template<typename _container_type>

void print_container(_container_type& container, const char *Msg)
{
    typename _container_type::iterator it = container.begin();
    std::cout << Msg;
    for (int cout = 0; it != container.end(); ++it, ++cout) {
        if (cout > 10 ) {
            std::cout << "[...]";
            break;
        }
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}


void pmergeme(std::list<std::string> &splitNumbers) {

    std::list<int>      list_numbers;
    std::deque<int>     deque_numbers;
    struct timeval      time_begin, time_end;

    checkNumber(splitNumbers);

    double time_algotithm1;
    double time_algotithm2;

    std::list<std::string>::iterator it = splitNumbers.begin();
    
    for (; it != splitNumbers.end(); it++) {
        list_numbers.push_back(atoi(it->c_str()));
        deque_numbers.push_back(atoi(it->c_str()));
    }
    gettimeofday(&time_begin, NULL);
    print_container(list_numbers, "Before:  ");
    container_sorting(list_numbers);
    gettimeofday(&time_end, NULL);
    time_algotithm1 = (time_end.tv_usec - time_begin.tv_usec) / 1000000.0;
    //----------------------------------
    gettimeofday(&time_begin, NULL);
    container_sorting(deque_numbers);
    print_container(deque_numbers, "After:  ");
    gettimeofday(&time_end, NULL);
    time_algotithm2 = (time_end.tv_usec - time_begin.tv_usec) / 1000000.0;

    std::cout << "Time to process a range of " << splitNumbers.size() << \
    std::fixed << std::setprecision(6) << " elements with std::list : " << time_algotithm1 << " us" << std::endl;
    std::cout << "Time to process a range of " << splitNumbers.size() << \
    std::fixed << std::setprecision(6) << " elements with std::deque : " << time_algotithm2 << " us" << std::endl;
}