#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool _signed;
		const int grade_sign;
		const int grade_exec;
	public:
		class GradeTooHighException: public std::exception {
			virtual const char *what(void) const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char *what(void) const throw();
		};
		class CannotExecute: public std::exception {
			virtual const char *what(void) const throw();
		};
		Form(const std::string &name, int grade_sign, int grade_exec);
		virtual ~Form();
		const std::string &getName() const;
		bool isSigned() const;
		int getGradeSign() const;
		int getGradeExec() const;
		bool beSigned(const Bureaucrat &bur);
		void execute(Bureaucrat const &executor) const;
		virtual void action(void) const = 0;
};

std::ostream & operator << (std::ostream &os, const Form &form);