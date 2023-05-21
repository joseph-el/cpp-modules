#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {
		Form f1("f1", 100, 100);
		std::cout << f1 << std::endl;

		Bureaucrat b1("b1", 90);
		std::cout << b1 << std::endl;

		b1.signForm(f1);
		std::cout << f1 << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	try {
		Form f1("f1", 100, 100);
		std::cout << f1 << std::endl;

		Bureaucrat b1("b1", 150);
		std::cout << b1 << std::endl;

		b1.signForm(f1);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	try {
		Form f1("f1", 1000, 1000);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}