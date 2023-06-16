/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:36:37 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/23 20:38:22 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "Animal.hpp"

class Cat : public Animal {
    
    public :
        Cat();
        Cat(const Cat &);
        Cat& operator =(const Cat &);
        void makeSound(void) const;
        ~Cat();
};