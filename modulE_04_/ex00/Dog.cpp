/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:40:11 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/23 21:46:41 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog() {
    puts("Dog default constructor called !");
}

Dog::Dog(const Dog &Another) {
    puts("Dog copy constructor called !");
    type = Another.getType();
}

Dog& Dog::operator=(const Dog &Another) {
    puts("Dog copy assignment operator called !");
    type = Another.getType();
    return (*this);
}

void Dog::makeSound(void) const {
    puts("Dog sound !");
}

Dog::~Dog() {
	puts("Dog destructor called !");
}