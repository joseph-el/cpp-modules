# pragma once

# include <iostream>
# include <exception>
# include <unistd.h>
# include <iterator>
# include <algorithm>

# include <array>

class Error : std::exception {
    public :
        const char *what( void ) throw();
};


template <typename S>

void easyfind(S container, int find)
{
    
    int *ptr = std::find(container.begin(), container.end(), find);
    if (ptr)
        std::cout << "L" << std::endl;

    // std::iterator<S> it = std::find(container.begin(), container.end(), find);
    // if (it != container.end())
    //     std::cout << std::distance(container.begin(), it) << std::endl;
    else
        throw Error();
}

// template <typename T>

// void easyfind(T area, int find) {
//     area::iterator<T> it;

//     for (; !it.end() ; it++)
//         if (*it == find)
//             return (find);
    
//     throw Error();
// } 