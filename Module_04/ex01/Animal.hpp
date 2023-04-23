/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 12:25:33 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/23 16:37:16 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>

class Animal {
    
    protected :
        std::string type;
    
    public :
        Animal();
        Animal(const std::string &);
        Animal(const Animal &);
        Animal& operator =(const Animal &);
        virtual void makeSound(void);
        virtual ~Animal();
};