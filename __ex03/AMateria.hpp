# pragma once

# include <iostream>

class AMateria
{
    protected:
        std::string type;
    public:

        AMateria();
        AMateria(const AMateria &);
        void operator =(const AMateria &);


        AMateria(std::string const & type);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        // virtual void use(ICharacter& target);

        ~AMateria();

};
