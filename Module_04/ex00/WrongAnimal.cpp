/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 16:54:19 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/23 16:54:40 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongWrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    type = "";
    puts("WrongAnimal default constructor called !");
}

WrongAnimal::WrongAnimal(const std::string &Type) : type(Type) {
    puts("WrongAnimal constructor using parameters called !");   
}

WrongAnimal::WrongAnimal(const WrongAnimal &Another) {
    puts("WrongAnimal copy constructor called !");
    memcpy(this, &Another, sizeof(WrongAnimal));
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &Another) {
    puts("WrongAnimal copy assignment operator called !");
    memcpy(this, &Another, sizeof(WrongAnimal));
    return (*this);
}

void WrongAnimal::makeSound(void) const {
    puts("WrongAnimal sound !");
}

std::string WrongAnimal::getType(void) const {
    return (this->type);
}