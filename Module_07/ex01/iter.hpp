# pragma once

# include <iostream>
# define MAX_SIZE 5

template <typename T>

void iter(T *array, short lenght, void (*func)(const T Element)) {
    short i = 0;
    for (; i < lenght; i++) {
        func(array[i]);
    }
}