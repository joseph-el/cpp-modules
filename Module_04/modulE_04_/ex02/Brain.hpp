/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 07:07:33 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/24 07:09:25 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>

class Brain {
    
    private :
        std::string ideas[100];
    public :
        Brain();
        Brain(const Brain &);
        Brain& operator =(const Brain &);
        ~Brain();
};