/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:03:08 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/30 14:28:56 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>

class Fixed {
    
    private :
        int        RawBits;
        static const int fractional;
    public :
        Fixed();
        Fixed(const int);
        Fixed(const Fixed &);
        Fixed& operator =(const Fixed &);
        int     getRawBits(void) const;
        void    setRawBits(const int Raw);


        float toFloat( void ) const;
        int toInt( void ) const;
        ~Fixed();
};