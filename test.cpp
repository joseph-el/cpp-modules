# include <iostream>
# include <string>


# define GG(lab) goto lab

int main()
{
int i = 3;
    debut :
        puts("kkk");
        i++;
        if (i == 4)
            GG(debut);
    return 1;
}