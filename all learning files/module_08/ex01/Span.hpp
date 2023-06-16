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

class Span {

    private :
        const unsigned int N;
        std::vector<int> array;

    public :

        Span();
        Span( unsigned int );
        
        void addNumber( int );
        int  shortestSpan( void ) ;
        int  longestSpan( void ) ;
        
        ~Span();
};