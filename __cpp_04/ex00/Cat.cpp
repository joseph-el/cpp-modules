/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:38:17 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/23 21:46:47 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat() {
    puts("Cat default constructor called !");
}

Cat::Cat(const Cat &Another) {
    puts("Cat copy constructor called !");
    type = Another.getType();

}

Cat& Cat::operator=(const Cat &Another) {
    puts("Cat copy assignment operator called !");
    type = Another.getType();
    return (*this);
}

void Cat::makeSound(void) const {
    puts("Cat sound !");
}

Cat::~Cat() {
	puts("Cat destructor called !");
}