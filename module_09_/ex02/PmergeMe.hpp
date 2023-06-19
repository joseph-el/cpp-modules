# pragma once

# include <iostream>
# include <iterator>
# include <deque>
# include <iterator>
# include <list>
#include <sys/time.h>
#include <iomanip>
# include <ctime>

# define SPACE       "\t\n\r "
# define ERROR_MSG std::cout << "Error arg\n"; return EXIT_FAILURE;

typedef std::deque<int> t_pmergeme;

void pmergeme (std::list<std::string> &); 