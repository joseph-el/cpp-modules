/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 22:52:22 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/21 11:55:12 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    puts("ScavTrap Default called");
    Healty = 100;
    Energy = 50;
    Attack = 20;
}

ScavTrap::ScavTrap(const std::string &Name) : ClapTrap(Name) {
    ScavTrap();
    puts("ScavTrap Using setting");
}

void ScavTrap::attack(const std::string &Target) {
    if (Energy * Healty < 1)
        {ICANNOT(name, "Attack!")}
    Energy --;
    std::cout << name << " Attack " << Attack << Target << "!\n";
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << name << " is now in Gate Keeper mode\n";
}

ScavTrap::~ScavTrap() {
	puts("Destroy ScavTrap");
}