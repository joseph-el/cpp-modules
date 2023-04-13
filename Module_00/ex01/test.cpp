# include <iostream>
# include <string>
# include "../../learning_concepts/Colors.hpp"

# define _cout(CL1, TARGET, label) (std::cout << CL1 << TARGET << std::endl goto label)

enum User_interput{
    ADD = (1<<1),
    EXIT = (1<<2),
    SEARCH = (1<<3),
    UNKNOWN = (1<<4)
};

# define U 1
# define F 4
# define C 16

# define go(label) goto label 

# define _goto_(label) (label & (ADD | SEARCH)) ? (label & ADD ? {goto add;} : ({goto set;})) : exit(EXIT_SUCCESS);


int main()
{
int i = 3;
    debut :
        puts("kkk");
        i++;
        if (i == 4)
            _goto_(U);
        
    set :
        puts("set");

    add :
        puts("add");

    return 1;
}
