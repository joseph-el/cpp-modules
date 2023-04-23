/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 11:57:12 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/21 12:02:41 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public :
        ~FragTrap();
         FragTrap();
         FragTrap(const std::string &);
         void highFivesGuys(void);
};