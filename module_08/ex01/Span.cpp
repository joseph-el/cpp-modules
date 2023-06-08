# include "Span.hpp"

typedef std::vector<int>::iterator intt;

Span::Span(unsigned int Nsize) : N(Nsize) {
    Nsize < 1 ? throw "invalid index 🤯" : 0;
}

Span::Span() : N(0) {
    throw "Use the parameter passed to the constructor.";
}

void Span::addNumber(int Newnbr) 
{
    array.size() == N ? throw "ARRAY IS FULL 🏳️" : 0;
    array.push_back(Newnbr);
}

int findSpan(std::vector<int> &Arr, bool mode) {

    intt    it;
    int     shortestSpan, longestSpan, localSpan;

    std::sort(Arr.begin(), Arr.end());
    it = Arr.begin();
    shortestSpan = *it - *(it + Arr.size());
    for (; it != Arr.end(); it++) {
        localSpan = *it - *(it - 1);
        localSpan < 1 ? localSpan =-1: 0; 
        shortestSpan = localSpan < shortestSpan ? localSpan : shortestSpan;
    }
    longestSpan = Arr[Arr.size() - 1] - *Arr.begin();
    longestSpan < 1 and shortestSpan < 1 ? throw "🦞": 0;
    return mode ? longestSpan : shortestSpan;
}

int Span::shortestSpan( void ) {
    if (array.empty() or array.size() <= 1)
        throw "🏳️";
    return findSpan(array, true);
}

int Span::longestSpan( void ) {
    if (array.empty() or array.size() <= 1)
        throw "🏳️";
    return findSpan(array, true);
}

Span::~Span() {}