# pragma once

# include <iostream>
# include <exception>
# include <unistd.h>
# include <iterator>
# include <algorithm>
# include <vector>
# include <array>

class Error : public std::exception {
    public :
        virtual const char* what() const throw();
};

template <typename Container>

void easyfind(Container container, int find) {
    
    typename Container::iterator it;
    it = std::find(container.begin(), container.end(), find);
    if (it == container.end())
        throw Error();
    std::cout << "iterator " << *it << std::endl;
}
