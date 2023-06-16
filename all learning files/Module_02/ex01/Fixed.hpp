/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 21:44:34 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/16 22:06:21 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# if !defined(FIXED_HPP)
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed {
    
    private :
        int RawBits;
        static int fractional;

    public :
        Fixed ();
        Fixed(const int);
        Fixed(const float);
        
        ~Fixed();
        Fixed(const Fixed &);
        void operator = (const Fixed &);
        
        float toFloat( void ) const;
        int   toInt( void ) const;

        int  getRawBits(void) const;
        void setRawBits(int const);
        

        
};

# endif