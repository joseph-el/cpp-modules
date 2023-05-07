/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 14:27:56 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/05/07 17:04:07 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"
# include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    puts("FragTrap default constructor called !");
    Healty = 100;
    Energy = 100;
    Attack = 30;
}

FragTrap::FragTrap(const std::string &Name) : ClapTrap(Name) {
    puts("FragTrap constructor using parameters called !");
    Healty = 100;
    Energy = 100;
    Attack = 30;
}

FragTrap::FragTrap(const FragTrap &Another) {
    puts("FragTrap copy constructor called !");
    memcpy(this, &Another, sizeof(FragTrap));
}

FragTrap& FragTrap::operator=(const FragTrap &Another) {
    puts("FragTrap copy assignment operator called !");
    memcpy(this, &Another, sizeof(FragTrap));
    return (*this);
}

void FragTrap::attack(const std::string &Target) {
    if (Energy * Healty < 1)
        {Icannot(name, "attack!")}
    Energy --;
    std::cout << "FragTrap " + name << " attack " << Attack << " " + Target + "!\n";
}

void FragTrap::highFivesGuys(void) {
	std::cout << name << ": Heyy give me a high five !\n";
}

FragTrap::~FragTrap() {
	puts("FragTrap destructor called !");
}