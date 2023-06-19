# pragma once

# include <iostream>
# include <string>

class Zombie{
    private :
        std::string name;
    public :
        Zombie();
        ~Zombie();
        void announce(void);
        void set(std::string);
};

Zombie* zombieHorde(int, std::string);
