/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:22:16 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/14 22:10:07 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(std::string Name, Weapon &_weapon) : name(Name), weapon(_weapon) {}

void HumanA::attack(void) const {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}