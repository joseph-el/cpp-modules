/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 07:09:33 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/24 07:10:52 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain() {
    puts("Brain default constructor called !");
}

Brain::Brain(const Brain &Another) {
    puts("Brain copy constructor called !");
    memcpy(this, &Another, sizeof(Brain));
}

Brain& Brain::operator=(const Brain &Another) {
    puts("Brain copy assignment operator called !");
    memcpy(this, &Another, sizeof(Brain));
    return (*this);
}

Brain::~Brain() {
	puts("Brain destructor called !");
}