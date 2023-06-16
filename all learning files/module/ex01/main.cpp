#include "Data.hpp"

int  main()
{
	Data d;
	Data *dp = &d;
	uintptr_t ptrv = serialize(dp);

	std::cout << deserialize(ptrv) << std::endl << dp << std::endl << std::hex << ptrv << std::endl;
}