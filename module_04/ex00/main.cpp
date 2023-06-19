# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

int main(void)
{
    Animal *R = new Dog();
    Animal *S = new Cat();
    {
        puts(YELLOW);
        std::cout << "Tes For Dog : "; R->makeSound();
        puts(GREEN);
        std::cout << "Tes For Cat : "; S->makeSound();
    }
    usleep(450000);puts("");
    puts(WHITE);
    puts("see the problem");puts("");puts("");


    
    WrongAnimal *E = new WrongCat();
    {
        std::cout << "Cat sound : "; E->makeSound(); puts("");
        puts(RED);
    }
    delete R;
    delete S;
    delete E;
}