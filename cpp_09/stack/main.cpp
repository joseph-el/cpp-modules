# include "PmergeMe.hpp"

static std::list<std::string> split(const std::string& input) {

    std::list<std::string> result;
    std::string::size_type start = 0;
    std::string::size_type end = input.find_first_of(' ');
    
    while (end != std::string::npos) {
        if (!*input.substr(start, end - start).begin())
            goto set;
        result.push_back(input.substr(start, end - start));
        set :
            start = end + 1;
            end = input.find_first_of(' ', start);
    }  
    result.push_back(input.substr(start));
    return result;
}

int main(int argc, char **argv)
{
    if (argc != 2)
        {ERROR_MSG}
    
    std::list<std::string> splitNumbers = split(std::string(argv[1]));
    try {
        pmergeme(splitNumbers);
    }
    catch (...) {
        std::cerr << "error\n";
    }
    
    exit(EXIT_SUCCESS);
}