# include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++)
        VAR[i] = NULL;
    
        // std::cout << "Default Constructor of MateriaSource\n";
} 

MateriaSource::MateriaSource(const MateriaSource &Another){
    *this = Another;
    // std::cout << "copy constructor of MateriaSource\n";
}

void MateriaSource::operator=(const MateriaSource &Another) {
    for (int i = 0; i < 4; i++) {
        if (VAR[i])
            delete VAR[i], VAR[i] = NULL;
        VAR[i] = Another.VAR[i]->clone();
    }
    // std::cout << "operator constructor of MateriaSource\n";
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++)
        if (VAR[i])
            delete VAR[i];
    // std::cout << "Destructor of MateriaSource\n";
}

void	MateriaSource::learnMateria(AMateria *target)
{
    if (!target)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (!VAR[i]) {
            VAR[i] = target;
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4; i++) {
		if (VAR[i]) {
            if (VAR[i]->getType() == type) {
				return ((*this).VAR[i]->clone());
            }
        }
    }
	return (0);
}