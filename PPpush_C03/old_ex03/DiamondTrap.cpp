/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 14:43:55 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/05/07 17:48:45 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap() {
	name = "DiamondTrap";
    puts("DiamondTrap default constructor called !");
}

DiamondTrap::DiamondTrap(const std::string &Name) : ClapTrap(Name + "_clap_name") {
    puts("DiamondTrap constructor using parameters called !");
    name = Name;
}

DiamondTrap::DiamondTrap(const DiamondTrap &Another) {
    
    memcpy(this, &Another, sizeof(DiamondTrap));
    puts("DiamondTrap copy constructor called !");
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &Another) {
    puts("DiamondTrap copy assignment operator called !");
    memcpy(this, &Another, sizeof(DiamondTrap));
}

void DiamondTrap::whoAmI(void) {
	std::cout << "Iam " + name << " also know " + ClapTrap::name << "✌🏻\n";
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destroy called\n";
}