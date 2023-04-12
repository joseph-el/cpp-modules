# include <iostream>
# include <string>


# define GG(lab) goto lab

int main()
{
    int i = 2;

    debu :
        puts("GGG");
    ser :
        puts("----------LO");
    puts("LOL");
    goto debu;
}