# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(0) {}

Bureaucrat::Bureaucrat(const std::string &_name, short _grade) : name(_name), grade(_grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &Another) {
    Bureaucrat(Another.getName(), Another.getGrade());
    return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &Another) {
    *this = Another;
}

void Bureaucrat::GradeTooHighException(void) const {
}

void Bureaucrat::GradeTooLowException(void) const {
}

void Bureaucrat::increment(short index) {
    try {
        grade += index;
        grade > 150 ? throw std::exception() : 0;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}

void Bureaucrat::decrement(short index) {
    try {
        grade -= index;
        grade < 0 ? throw std::exception() : 0;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
}

std::ostream& operator << (std::ostream& os, const Bureaucrat &bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return os;
}




