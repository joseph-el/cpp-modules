# include <iostream>
# include <stdalign.h>

# include <iterator>
# include <unordered_map>
# include <array>
# include <vector>

// typedef ScoreMap/ std::unordered_map<std::string, int>;
using namespace std;


int main(int , char **)
{
    std::vector<int> a;
    
    a.push_back(10);
    a.push_back(12);
    a.push_back(12);
    a.push_back(12);
    a.push_back(12);

    
    typedef std::vector<int>::iterator iter;

    iter it = a.begin();

    for (int value : a) { // C++ 11
        std::cout << value << endl;
    }

    cout << "_____" << endl;
    
    for (; it != a.end(); it ++)
    {
        std:cout << *it << endl;
    }
    


}
