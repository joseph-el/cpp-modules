/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:17:14 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/14 22:04:01 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>

class Weapon {
    private :
        std::string type;
    public :
        Weapon(std::string); 
        const std::string& getType( void ) const;
        void setType( std::string );
};