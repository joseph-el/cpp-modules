/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 14:39:17 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/05/07 17:12:26 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

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