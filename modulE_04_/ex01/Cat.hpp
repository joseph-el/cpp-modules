/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:36:37 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/24 07:11:47 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
    
    private :
        Brain *brain;
        
    public :
        Cat();
        Cat(const Cat &);
        Cat& operator =(const Cat &);
        void makeSound(void) const;
        ~Cat();
};