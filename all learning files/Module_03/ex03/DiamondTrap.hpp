/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 14:39:17 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/23 12:12:44 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
    
    private :
        std::string name;
    
    public :
        DiamondTrap();
        DiamondTrap(const std::string &);
        DiamondTrap(const DiamondTrap &);
        DiamondTrap& operator =(const DiamondTrap &);
        void whoAmI();
};