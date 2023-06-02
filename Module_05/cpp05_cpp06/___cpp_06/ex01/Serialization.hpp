# pragma once

# include <iostream>
# include <limits>
# include <cctype>
# include <iomanip>
#include  <errno.h>


struct Data
{
    long Var;
};

class Serialization {

    public :
        Serialization();
        Serialization(const Serialization &);
        Serialization& operator =(const Serialization &);
        
        static uintptr_t serialize(Data *);
        static Data* deserialize(uintptr_t);

        ~Serialization();
};