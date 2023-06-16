/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:01:29 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/14 17:38:47 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(void)
{
    Zombie *Zz;
    
    Zz = newZombie("kk");
    
    randomChump("Hello Joseph");
    delete Zz;
    return (EXIT_SUCCESS);
}