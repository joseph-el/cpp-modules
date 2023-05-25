# include "Intern.hpp"

Intern::Intern() {
    pr("Default of Intern called !");
}

Intern::~Intern() {
    pr("Destroy of Intern called !");
}

const std::string Requests[3] = {
	"robotomy request", "presidential request", "shrubbery request" 
};

AForm *getShrubery(const std::string &target) {
	return new ShrubberyCreationForm(target);
}

AForm *getPresidential(const std::string &target) {
	return new PresidentialPardonForm(target);
}

AForm *getRobotomy(const std::string &target) {
	return new RobotomyRequestForm(target);
}

AForm* Intern::makeForm(const std::string &form, const std::string &target) {

    AForm *(*func)(const std::string &) = NULL;

    form == Requests[0] ? func = &getRobotomy : 0;
    form == Requests[2] ? func = &getShrubery : 0;
    form == Requests[1] ? func = &getPresidential : 0;

    if (!func) {
        std::cout << "Intern " << form << " invalide Request" << std::endl;;
        return NULL;
    }

    return func(target);
}