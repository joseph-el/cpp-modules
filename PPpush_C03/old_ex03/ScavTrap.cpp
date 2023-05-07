/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 11:28:47 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/05/07 17:58:11 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    puts("ScavTrap default constructor called !");
    Healty = 100;
    Energy = 50;
    Attack = 20;
}

ScavTrap::ScavTrap(const ScavTrap &Another) {
    puts("ScavTrap copy constructor called !");
    *this = Another;
}

// ScavTrap& ScavTrap::operator=(const ScavTrap &Another) {
//     puts("ScavTrap copy assignment operator called !");
//     *this = Another;
//     return (*this);
// }

ScavTrap::ScavTrap(const std::string &Name) : ClapTrap(Name) {
    puts("ScavTrap constructor using parameters called !");
    Healty = 100;
    Energy = 50;
    Attack = 20;
}

void ScavTrap::attack(const std::string &Target) {
    if (Energy * Healty < 1)
        {Icannot(name, "attack!")}
    Energy --;
    std::cout << "ScavTrap " + name << " attack " << Attack << " " + Target + "!\n";
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << name << " is now in Gate Keeper mode\n";
}

ScavTrap::~ScavTrap() {
	puts("ScavTrap destructor called !");
}