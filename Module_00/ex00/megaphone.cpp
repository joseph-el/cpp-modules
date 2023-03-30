/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:03:05 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/03/30 13:28:34 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <stdlib.h>

# define uppercase(target) (target >= 'a' and target <= 'z') ? target -= 32 : 0;
# define ERR_MSG "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int main(int argc, char **argv)
{
    (argc == 1) ? std::cout << ERR_MSG, 1 : 0;
    argv ++;
    while (*argv++)
        while (**argv++)
            uppercase(**argv), std::cout << **argv;
    std::cout << "\n";
    return (EXIT_SUCCESS);
}