# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <unistd.h>

Base::~Base() {}

A *new_A() {
    return new A();
}

B* new_B() {
    return new B();
}

C* new_C() {
    return new C();
}


void identify(Base* p) {

	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);
	
	if (a)
		std::cout << "The pointer type is A\n" ;
	if (b)
		std::cout << "The pointer type is B\n";
	if (c)
		std::cout << "The pointer type is C\n";
}

void identify(Base& p) {
	bool is_A;
	bool is_B;
	bool is_C;

	is_A = is_B = is_C = true;

	try {
		A &a = dynamic_cast<A&>(p);
		(void)a;
	}
	catch (std::bad_cast &) {
		is_A = false;
	}
	
	try {
		B &b = dynamic_cast<B&>(p);
		(void)b;
	}
	catch (std::bad_cast &) {
		is_B = false;
	}

	try {
		C &c = dynamic_cast<C&>(p);
		(void)c;
	}
	catch (std::bad_cast &) {
		is_C = false;
	}

	is_A ? puts("The type is A") : 0;
	is_B ? puts("The type is B") : 0;
	is_C ? puts("The type is C") : 0;
}

Base *generate(void) {

    srand(time(NULL));
    short rn = (rand() % 3) + 1;
    switch(rn) {
    case 1:
            return new_A();
    case 2:
            return new_B();
    case 3:
        return new_C();
	default :
		std::cout << "";
    }
    return NULL;
}