#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form(target, 25, 5) {
	std::cout << "PresidentialPardonForm constuctor called\n";
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm destructor called\n";
}

void PresidentialPardonForm::action() const {
	std::cout << Form::getName() << " has been pardoned by Zaphod Beeblebrox\n";
}