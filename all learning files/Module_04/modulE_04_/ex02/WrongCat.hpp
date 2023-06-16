/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 22:12:45 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/23 22:13:22 by yoel-idr         ###   ########.fr       */
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
        ~WrongCat();
};