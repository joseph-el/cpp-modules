#pragma once

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int rawBits;
		static const int fraction;
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed(const int decimalPoint);
		Fixed(const float floatPoint);
		void operator = (const Fixed &fixed);
		int getRawBits(void) const ;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		bool operator > (const Fixed &fx) const;
		bool operator >= (const Fixed &fx) const;
		bool operator < (const Fixed &fx) const;
		bool operator <= (const Fixed &fx) const;
		bool operator == (const Fixed &fx) const;
		bool operator != (const Fixed &fx) const;
		Fixed operator + (const Fixed &fx) const;
		Fixed operator - (const Fixed &fx) const;
		Fixed operator * (const Fixed &fx) const;
		Fixed operator / (const Fixed &fx) const;
		Fixed operator ++ ();
		Fixed operator ++ (int);
		Fixed operator -- ();
		Fixed operator -- (int);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& dt);