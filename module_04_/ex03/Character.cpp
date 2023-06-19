# include "Character.hpp"
# include "AMateria.hpp"

Character::Character() : name("Character"), SaveAddress(NULL) {
    for (size_t i = 0; i < 4; i++)
        Var[i] = NULL;
    // std::cout << "Default Constructor of Character\n";
}

Character::Character(const std::string &NAME) : name(NAME), SaveAddress(NULL) {
    for (size_t i = 0; i < 4; i++)
        Var[i] = NULL;
    // std::cout << "constructor by setting of Character\n";
}

Character::Character(const Character &Another) {
    *this = Another;
    // std::cout << "copy constructor of Character\n";
}

void Character::operator=(const Character &Another) {
    for (int i = 0; i < 4; i++) {
        if (Var[i])
            delete Var[i];
        Var[i] = Another.Var[i]->clone();
    }
    name = Another.getName();
    // std::cout << "operator constructor of Character\n";
}

void Character::unequip(int idx) {
    if (idx < 0 or idx > 3)
        return ;
    SaveAddress = Var[idx];
    Var[idx] = NULL;
    removeAddress();
}

void Character::removeAddress(void) {
    if (!SaveAddress)
        return ;
    delete SaveAddress;
    SaveAddress = NULL;
}

void Character::equip(AMateria *Adding) {
    if (!Adding)
        return ;
    for (int i = 0; i < 4; i++)
        if (!Var[i]) {
            Var[i] = Adding;
            return ;
        }
}

void Character::use(int idx, ICharacter &target) {
    if (idx > 3 or idx < 0 or !Var[idx])
        return ;
    (*this).Var[idx]->use(target);
}

std::string const & Character::getName(void) const {
        return (this->name);
}

Character::~Character(){
    for (int i = 0; i < 4; i++)
        if (Var[i])
            delete Var[i];
    // std::cout << "Destructor of Character\n";
}