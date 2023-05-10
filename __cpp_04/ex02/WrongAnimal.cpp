/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:10:27 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/23 22:12:15 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    type = "Empty!";
    puts("WrongAnimal default constructor called !");
}

WrongAnimal::WrongAnimal(const std::string &Type) : type(Type) {
    puts("WrongAnimal constructor using parameters called !");   
}

WrongAnimal::WrongAnimal(const WrongAnimal &Another) {
    puts("WrongAnimal copy constructor called !");
    type = Another.getType();
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &Another) {
    puts("WrongAnimal copy assignment operator called !");
    type = Another.getType();
    return (*this);
}

void WrongAnimal::makeSound(void) const {
    puts("WrongAnimal sound !");
}

const std::string& WrongAnimal::getType(void) const {
    return (this->type);
}

WrongAnimal::~WrongAnimal() {
	puts("WrongAnimal destructor called !");
}