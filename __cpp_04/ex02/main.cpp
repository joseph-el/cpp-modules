/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:06:43 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/24 15:07:23 by yoel-idr         ###   ########.fr       */
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
    puts(RED);
    Animal *ret = new Dog();
    puts(WHITE);
    delete ret;
}