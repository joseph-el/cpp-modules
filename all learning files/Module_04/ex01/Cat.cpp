/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 16:35:38 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/23 16:36:05 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat() {
    puts("Cat default constructor called !");
}

Cat::Cat(const std::string &Type) : type(Type) {
    puts("Cat constructor using parameters called !");   
}

Cat::Cat(const Cat &Another) {
    puts("Cat copy constructor called !");
    memcpy(this, &Another, sizeof(Cat));
}

Cat& Cat::operator=(const Cat &Another) {
    puts("Cat copy assignment operator called !");
    memcpy(this, &Another, sizeof(Cat));
    return (*this);
}

void Cat::makeSound(void) {
    puts("Cat sound !");
}