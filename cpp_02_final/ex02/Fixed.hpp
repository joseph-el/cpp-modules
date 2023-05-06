#pragma once

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int RawBits;
		static const int fractional;
	public:
		Fixed();
		Fixed(const Fixed &);
		Fixed(const int);
		Fixed(const float);
		Fixed&	operator= (const Fixed &); 
		int getRawBits(void) const ;
		void setRawBits(int const);
		float toFloat(void) const;
		int toInt(void) const;
		bool operator > (const Fixed &) const;
		bool operator < (const Fixed &) const;
		bool operator >= (const Fixed &) const;
		bool operator <= (const Fixed &) const;
		bool operator == (const Fixed &) const;
		bool operator != (const Fixed &) const;
		Fixed operator + (const Fixed &) const;
		Fixed operator - (const Fixed &) const;
		Fixed operator * (const Fixed &) const;
		Fixed operator / (const Fixed &) const;
		Fixed operator ++ ();
		Fixed operator -- ();
		Fixed operator ++ (int);
		Fixed operator -- (int);
		static Fixed &max(Fixed &, Fixed &);
		static Fixed &min(Fixed &, Fixed &);
		static const Fixed &max(const Fixed &, const Fixed &);
		static const Fixed &min(const Fixed &, const Fixed &);
		~Fixed();
};

std::ostream& operator << (std::ostream&, const Fixed&);