# include "Span.hpp"

Span::Span(const Span &Another) {
    *this = Another;
}

Span& Span::operator=(const Span &Another) {
    this->array = Another.array;
    this->N = Another.N;
    return *this;
}

Span::Span(unsigned int Nsize) : N(Nsize) {
    int negative = static_cast<int>(Nsize);
    negative < 1 ? throw "invalid index 🤯" : 0;
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
    int shortestSpan, longestSpan, localSpan;

    std::sort(Arr.begin(), Arr.end());

    shortestSpan = std::abs(Arr[1] - Arr[0]);
    for (size_t i = 2; i < Arr.size(); i++)
    {
        localSpan = std::abs(Arr[i] - Arr[i - 1]);
        shortestSpan = localSpan < shortestSpan ? localSpan : shortestSpan;
    }
    longestSpan = Arr[Arr.size() - 1] - (Arr[0]);

    return mode ? longestSpan : shortestSpan;
}


int Span::shortestSpan( void ) {
    if (array.empty() or array.size() <= 1)
        throw "🏳️";
    return findSpan(array, false);
}

int Span::longestSpan( void ) {
    if (array.empty() or array.size() <= 1)
        throw "🏳️";
    return findSpan(array, true);
}

Span::~Span() {}