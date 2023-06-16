/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:01:21 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/13 21:08:52 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

short which(const std::string interput){
    
    short ret = (interput == "ADD") * ADD +
                (interput == "EXIT") * EXIT +
                (interput == "SEARCH") * SEARCH;
    if (ret & ~(ADD | SEARCH | EXIT))
        return (UNKNOWN);
    return (ret);
}

int main(void)
{
    PhoneBook phonebook;
    std::string input;

    debut :
        _gnl(WHITE"Write a command (ADD | SEARCH | EXIT) : ", input);
        Userinput(input);
    
    add :
        phonebook.Switch();
        adding(phonebook, input);
        goto debut;
        
    search :
        search(phonebook, input);
        goto debut;
}