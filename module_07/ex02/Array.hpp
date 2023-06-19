# pragma once

# include <iostream>
# include <exception>

# define MAX_NUMBERS 100
# define CR7 7
# define MESSI 10

template <typename T>

class Array {

    private :
        T       *array;
        short   lenght;

    public :

        Array() : array(NULL), lenght(0) {}

        Array(unsigned int len) : array(NULL), lenght(len) {
            array = new T[lenght];
            for (int i = 0; i < lenght; i++)
                array[i] = T();
        }
        Array(const Array<T> &another) : array(NULL), lenght(0) {
            *this = another;
        }

        Array<T> &operator = (const Array<T> &another) {
            if (array)
                delete[] array, array = NULL;
            lenght = another.get_lenght();
            if (!lenght)
                return (*this);
            array = new T[lenght];
            for (int i = 0; i < lenght; i++)
                array[i] = another[i];
            return (*this);
        }

        T& operator [](const short index) const {
            if (index >= lenght or index < 0)
                throw std::out_of_range("the index is out of lenght 🤯");
            return array[index];
        }
        
        short get_lenght( void ) const {
            return (lenght);
        }

        ~Array() {
            if (array)
                delete[] array, array = NULL;
        }
};