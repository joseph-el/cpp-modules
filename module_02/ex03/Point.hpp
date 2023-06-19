/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 11:21:28 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/05/06 14:08:36 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Fixed.hpp"
# define GET_X 1
# define GET_Y 4

class Point
{
	private:
		Fixed X;
		Fixed Y;
		
	public:
		Point();
		Point(const Fixed &, const Fixed &);
		Point(const Point &);
		Point& operator = (const Point &);
		Fixed Get_X_Y(short) const;
		~Point();
};

bool bsp(Point const a, Point const b, Point const c, Point const point);