/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 22:28:55 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/16 22:30:33 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

#define FRACT_BITS 8

#define FIXED_POINT_ONE (1 << FRACT_BITS)

#define MAKE_INT_FIXED(x) ((x) << FRACT_BITS)

#define MAKE_FLOAT_FIXED(x) ((int_fixed)((x) * FIXED_POINT_ONE))

#define MAKE_FIXED_INT(x) ((x) >> FRACT_BITS)

#define MAKE_FIXED_FLOAT(x) (((float)(x)) / FIXED_POINT_ONE)

#define FIXED_MULT(x, y) ((x)*(y) >> FRACT_BITS)

#define FIXED_DIV(x, y) (((x)<<FRACT_BITS) / (y))



int main(void)
{
    
}