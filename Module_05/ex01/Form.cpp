# include "Form.hpp"
# include "Bureaucrat.hpp"

Form::Form() : name("form"), grade_sign(1), grade_execute(1) {
    std::cout << "Default called !" << std::endl;
}

Form::Form(const std::string &_name, const short x, const short y) : name(_name), grade_sign(x), grade_execute(y) {
    std::cout << "by setting called !" << std::endl;
    
    (grade_sign < MIN_GRADE) ? throw Form::GradeTooHighException() : 0;
    (grade_sign > MAX_GRADE) ? throw Form::GradeTooLowException()  : 0;
	
	(grade_execute < MIN_GRADE) ? throw Form::GradeTooHighException() : 0;
	(grade_execute > MAX_GRADE) ? throw Form::GradeTooLowException()  : 0;
}

Form::Form(const Form &Another) : name(Another.name), grade_sign(Another.grade_sign), grade_execute(Another.grade_execute) {
    std::cout << "copy constructor called !" << std::endl;
}

Form& Form::operator=(const Form &Another) {
    if (this != &Another)
        *this = Form(Another.name, Another.grade_sign, Another.grade_execute);
    return *this;
}

Form::~Form() {
    std::cout << "destroy called of " << name << std::endl;
}

const char *Form::GradeTooHighException::what() const throw() {
	return RED"Form: Exception Grade too high!"WHITE;
}

const char *Form::GradeTooLowException::what() const throw() {
	return GREEN"Form: Exception Grade too low!"WHITE;
}

const std::string& Form::getName( void ) const {
    return (name);
}

short Form::getGrade_sign( void ) const {
    return grade_sign;
}

short Form::getGrade_execute( void ) const {
    return grade_execute;
}

bool Form::is_SIGNED( void ) const {
    return is_signed;
}


bool Form::beSigned(class Bureaucrat &object) {

    (object.getGrade() < MIN_GRADE) ? throw Form::GradeTooLowException() : 0;
    (object.getGrade() <= grade_sign) ? (is_signed = true) : (is_signed = false);
    
    return (is_signed);
}

std::ostream & operator<<(std::ostream &os, const Form &form) {

    os << "Form :: "    << form.getName() << " grade execute " << form.getGrade_execute()
                        << (form.is_SIGNED() ? " signed " : " not signed by ") << form.getGrade_sign() << std::endl;  
    return (os);
}

