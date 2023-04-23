/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:10:29 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/20 18:20:49 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# if !defined(CLAPTRAP_HPP)
# define CLAPTRAP_HPP

# include <iostream>

# define ICANNOT(Name, ToDsp) std::cout << Name << "I can't " << ToDsp << std::endl; return ;

class ClapTrap {
    
    private :
        std::string  name;
        unsigned int Healty;
        unsigned int Energy;
        unsigned int Attack;
    
    public :
        ~ClapTrap();
        ClapTrap();
        ClapTrap(const std::string &);
        ClapTrap(const ClapTrap &);
        ClapTrap& operator = (const ClapTrap &);
        void attack(const std::string &);
        void takeDamage(unsigned int);
        void beRepaired(unsigned int);
};


# endif