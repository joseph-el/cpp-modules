# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {
    pr("default of PresidentialPardonForm called !");
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm(target, 25, 5) {
    pr("by setting of PresidentialPardonForm called !");
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &Another) {
    pr("copy construtor called !");
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &) {
    pr("assign called of PresidentialPardonForm !");
}

void PresidentialPardonForm::action( void ) {
	std::cout << AForm::getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    pr("destroy called of PresidentialPardonForm !");
}