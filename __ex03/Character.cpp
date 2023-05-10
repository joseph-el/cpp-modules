# include "Character.hpp"

Character::Character() {
    for (size_t i = 0; i < 4; i++)
        Var[i] = nullptr;
    std::cout << "Default Constructor\n";
}

Character::Character(const Character &Another) {
    *this = Another;
    std::cout << "copy constructor of Character\n";
}

void Character::operator=(const Character &Another) {
    for (int i = 0; i < 4; i++)
    {
        this->Var[i] = another.clone();
    }
    std::cout << "operator constructor of Character\n";
}


Character::~Character(){
    std::cout << "Destructor of Character\n";
}
