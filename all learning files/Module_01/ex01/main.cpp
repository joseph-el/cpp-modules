/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:50:38 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/14 17:58:07 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(void)
{
    Zombie *arrays;
    int     N;

    N = 3;
    arrays = zombieHorde(N, "HELLO");
    while (N--)
        arrays[N].announce(), std::cout << std::endl;
    delete[] arrays;
    system("leaks zombieHorde");
    return (EXIT_SUCCESS);
}