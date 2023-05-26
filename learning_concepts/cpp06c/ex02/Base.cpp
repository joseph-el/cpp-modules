#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base * generate(void) {
	srand(time(NULL));
	int x = rand() % 3;
	switch (x) {
		case 0:
			std::cout << "an A has been allocated\n";
			return new A;
		case 1:
			std::cout << "a B has been allocated\n";
			return new B;
		default:
			std::cout << "a C has been allocated\n";
			return new C;
	}
}

void identify(Base* p) {
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);

	if (a) {
		std::cout << "The pointer type is A\n";
	}
	if (b) {
		std::cout << "The pointer type is B\n";
	}
	if (c) {
		std::cout << "The pointer type is C\n";
	}
}

void identify(Base& p) {
	bool isA, isB, isC;
	isA = isB = isC = true;
	
	try {
		A &a = dynamic_cast<A&>(p);
		(void)a;
	} catch (std::exception &e) {
		isA = false;
	}

	try {
		B &b = dynamic_cast<B&>(p);
		(void)b;
	} catch (std::exception &e) {
		isB = false;
	}

	try {
		C &c = dynamic_cast<C&>(p);
		(void)c;
	} catch (std::exception &e) {
		isC = false;
	}

	if (isA) {
		std::cout << "The type is A\n";
	}
	if (isB) {
		std::cout << "The type is B\n";
	}
	if (isC) {
		std::cout << "The type is C\n";
	}
}