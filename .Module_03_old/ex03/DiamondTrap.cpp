/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:57:43 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/21 16:00:44 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap default constructor called\n";
	Energy = 50;
}

DiamondTrap::DiamondTrap(const std::string &Name): ClapTrap(Name + "_clap_name") {
	std::cout << "DiamondTrap name constructor called\n";
	this->name = Name;
	energyPoints = 50;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destroy called\n";
}


void DiamondTrap::whoAmI() {
	std::cout << "I am " << name << " also known as " << ClapTrap::name << std::endl;
}