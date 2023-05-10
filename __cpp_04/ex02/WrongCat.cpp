/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 22:13:56 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/23 22:14:12 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat() {
    puts("WrongCat default constructor called !");
}

WrongCat::WrongCat(const WrongCat &Another) {
    puts("WrongCat copy constructor called !");
    type = Another.getType();

}

WrongCat& WrongCat::operator=(const WrongCat &Another) {
    puts("WrongCat copy assignment operator called !");
    type = Another.getType();
    return (*this);
}

void WrongCat::makeSound(void) const {
    puts("WrongCat sound !");
}

WrongCat::~WrongCat() {
	puts("WrongCat destructor called !");
}