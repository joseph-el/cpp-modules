# if !defined(HEADER_HPP)
# define HEADER_HPP

# include <string>
# include <fstream>
# include <iostream>

# define _ST std::string
# define FATAL(X) std::cout << X << std::endl; return 1;

class _STR {
    public :
        _STR(_ST , _ST , _ST , _ST );
    _ST S1;
    _ST S2;
    _ST GL;
    _ST buffer;
    _ST outfile;
};

# endif