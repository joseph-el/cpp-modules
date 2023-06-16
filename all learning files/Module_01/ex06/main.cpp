/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 13:52:55 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/15 14:32:47 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc ^ 2)
        return (std::cout << "[🥺]\n", 1);
    
    std::string arg(argv[1]);
    short index = (arg == "INFO") * 2 + (arg == "DEBUG") * 1 + 
                  (arg == "ERROR") * 4 + (arg == "WARNING") * 3;
    Harl ret;
    switch (index)
    {
        case  1:
            ret.complain("DEBUG");
            index ++;
        case  2:
            ret.complain("INFO");
            index ++;
        case   3:
            ret.complain("WARNING");
            index ++;
        case   4:
            ret.complain("ERROR");
            break;
        default:
            std::cout << NOTHING_MSG << std::endl;
            break;
    }
}