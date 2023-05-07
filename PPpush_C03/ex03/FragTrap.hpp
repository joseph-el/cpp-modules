/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 14:24:39 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/05/07 18:15:22 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

    public :
        FragTrap();
        FragTrap(const FragTrap &);
        FragTrap(const std::string &);
        FragTrap& operator =(const FragTrap &);
        void highFivesGuys(void);
        void attack(const std::string &);
        ~FragTrap();
};