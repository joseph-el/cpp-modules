#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
# include <unistd.h>

int  main()
{

    int x = -1;

	while (++x < 6) {
		Base *x = generate();
		identify(x);
		delete x;
	    usleep(140000);
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