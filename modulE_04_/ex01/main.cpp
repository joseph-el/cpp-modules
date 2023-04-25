/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:06:43 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/24 12:15:00 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    # define MAX_SIZE 8

int main(void) 
{
    {
        const Animal* j = new Dog();
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
        delete  ret[i], ret[i] = nullptr;
    delete [] ret;
    
    system("leaks Animal"), exit(EXIT_SUCCESS);
}