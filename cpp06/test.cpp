# include <iostream>
# include <iostream>
# include <limits>
# include <cctype>
# include <iomanip>
#include  <errno.h>
# include <string.h>

int main()
{
    int test = strtol("1111111111111111", NULL, 0);
    errno = ENOM
    std::cout << "check  " << errno << std::endl;
}