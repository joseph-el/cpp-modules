/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:26:30 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/22 14:53:13 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public :
        ScavTrap();
        ScavTrap(const std::string &);
        ~ScavTrap();
        
        void attack(const std::string &);
        void guardGate(void);
};