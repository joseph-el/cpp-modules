
# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

# define RED    "\033[0;31m"
# define BLACK  "\033[0;30m"
# define GREEN  "\033[0;32m"
# define WHITE  "\033[0;37m"
# define YELLOW "\033[1;33m"

int main(void) 
{
    puts(RED);
    Animal *ret = new Dog();
    puts(WHITE);
    delete ret;
}