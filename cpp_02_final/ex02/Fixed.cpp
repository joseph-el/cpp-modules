
# include "Fixed.hpp"

const int Fixed::fractional = 8;

Fixed::Fixed() : RawBits(0) {
    // puts("Fixed Default constructor called");
}

Fixed::Fixed(const Fixed &Another) {
    // puts("Copy constructor called");
    *this = Another;
}

Fixed& Fixed::operator=(const Fixed &Another) {
    // puts("Copy assignment operator called");
    RawBits = Another.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const {
    // puts("getRawBits member function called");
    return (RawBits);
}

void Fixed::setRawBits(int const Raw) {
    RawBits = Raw;
}

Fixed::Fixed(const int integer) : RawBits(integer << fractional)  {
    // puts("Constructor that takes a constant integer number");
}

Fixed::Fixed(const float floating_point) {
    // puts("Constructor that takes a constant floating-point number");
    RawBits = roundf(floating_point * pow(2.0, fractional));
}

float Fixed::toFloat(void) const
{
	return (float)RawBits / pow(2.0, fractional);
}

int Fixed::toInt(void) const {
	return (RawBits >> fractional);
}

std::ostream& operator<<(std::ostream& ostream, const Fixed& fixed) {
	ostream << fixed.toFloat();
	return (ostream);
}

bool Fixed::operator > (const Fixed &fixed) const {
	return (RawBits > fixed.getRawBits());
}

bool Fixed::operator >= (const Fixed &fixed) const {
	return (RawBits >= fixed.getRawBits());
}

bool Fixed::operator < (const Fixed &fixed) const {
	return (RawBits < fixed.getRawBits());
}

bool Fixed::operator <= (const Fixed &fixed) const {
	return (RawBits <= fixed.getRawBits());
}

bool Fixed::operator == (const Fixed &fixed) const {
	return (RawBits == fixed.getRawBits());
}

bool Fixed::operator != (const Fixed &fixed) const {
	return (RawBits != fixed.getRawBits());
}

Fixed Fixed::operator + (const Fixed &fixed) const {
	return Fixed(toFloat() + fixed.toFloat());
}

Fixed Fixed::operator - (const Fixed &fixed) const {
	return Fixed(toFloat() - fixed.toFloat());
}

Fixed Fixed::operator * (const Fixed &fixed) const {
	return Fixed(toFloat() * fixed.toFloat());
}

Fixed Fixed::operator / (const Fixed &fixed) const {
	return Fixed(toFloat() / fixed.toFloat());
}

Fixed Fixed::operator ++ () {
	return (++RawBits, *this);
}

Fixed Fixed::operator ++ (int) {
	Fixed ret = *this;
	return (++RawBits, ret);
}

Fixed Fixed::operator -- () {
	return --RawBits, *this;
}

Fixed Fixed::operator -- (int) {
	Fixed ret = *this;
	return (--RawBits, ret);
}

Fixed &Fixed::max(Fixed &obj1, Fixed &obj2) {
	return obj1 >= obj2 ? obj1 : obj2;
}

const Fixed &Fixed::max(const Fixed &obj1, const Fixed &obj2) {
	return obj1 >= obj2 ? obj1 : obj2;
}

Fixed &Fixed::min(Fixed &obj1, Fixed &obj2) {
	return obj1 <= obj2 ? obj1 : obj2;
}

const Fixed &Fixed::min(const Fixed &obj1, const Fixed &obj2) {
	return obj1 <= obj2 ? obj1 : obj2;
}

Fixed::~Fixed() {
    // puts("Destructor called");
}