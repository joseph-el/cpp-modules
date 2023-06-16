/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 11:28:09 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/23 12:11:13 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
    
    public :
        ScavTrap();
        ScavTrap(const ScavTrap &);
        ScavTrap(const std::string &);
        ScavTrap& operator=(const ScavTrap &);
        
        void attack(const std::string &);
        void guardGate(void);
        ~ScavTrap();
};