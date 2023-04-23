/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 16:51:05 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/23 16:53:49 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>

class WrongAnimal {
    protected :
        std::string name;

    public :
        WrongAnimal();
        WrongAnimal(const WrongAnimal &);
        WrongAnimal(const std::string &);
        WrongAnimal& operator =(const WrongAnimal &);
        void makeSound(void) const;
        std::string getType(void) const;
        ~WrongAnimal();
};