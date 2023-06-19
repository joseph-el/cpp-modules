# if !defined(WHATEVER_HPP)
#  define WHATEVER_HPP

# include <iostream>
# include <string>

template <typename T>

void    swap(T &target1, T &target2) {
    
    T tmp = target1;
    target1 = target2;
    target2 = tmp;
}

template <typename T>

T    min(T target1, T target2) {
    return target1 > target2 ? target2 : target1; 
}

template <typename T>

T    max(T target1, T target2)
{
    return target2 > target1 ? target2 : target1; 
}

# endif
