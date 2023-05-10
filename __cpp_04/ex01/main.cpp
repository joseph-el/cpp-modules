
# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

int main(void) 
{
    {51 

        const Animal* i = new Cat();
        delete j; //should not create a leak
        delete i;
        system("leaks Animal"), exit(EXIT_SUCCESS);
    }
    
    Animal **ret = new Animal*[MAX_SIZE];
    int i = -1;
    puts(GREEN);
    while (++i < MAX_SIZE) {
        if (i < MAX_SIZE / 2)
            ret[i] = new Dog();
        else
            ret[i] = new Cat();
    }
    puts(WHITE);
    while (i--)
        delete  ret[i], ret[i] = NULL;
    delete [] ret;
    system("leaks Animal"), exit(EXIT_SUCCESS);
}