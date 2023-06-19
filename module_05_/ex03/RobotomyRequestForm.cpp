# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {
    pr("default of RobotomyRequestForm called !");
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm(target, 72, 45) {
    pr("by setting of RobotomyRequestForm called !");
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &) {
    pr("copy construtor called !");
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &) {
    pr("assign called of RobotomyRequestForm !");
    return *this;
}

void RobotomyRequestForm::action( void ) const {
	std::cout << AForm::getName() << " has been robotomized successfully 50\% of the time." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    pr("destroy called of RobotomyRequestForm !");
}