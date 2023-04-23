/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 16:31:45 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/23 16:33:37 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog() {
    puts("Dog default constructor called !");
}

Dog::Dog(const std::string &Type) : type(Type) {
    puts("Dog constructor using parameters called !");   
}

Dog::Dog(const Dog &Another) {
    puts("Dog copy constructor called !");
    memcpy(this, &Another, sizeof(Dog));
}

Dog& Dog::operator=(const Dog &Another) {
    puts("Dog copy assignment operator called !");
    memcpy(this, &Another, sizeof(Dog));
    return (*this);
}

void Dog::makeSound(void) {
    puts("Dog sound !");
}