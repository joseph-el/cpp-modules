/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 11:22:19 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/05/07 17:10:50 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

int main(void)
{
    {
        
        DiamondTrap Ret("KKLOLO");
        Ret.whoAmI();
        return 2;
    }

    

    return 1;
    {        
    ClapTrap ret;
    ClapTrap *set = new ClapTrap("BOB");
    ClapTrap *Next = new ScavTrap("DExter");

    Next->attack("Alex");
    
    return 0;
    
    ret = *set;
    set->attack("Johen");
    set->attack("Johen");
    set->attack("Johen");
    set->attack("Johen");
    set->attack("Johen");
    set->beRepaired(1);
    set->takeDamage(10);
    delete set;
    }
    return (EXIT_SUCCESS);
}