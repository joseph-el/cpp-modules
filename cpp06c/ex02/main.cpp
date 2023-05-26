#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int  main()
{
	for (int i = 0; i< 10; i++) {
		Base *x = generate();
		identify(x);
		delete x;
	}

	std::cout << std::endl;
	A a;
	B b;
	C c;

	identify(a);
	identify(&a);
	identify(b);
	identify(&b);
	identify(c);
	identify(&c);
}