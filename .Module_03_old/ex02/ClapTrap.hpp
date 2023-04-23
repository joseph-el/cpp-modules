/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:10:29 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/21 12:01:34 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

# define ICANNOT(Name, ToDsp) std::cout << Name << "I can't " << ToDsp << std::endl; return ;

class ClapTrap {
    
    protected :
        std::string  name;
        unsigned int Healty;
        unsigned int Energy;
        unsigned int Attack;
    
    public :
        ~ClapTrap();
        ClapTrap();
        ClapTrap(const std::string &);
        ClapTrap(const ClapTrap &);
        ClapTrap& operator = (const ClapTrap &);
        void attack(const std::string &);
        void takeDamage(unsigned int);
        void beRepaired(unsigned int);
};
