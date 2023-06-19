#include <iostream>
#include <bitset>

int main()
{
    std::bitset <5> a, b;
 
    b.set();
    for (int i = 0; i < 5 ;i++)
    {
        if (i % 2 == 0)
            a[i].flip();
    }
    std::cout << "Bitset a: " << a << std::endl;
    std::cout << "Bitset b: " << b << std::endl;
    std::cout << std::endl;
    std::cout << "a XOR b = " << (a ^ b) << std::endl;
    std::cout << "a AND b = " << (a & b) << std::endl;
    std::cout << "a OR b  = " << (a | b) << std::endl;
    std::cout << " NOT(a) = " << (~a) << std::endl;
}