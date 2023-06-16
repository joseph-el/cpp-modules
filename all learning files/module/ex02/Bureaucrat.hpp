#pragma once
#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string name;
		int grade; // from 1 to 150
	public:
		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat();
		class GradeTooHighException: public std::exception {
			virtual const char *what(void) const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char *what(void) const throw();
		};
		const std::string &getName() const ;
		int getGrade() const ;
		void inc();
		void dec();
		bool signForm(Form &form);
};

std::ostream & operator << (std::ostream &os, const Bureaucrat &bur);