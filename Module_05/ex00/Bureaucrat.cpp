# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(1) {
    std::cout << "Default called !" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &_name, short _grade) : name(_name), grade(_grade) {
    std::cout << "By setting called !" << std::endl;
    (grade > MAX_GRADE) ? throw GradeTooLowException()  : 0;
	(grade < MIN_GRADE) ? throw GradeTooHighException() : 0;

}

Bureaucrat::Bureaucrat(const Bureaucrat &Another) : name(Another.name), grade(Another.grade) {
    std::cout << "Copy called !" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &Another) {
    std::cout << "assign operator called !" << std::endl;
    if (this != &Another)
        *this = Bureaucrat(Another);
    return *this;
}

void Bureaucrat::increment(void) {
    (++grade > MAX_GRADE) ? throw GradeTooLowException()  : 0;
}

void Bureaucrat::decrement(void) {
	(--grade < MIN_GRADE) ? throw GradeTooHighException() : 0;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw() {
	return "Bureaucrat: GradeTooHighException";
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw() {
	return "Bureaucrat: GradeTooLowException";
}

std::string Bureaucrat::getName(void) const {
    return (name);
}

short Bureaucrat::getGrade(void) const {
    return (grade);
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
    os << bureaucrat.getName() << " bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return (os);
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Destructor called ! ==? " << name <<  std::endl;
}