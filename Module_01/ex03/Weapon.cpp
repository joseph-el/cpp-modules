/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:19:52 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/14 22:07:43 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(std::string Type) : type(Type) {}

const std::string &Weapon::getType( void ) const {
    return (this->type);
}

void Weapon::setType(std::string new_input) {
    type = new_input;
}