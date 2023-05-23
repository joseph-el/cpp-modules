#include "RobotomyRequestForm.hpp"
		
RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form(target, 72, 45) {
	std::cout << "RobotomyRequestForm constructor called\n";
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destructor called\n";
}

void RobotomyRequestForm::action() const {
	std::cout << Form::getName() << " has been robotomized successfully 50\% of the time.\n";
}