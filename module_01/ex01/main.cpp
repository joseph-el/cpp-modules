# include "Zombie.hpp"

int main(void)
{
    Zombie *arrays;
    int     N;

    N = 3;
    arrays = zombieHorde(N, "HELLO_-");
    while (N--)
        arrays[N].announce(), std::cout << std::endl;
    delete[] arrays;
    // system("leaks zombieHorde");
    return (EXIT_SUCCESS);
}