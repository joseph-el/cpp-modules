#include <iostream>
#include <map>

int main()  
{
    std::map <int, std::string> Country;
    std::map <int, std::string>::const_iterator i;

    Country.insert(std::pair <int, std::string>(1, "USA"));
    Country.insert(std::pair <int, std::string>(7, "Russia"));
    Country.insert(std::pair <int, std::string>(33, "France"));
    Country.insert(std::pair <int, std::string>(39, "Italy"));
    Country.insert(std::pair <int, std::string>(49, "Germany"));
    Country.insert(std::pair <int, std::string>(61, "Australia"));
 
    std::cout << "---\t--------" << std::endl;

    for (i = Country.begin(); i != Country.end(); i++)
        std::cout << (*i).first << "\t" << (*i).second << std::endl;
    return 0;
}