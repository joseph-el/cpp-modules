# include <iostream>

# define ERR_MSG puts("* LOUD AND UNBEARABLE FEEDBACK NOISE *"); return (1);

int main(int argc, char **argv)
{
    if (argc == 1)
        {ERR_MSG};
    while (++argv and *argv)
        for (char *ret = *argv; *ret; ret++)
            std::cout << (char)toupper(*ret);
    std::cout << std::endl;
    return (EXIT_SUCCESS);
}