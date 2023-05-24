#include "Bureaucrat.hpp"

int main( void ) {
	
	std::cout << WHITE;
	try {
		Bureaucrat RET("JOSEPH", 1);
		Bureaucrat SET = RET;
		std::cout << "--------------------------" << std::endl;
		std::cout << SET;
		std::cout << "--------------------------" << std::endl;
		for (int i = 0; i < 1; i++)
			SET.increment();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "--------------------------""--------------------------"<< std::endl;
	try {
		Bureaucrat RET("TAHA", 33);
		Bureaucrat SET = RET;
		std::cout << "--------------------------" << std::endl;
		std::cout << SET;
		std::cout << "--------------------------" << std::endl;
		for (int i = 0; i < 1; i++)
			SET.decrement();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return EXIT_SUCCESS;
}


