/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 13:42:02 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/15 14:32:12 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl() : func(nullptr) {}

void Harl::debug(void) {
	std::cout << DEBUG_MSG << std::endl;
}

void Harl::info(void) {
	std::cout << INFO_MSG << std::endl;
}

void Harl::warning(void) {
	std::cout << WARNING_MSG << std::endl;
}

void Harl::error(void) {
	std::cout << ERROR_MSG << std::endl;
}

void Harl::complain( std::string level ) 
{
    (level == "INFO")    and (func = &Harl::info); 
    (level == "DEBUG")   and (func = &Harl::debug); 
    (level == "ERROR")   and (func = &Harl::error);
    (level == "WARNING") and (func = &Harl::warning);

    if (func)
        (this->*func)();
    !func and std::cerr << NOTHING_MSG << std::endl;
    std::cout << std::endl;
}