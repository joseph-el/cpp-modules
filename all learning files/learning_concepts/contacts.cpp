# include <iostream>
# include <stdlib.h>
# include <errno.h>
# include <stdalign.h>
# include <sandbox.h>
# include <stdio.h>

# if !defined(NULL)
    int set;
    gid_t   segsz_t ret;
    time(NULL);
#endif

using namespace std;


class t_phone{
    private :
        char    f_name[3];
        char    l_name[3];
        char    number[3];
        short   index[3];
    public :
        void    adding(short flag);
        void    display(short flag);
        void    search();
};



int main(void)
{
    char *ret;

    std::string name;
    std::getline(std::cin, name);










    return (EXIT_SUCCESS);
}