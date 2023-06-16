# include "BitcoinExchange.hpp"

const char *_ErrorMsg_[] = {

                "Error : EMPTY CONTENT",
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
        {ARGM_ERROR}
    
    err = parce(bitcoin, *++argv);
    if (err & ~VALIDE_FILE)
        std::cout << _ErrorMsg_[ (int)log2( (double) err) ] << std::endl;

    _SHOW_DATE_(bitcoin);

    exit(EXIT_SUCCESS);
}