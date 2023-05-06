/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:48:38 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/05/06 14:27:52 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

int main( void ) 
{
	Point A(Fixed((float)2), Fixed((float)3));
	Point B(Fixed((float)2), Fixed((float)3));
	Point C(Fixed((float)3), Fixed((float)4));
	
	Point P1(Fixed((float)-2), Fixed((float)-22));
	Point P2(Fixed((float)1), Fixed((float)1));
	
	std::cout << (bsp(A, B, C, P1) ? "inside" : "outside") << std::endl;
	std::cout << (bsp(A, B, C, P2) ? "inside" : "outside") << std::endl;

	
	return (EXIT_SUCCESS);
}
