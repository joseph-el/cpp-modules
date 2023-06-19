# pragma once

# include <iostream>

class Fixed {
    
    private :
        int        RawBits;
        static const int fractional;
    public :
        Fixed();
        Fixed(const Fixed &);
        Fixed& operator =(const Fixed &);
        int     getRawBits(void) const;
        void    setRawBits(const int Raw);
        ~Fixed();
};