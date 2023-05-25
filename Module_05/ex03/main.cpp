#include "Intern.hpp"

int main()
{
	Intern intern;

	try {
			Bureaucrat ret("Joseph", 12);
			AForm *y = intern.makeForm("INVALID INPUT !", "call me");
			if (!y)
				throw -1;
			y->execute(ret);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	catch (...) {
		std::cout << "skip NULL " << std::endl;
	}

	puts("----------------------------------------------------------------------------------------------------");


	try {
			Bureaucrat ret("Joseph", 12);
			AForm *y = intern.makeForm("robotomy request", "call me");
			if (!y)
				return EXIT_FAILURE;
			ret.signForm(*y);
			y->execute(ret);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	puts("----------------------------------------------------------------------------------------------------");

	try {
			Bureaucrat ret("Joseph", 1);
			AForm *y = intern.makeForm("presidential request", "call me");
			if (!y)
				return EXIT_FAILURE;
			ret.signForm(*y);
			y->execute(ret);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	puts("----------------------------------------------------------------------------------------------------");

	try {
			Bureaucrat ret("Joseph", 9);
			AForm *y = intern.makeForm("shrubbery request", "call me");
			if (!y)
				return EXIT_FAILURE;
			ret.signForm(*y);
			y->execute(ret);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}


}