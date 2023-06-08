# pragma once

# include <iostream>
# include <stack>
# include <vector>
# include <algorithm>
# include <unistd.h>
# include <iterator>
# include <deque>

template <typename N>

class MutantStack : public std::stack<N, std::deque<N> > {

    public :

    typedef typename std::deque<N>::const_iterator iterator;

    iterator begin() const {
        return this->c.begin();
    };
    iterator end() const {
        return this->c.end();
    }

};

