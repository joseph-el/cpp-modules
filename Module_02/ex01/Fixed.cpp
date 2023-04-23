/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 21:49:44 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/16 22:01:09 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

const int Fixed::fractional = 8;

Fixed::Fixed() : RawBits(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

void Fixed::operator=(const Fixed &Another) {
    std::cout << "" << std::endl;
    RawBits = Another.getRawBits();
}

Fixed::Fixed(const Fixed &Another) {
    std::cout << "Copy constructor called" << std::endl;
    *this = Another;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (RawBits);
}

void Fixed::setRawBits(int const Raw) {
    RawBits = Raw;
}