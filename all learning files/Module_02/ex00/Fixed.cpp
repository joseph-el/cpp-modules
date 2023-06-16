/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:11:58 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/16 21:59:28 by yoel-idr         ###   ########.fr       */
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

Fixed::Fixed(const Fixed &Another) {
    std::cout << "Copy constructor called" << std::endl;
    *this = Another;
}

void Fixed::operator=(const Fixed &Another) {
    std::cout << "Copy assignment operator called" << std::endl;
    RawBits = Another.getRawBits();
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (RawBits);
}

void Fixed::setRawBits(int const Raw) {
    RawBits = Raw;
}