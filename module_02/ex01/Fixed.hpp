# pragma once

# include <iostream>
# include <cmath>

class Fixed {
    
    private :
        int        RawBits;
        static const int fractional;
        
    public :
        Fixed();
        Fixed(const int);
        Fixed(const float);
        Fixed(const Fixed &);
        Fixed& operator =(const Fixed &);
        
        int     getRawBits(void) const;
        void    setRawBits(const int);

        float toFloat( void ) const;
        int toInt( void ) const;
        ~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);