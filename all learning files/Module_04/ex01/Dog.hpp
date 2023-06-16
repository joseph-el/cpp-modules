/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 12:50:25 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/23 16:31:19 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "Animal.hpp"

class Dog : public Animal {
    
    public :
        Dog();
        Dog(const Dog &);
        Dog& operator =(const Dog &);
        void makeSound(void);
        ~Dog();
};