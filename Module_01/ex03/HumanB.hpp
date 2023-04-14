/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:40:11 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/14 22:21:01 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "Weapon.hpp"

class HumanB {
    private :
        Weapon  *weapon;
        std::string name;
    public :
        HumanB(std::string);
        void setWeapon(Weapon &);
        void attack(void) const;
};