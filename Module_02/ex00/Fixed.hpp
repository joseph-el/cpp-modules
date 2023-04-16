/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:08:07 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/16 16:16:55 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# if !defined(FIXED_HPP)
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed {

    private :
        int RawBits;
        static int Bits;
    public :
        ~Fixed();
        Fixed();
        Fixed(const Fixed &);
        int  getRawBits( void ) const;
        void setRawBits( int const );
};

# endif