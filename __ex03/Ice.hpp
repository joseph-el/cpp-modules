# pragma once

# include "AMateria.hpp"

class Ice : public AMateria {
    public :
        Ice();
        Ice(const Ice &);
        void operator=(const Ice &);
        std::string const & GetNAME() const;
        ~Ice();
}