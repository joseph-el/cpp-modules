# include "BitcoinExchange.hpp"

const char *_ErrorMsg_[] = {

                "Error : EMPTY FILE",
                "Error : DATE SYNTAX ERROR",
                "Error : OPENING THE FILE PROBLEM",
                "Error : VALUE SYNTAX ERROR",
                "Error : TITLE ERROR",
                "Error : TOO LARGE A NUMBER",
                "Error : PIPE SEPARATE NOT VALIDE TRY TO SEPARATE THE DATE AND VALUE",
                "Error : NOT A POSITIVE NUMBER"
};

int main(int argc, char **argv)
{
    t_BitcoinExchange   bitcoin;
    t_err               err;

    if (argc != 2) 
        {FATAL_ARGM}
    
    err = parce(bitcoin, *++argv);
    if (err & ~VALIDE_FILE) {
        std::cout << _ErrorMsg_[(int)log2((double)err)] << std::endl;
    }


    std::cout << "iam here\n";
    while (!bitcoin.empty())
    {
        std::cout << "time : >" << bitcoin.top().Date << "<" << std::endl;
        std::cout << "value : >" << bitcoin.top().Value << "<" << std::endl;
        bitcoin.pop();
    }

    // search(bitcoin);
    exit(EXIT_SUCCESS);
}