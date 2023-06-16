/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:39:15 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/23 20:40:02 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "Animal.hpp"

class Dog : public Animal {
    
    public :
        Dog();
        Dog(const Dog &);
        Dog& operator =(const Dog &);
        void makeSound(void) const;
        ~Dog();
};