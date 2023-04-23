/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 12:00:40 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/21 12:06:53 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    puts("Default FragTrap");
    Healty = 100;
    Energy = 100; 
    Attack = 30;
}

FragTrap::FragTrap(const std::string &Name) : ClapTrap(Name) {
    puts("FragTrap With Setting");
    FragTrap();
}

void FragTrap::highFivesGuys(void) {
	std::cout << name << ": Heyy give me a high five !\n";
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destroy\n";
}