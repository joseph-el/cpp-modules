#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat b1("b1", 100), b2("b2", 1);
		std::cout << b1 << '\n' << b2 << '\n';
		for (int i = 0; i< 100; i++) {
			b1.inc();
		}
	}
	catch(std::exception &e) {
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;
	try {
		Bureaucrat b1("b1", 160);
	}
	catch(std::exception &e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	try {
		Bureaucrat b1("b1", 100), b2("b2", 1);
		std::cout << b1 << '\n' << b2 << '\n';
		for (int i = 0; i< 200; i++) {
			b2.dec();
		}
	}
	catch(std::exception &e) {
		std::cerr << e.what() << '\n';
	}
}