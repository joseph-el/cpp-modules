#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(1) {}

Bureaucrat::Bureaucrat(const std::string &_name, short _grade) : name(_name), grade(_grade) {

    (grade < 1) ? throw GradeTooHighException()  : 0;
	(grade > 150) ? throw GradeTooLowException() : 0;

}

Bureaucrat::Bureaucrat(const Bureaucrat &Another) {
    *this = Another;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &Another) {
    Bureaucrat(Another.getName(), Another.getGrade());
    return (*this);
}

void Bureaucrat::increment(void) {
    (--grade > 150) ? throw GradeTooLowException()  : 0;
}

void Bureaucrat::decrement(void) {
	(++grade < 1) ? throw GradeTooHighException() : 0;
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

Bureaucrat::~Bureaucrat() {
	std::cout << "destroy called !" << std::endl;
}

void Bureaucrat::signForm(Form &form) {

    try {
        if  (form.beSigned(*this));
            std::cout << name << " signed " << form.getName() << std::endl;
        return ;
    }
    catch (std::exception &e) {
        std::cout << name << " couldn’t sign " << form.getName() <<  " because " << e.what() << std::endl;
    }
	
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
    os << bureaucrat.getName() << " bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return (os);
}