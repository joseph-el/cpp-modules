# include "AForm.hpp"
# include "Bureaucrat.hpp"

AForm::AForm() : name("AForm"), grade_sign(0), grade_execute(0) {
    std::cout << "Default called !" << std::endl;
}

AForm::AForm(const std::string &_name, const short x, const short y) : name(_name), grade_sign(x), grade_execute(y) {
    std::cout << "by setting called !" << std::endl;
    
    (grade_sign > 150) ? throw Form::GradeTooLowException() : 0;
    (grade_sign < 1) ? throw Form::GradeTooHighException()  : 0;
	
	(grade_execute > 150) ? throw Form::GradeTooLowException() : 0;
	(grade_execute < 1) ? throw Form::GradeTooHighException()  : 0;
}

AForm::~AForm() {
    std::cout << "destroy called of " << name << std::endl;
}

const char *AForm::GradeTooHighException::what() const throw() {
	return RED"AForm: Exception Grade too high!"WHITE;
}

const char *AForm::GradeTooLowException::what() const throw() {
	return GREEN"AForm: Exception Grade too low!"WHITE;
}

const char *AForm::ErrorWenTryToExecute::what() const throw() {
	return RED"I can't Execute ⛔️"WHITE;
}

const std::string& AForm::getName( void ) const {
    return (name);
}

short AForm::getGrade_sign( void ) const {
    return grade_sign;
}

short AForm::getGrade_execute( void ) const {
    return grade_execute;
}

bool AForm::is_SIGNED( void ) const {
    return is_signed;
}

bool AForm::beSigned(class Bureaucrat &object) {

    if (object.getGrade() <= grade_sign)
        is_signed = true;
    else
        throw Form::GradeTooLowException();
        
    return (is_signed);
}

void    AForm::execute(Bureaucrat const &executor) const {
    if (!is_signed || executor.getGrade() > grade_execute)
        throw ErrorWenTryToExecute();
    action();
}

std::ostream & operator<<(std::ostream &os, const AForm &AForm) {

    os << "AForm :: " << AForm.getName() << " grade execute " << AForm.getGrade_execute()
                    << (AForm.is_SIGNED() ? " signed " : " not signed by ") << AForm.getGrade_sign() << std::endl;  
    return (os);
}

