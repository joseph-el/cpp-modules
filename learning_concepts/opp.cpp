# include <iostream>
# include <stdlib.h>
# include <errno.h>
# include <stdalign.h>
# include <sandbox.h>
# include <stdio.h>


class myclass {
    private :
        std::string name;
        std::string user;
        short       number;
    public  :
        void    add();
        void    search();
        void    exit();
};

using namespace std;

void    myclass::search(void)
{

    std::cout << "User >> " << name << endl;
    std::string::iterator it = name.begin();

    if (it == name.end())
    {
        std::cout << "ERROR TYPE" << endl;
    }

}

void    myclass::add(void)
{
    std::cout << "WRITE USER NAME : ";
    getline(cin, name);
    // if (name)
    //     std::cout << "ERROR";
}


int main(int argc, char **argv)
{
    myclass ret;


    ret.add();
    
    
    ret.search();
    return (EXIT_SUCCESS);
}