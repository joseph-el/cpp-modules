/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:41:34 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/14 17:52:44 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <string>

class Zombie{
    private :
        std::string name;
    public :
        Zombie();
        ~Zombie();
        void announce(void);
        friend Zombie* zombieHorde(int, std::string);
};

Zombie* zombieHorde( int N, std::string name );