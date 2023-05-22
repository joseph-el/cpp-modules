#include "Form.hpp"

Form::Form(const std::string &name, int grade_sign, int grade_exec)
	: name(name), _signed(0), grade_sign(grade_sign), grade_exec(grade_exec)
{
	std::cout << "Form constructor called\n";
	if (grade_sign < 1) {
		throw Form::GradeTooHighException();
	} else if (grade_sign > 150) {
		throw Form::GradeTooLowException();
	}
	if (grade_exec < 1) {
		throw Form::GradeTooHighException();
	} else if (grade_exec > 150) {
		throw Form::GradeTooLowException();
	}
}

Form::~Form() {
	std::cout << "Form destructor called\n";
}

const std::string &Form::getName() const {
	return name;
}

bool Form::isSigned() const {
	return _signed;
}

int Form::getGradeSign() const {
	return grade_sign;
}

int Form::getGradeExec() const {
	return grade_exec;
}

bool Form::beSigned(const Bureaucrat &bur) {
	return bur.getGrade() <= grade_sign? _signed = true: false;
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Form: Exception Grade too high!";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Form: Exception Grade too low!";
}

std::ostream & operator << (std::ostream &os, const Form &form) {
	os << form.getName() << (form.isSigned()? " (signed)": " (not signed)") <<  ", grade required to sign it: " << form.getGradeSign() << \
	", grade required to execute it: " << form.getGradeExec();
	return os;
}