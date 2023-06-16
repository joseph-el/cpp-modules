/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 11:22:19 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/23 16:27:55 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main(void)
{
    ClapTrap ret;
    ClapTrap *set = new ClapTrap("BOB");
    
    ret = *set;
    set->attack("Johen");
    set->attack("Johen");
    set->attack("Johen");
    set->attack("Johen");
    set->attack("Johen");
    set->beRepaired(1);
    set->takeDamage(10);
    delete set;
    return (EXIT_SUCCESS);
}