# pragma once

# include <iostream>
# define MAX_SIZE 5

template <typename T, typename S>

void iter(T *array, short lenght, void (*func)(S &Element)) {
    short i = 0;
    for (; i < lenght; i++) {
        func(array[i]);
    }
}