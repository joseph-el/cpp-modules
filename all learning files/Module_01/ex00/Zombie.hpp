/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:58:51 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/14 17:22:06 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# if !defined(ZOMBIE_HPP)
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie{
    private :   
        std::string name;
    public :
        Zombie(std::string);
        ~Zombie();
        void announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

# endif
