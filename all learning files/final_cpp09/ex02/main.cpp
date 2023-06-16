# include "PmergeMe.hpp"

static void split(const std::string& input, std::list<std::string> &numbers) {

    std::string::size_type start = 0;
    std::string::size_type end = input.find_first_of(' ');
    
    while (end != std::string::npos) {
        if (!*input.substr(start, end - start).begin())
            goto set;
        numbers.push_back(input.substr(start, end - start));
        set :
            start = end + 1;
            end = input.find_first_of(' ', start);
    }  
    numbers.push_back(input.substr(start));
}

int main(int argc, char **argv)
{
    std::list<std::string> numbers;
    
    if (argc < 2)
        {ERROR_MSG}
    
    for (int i = 1; i < argc ; i++)
        split(std::string(argv[i]), numbers);
    try {
        pmergeme(numbers);
    }
    catch (const char *msgError) {
        std::cerr << "Error : " << msgError << std::endl;
    }
    exit(EXIT_SUCCESS);
}