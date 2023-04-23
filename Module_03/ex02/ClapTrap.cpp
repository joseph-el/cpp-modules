/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 10:55:51 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/22 14:36:18 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("ClapTrap"), Healty(10), Energy(10), Attack(0) {
    puts("ClapTrap default constructor called !");
}

ClapTrap::ClapTrap(const std::string &Name) : name(Name), Healty(10), Energy(10), Attack(0) {
    puts("ClapTrap constructor using parameters called !");
}

ClapTrap::ClapTrap(const ClapTrap &Another) {
    puts("ClapTrap copy constructor called !");
    // memcpy(this, &Another, sizeof(ClapTrap));
    (void)Another;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &Another) {
    puts("ClapTrap copy assignment operator called !");
    // memcpy(this, &Another, sizeof(ClapTrap));
    (void)Another;
    return (*this);
}

ClapTrap::~ClapTrap() {
    puts("ClapTrap destructor called !");
}

void ClapTrap::attack(const std::string &Target) {
    if (Energy * Healty < 1)
        {Icannot(name, "attack!")}
    Energy --;
    std::cout << name << " attack " << Attack << " " + Target + "!\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (Energy * Healty < 1)
        {Icannot(name, "repaire")}
    Energy --;
    Healty += amount;
    std::cout << name << " Repaired " << amount << "!\n";
}

void    ClapTrap::takeDamage(unsigned int amount) {
    if (Energy * Healty < 1)
        {Icannot(name, "take damege because is die!")}
    Healty --;
    if (Healty < 1)
        std::cout << name << " is Die!\n";
    else
        std::cout << name << " take " << amount << " amount of damage!\n";
}
