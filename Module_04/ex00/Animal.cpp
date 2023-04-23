/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 12:25:26 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/23 16:51:46 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal() {
    type = "";
    puts("Animal default constructor called !");
}

Animal::Animal(const std::string &Type) : type(Type) {
    puts("Animal constructor using parameters called !");   
}

Animal::Animal(const Animal &Another) {
    puts("Animal copy constructor called !");
    memcpy(this, &Another, sizeof(Animal));
}

Animal& Animal::operator=(const Animal &Another) {
    puts("Animal copy assignment operator called !");
    memcpy(this, &Another, sizeof(Animal));
    return (*this);
}

void Animal::makeSound(void) const {
    puts("Animal sound !");
}

std::string Animal::getType(void) const {
    return (this->type);
}
