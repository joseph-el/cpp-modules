# include "ScalarConverter.hpp"

bool    Is_Number(_st ret, int &ValueofInt, char &ValueofChar, \
    float &ValueofFloat, double &ValueofDouble) {


    short   remember  = 0;
    char    *endl;

    ValueofDouble = strtod(ret.c_str(), &endl);
    ValueofChar  = is_char(ret) ? ret[0] : -1;
    ValueofFloat = static_cast<float>(ValueofDouble);
    ValueofInt = static_cast<Int>(ValueofDouble);
    for (int i = ret[0] == '+' or ret[0] == '-' ? 1 : 0; ret[i]; i++)
        if (!isdigit(ret[i]) && ret[i] != '.')
            return (false);
        else if (ret[i])
            remember += (ret[i] == '.');
    if (remember > 1)
            return (false);
    
    if (errno == ERANGE || MAX_OF_INT(ValueofInt) || isnan(ValueofFloat) \
                        || isinf(ValueofFloat) || isnan(ValueofDouble) || isinf(ValueofDouble))
        return (false);
}