/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 21:48:12 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/23 21:49:53 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>

class WrongAnimal {
    protected :
        std::string type;
        
    public :
        WrongAnimal();
        WrongAnimal(const WrongAnimal &);
        WrongAnimal(const std::string &);
        WrongAnimal& operator =(const WrongAnimal &);
        const std::string& getType(void) const;
        void makeSound(void) const;
        ~WrongAnimal();
};