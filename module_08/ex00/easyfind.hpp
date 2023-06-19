# pragma once

# include <iostream>
# include <exception>
# include <unistd.h>
# include <iterator>
# include <algorithm>
# include <vector>
# include <array>

template <typename Container>

void easyfind(Container container, int find) {
    
    typename Container::iterator it;

    it = std::find(container.begin(), container.end(), find);
    if (it == container.end())
        throw "I can`t find anything ⛔️ ";
    std::cout << "iterator " << *it << std::endl;
}
