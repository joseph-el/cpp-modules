#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(0) {}

Bureaucrat::Bureaucrat(const std::string &_name, short _grade) : name(_name), grade(_grade) {

    (grade > MAX_GRADE) ? throw GradeTooLowException()  : 0;
	(grade < MIN_GRADE) ? throw GradeTooHighException() : 0;

}

Bureaucrat::Bureaucrat(const Bureaucrat &Another) {
    *this = Another;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &Another) {
    Bureaucrat(Another.getName(), Another.getGrade());
    return (*this);
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

Bureaucrat::~Bureaucrat() {}

bool Bureaucrat::signForm(Form &form) {
	if (form.beSigned(*this)) {
		std::cout << name << " signed " << form.getName() << std::endl;
		return true;
	} else {
		std::cout << name << " couldn't sign " << form.getName() << " because the grade is lower than the required one" << std::endl;
		return false;
	}
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
    os << bureaucrat.getName() << "bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return (os);
}