# pragma once

# include <iostream>
# include <iterator>
# include <unistd.h>
# include <stack>
# include <string>

# define ERROR_MSG std::cout << "Error\n"; return EXIT_FAILURE;
# define operations(operation) (std::strchr("+-/*", operation))
# define spaces(sp) (std::strchr("\t \f\r", sp))

typedef std::stack<int> t_rpn;

int rpn(const char *);