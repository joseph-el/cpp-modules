# pragma once

# include <iterator>
# include <vector>
# include <iostream>
# include <map>
# include <exception>
#include <iostream>
#include <vector>
#include <algorithm>
# include <unistd.h>
# include <limits.h>

class Span {

    private :
        unsigned int N;
        std::vector<int> array;

    public :

        Span();
        Span( unsigned int );
        
        Span(const Span &);

        Span& operator =(const Span &);

        void addNumber( int );
        int  shortestSpan( void );
        int  longestSpan( void );

        ~Span();
};