#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {

		Form RET("JOSEPH", 12, 13);
		Form var = RET;
		std::cout << var;
		std::cout << "------------------------------------------------" << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "------------------------------------------------" << std::endl;

	try {
		Form r("TAHA", 1999, 2333);
		std::cout << r;
		std::cout << "------------------------------------------------" << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Form r("DEXTER", -22, -42);
		std::cout << r;
		std::cout << "------------------------------------------------" << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return EXIT_SUCCESS;
}