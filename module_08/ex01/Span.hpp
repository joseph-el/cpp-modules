# pragma once

# include <iterator>
# include <vector>
# include <iostream>
# include <map>
# include <exception>

class Error : std::exception {
    public :
        const char *what(char *) throw();
};

template <typename T>
class Span {

    private :
        unsigned int N;
        int arr[N];
    public :

        Span(unsigned int);
        void addNumber(int newNomber);
        int shortestSpan() const;
        int longestSpan() const;
};