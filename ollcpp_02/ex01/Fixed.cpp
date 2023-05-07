 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:44:34 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/28 16:00:26 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

const int Fixed::fractional = 8;

Fixed::Fixed() : RawBits(0) {
    puts("Fixed Default constructor called");
}

Fixed::Fixed(const Fixed &Another) {
    puts("Copy constructor called");
    *this = Another;
}

Fixed& Fixed::operator=(const Fixed &Another) {
    puts("Copy assignment operator called");
    RawBits = Another.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const {
    puts("getRawBits member function called");
    return (RawBits);
}

void Fixed::setRawBits(int const Raw) {
    RawBits = Raw;
}

Fixed::~Fixed() {
    puts("Destructor called");
}