/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 16:55:12 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/23 16:57:34 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public :
        WrongCat();
        WrongCat(const WrongCat &);
        WrongCat& operator =(const WrongCat &);
        void makeSound(void) const;
        WrongCat();
}