/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 11:00:16 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/22 11:10:54 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# if !defined(CLAPTRAP_HPP)
# define CLAPTRAP_HPP

# include <iostream>

# define Icannot(Name, ToDsp) std::cout << Name << "can't " << ToDsp << std::endl; return ;

class ClapTrap {

    private :
        std::string name;
        unsigned int Healty;
        unsigned int Energy;
        unsigned int Attack;

    public :
        ClapTrap();
        ClapTrap(const ClapTrap &);
        ClapTrap(const std::string &);
        ClapTrap& operator = (const ClapTrap &);
        void attack(const std::string &);
        void takeDamage(unsigned int);
        void beRepaired(unsigned int);
        ~ClapTrap();
};

# endif