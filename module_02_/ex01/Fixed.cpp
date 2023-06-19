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
    return (RawBits);
}

void Fixed::setRawBits(int const Raw) {
    RawBits = Raw;
}

Fixed::~Fixed() {
    puts("Destructor called");
}

Fixed::Fixed(const int integer) : RawBits(integer << fractional)  {
    puts("Constructor that takes a constant integer number");
}

Fixed::Fixed(const float floating_point) {
    puts("Constructor that takes a constant floating-point number");
    RawBits = roundf(floating_point * (float)pow(2.0, fractional));
}

float Fixed::toFloat(void) const
{
	return (float)RawBits / pow(2.0, fractional);
}

int Fixed::toInt(void) const {
	return (RawBits >> fractional);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return os;
}