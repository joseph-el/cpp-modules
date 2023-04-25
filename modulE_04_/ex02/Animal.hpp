/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:07:20 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/24 12:23:26 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>

class Animal {
    protected :
        std::string type;

    public :
        Animal();
        Animal(const Animal &);
        Animal(const std::string &);
        Animal& operator =(const Animal &);
        std::string getType(void) const;
        virtual void makeSound(void) const = 0;
        
        virtual ~Animal();
};