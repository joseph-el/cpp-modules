# include "iter.hpp"

void show(const int ToPrint) {
    std::cout << ToPrint << std::endl;
}

void show(const std::string ToPrint) {
    std::cout << ToPrint << std::endl;
}

int main(void)
{
    int INT[MAX_SIZE] = {12, -2, 33, 44, 99};
    std::string STR[MAX_SIZE] = {"HEY", "JOSEPH", "ARE", "U", "FINE"};

    iter(INT, MAX_SIZE, show);
    puts("-----------------------------");
    iter(STR, MAX_SIZE, show);

    exit(EXIT_SUCCESS);
}