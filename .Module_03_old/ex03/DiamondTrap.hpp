/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:12:30 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/21 16:00:32 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
    
    private :
        std::string name;
    public :
        ~DiamondTrap();
        DiamondTrap();
        DiamondTrap(const std::string &);
        void whoAmI();
};
