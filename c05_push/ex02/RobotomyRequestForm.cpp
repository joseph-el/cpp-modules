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
    srand(time(NULL));
    short rn = (rand() % 2) + 1;
    if (rn % 2)
        std::cout << AForm::getName() << " has been robotomized successfully 50\% of the time." << std::endl;
    else 
        std::cout << "not robotomized" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    pr("destroy called of RobotomyRequestForm !");
}