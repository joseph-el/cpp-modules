#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try {
		Bureaucrat b("B1", 1);
		ShrubberyCreationForm s("F1");
		b.signForm(s);
		s.execute(b);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	try {
		Bureaucrat b("B2", 1);
		RobotomyRequestForm s("F2");
		b.signForm(s);
		s.execute(b);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	try {
		Bureaucrat b("B3", 1);
		PresidentialPardonForm s("F3");
		b.signForm(s);
		s.execute(b);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	try {
		Bureaucrat b("B3", 150);
		PresidentialPardonForm s("F3");
		b.signForm(s);
		s.execute(b);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}