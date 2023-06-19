#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

int main()
{
    std::vector< std::string > StringVector;
    std::vector< std::string >::const_iterator i;

    StringVector.push_back("LL");
    StringVector.push_back("JJ");
    StringVector.push_back("JOSEPH");
    StringVector.push_back("OO");
    StringVector.push_back("BB");
    StringVector.push_back("NNNN");

    sort(StringVector.begin(), StringVector.end());

    std::cout << "Sorted" << std::endl;
    i = StringVector.begin();
    for (;i != StringVector.end(); i++)
        std::cout << *i << "  ";
    std::cout << std::endl;
    return 0;
}