/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:14:51 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/20 18:25:10 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("ClapTrap"), Healty(10), Energy(10), Attack(0) {
    puts("Default Called");
}

ClapTrap::~ClapTrap() {
    puts("Destroy ClapTrap");
}

ClapTrap::ClapTrap(const std::string &Name) : name(Name), Healty(10), Energy(10), Attack(0) {
    puts("With Setting");
}

ClapTrap &ClapTrap::operator=(const ClapTrap &Another) {
    puts("Operator");
    memcpy(this, &Another, sizeof(ClapTrap));
    return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &Another) {
    puts("Copy");
    memcpy(this, &Another, sizeof(ClapTrap));
}

void    ClapTrap::attack(const std::string &Target)
{
    if (Energy * Healty < 1)
        {ICANNOT(name, "Attack!")}
    Energy --;
    std::cout << name << " Attack " << Attack << Target << "!\n";
}

void    ClapTrap::beRepaired(unsigned int amout) {
    if (Energy * Healty < 1)
        {ICANNOT(name, "Repaire!")}
    Energy --;
    Healty += amout;
    std::cout << name << " Repaired " << amout << "!\n";
}

void    ClapTrap::takeDamage(unsigned int amout) {
    if (Energy * Healty < 1)
        {ICANNOT(name, "Repaire!")}
    Healty --;
    if (Healty < 1)
        std::cout << name << "Is Die!\n";
    else
        std::cout << name << " Take " << amout << "of Damage!\n";
}