/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:06:43 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/23 22:15:50 by yoel-idr         ###   ########.fr       */
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

int main(void)
{
    // Animal ret ;
    // Animal nn;
    // nn = ret;

    
    // Animal *R = new Dog();
    // Animal *S = new Cat();
    WrongAnimal *E = new WrongCat();

    
    puts(GREEN);
    std::cout << "Dog sound : "; E->makeSound(); puts("");
    // std::cout << "Cat sound : "; S->makeSound(); puts("");
    puts(WHITE);
    
    // std::cout << ret.getType() << std::endl;

    return (EXIT_SUCCESS);
}