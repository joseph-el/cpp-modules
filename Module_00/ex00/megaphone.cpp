/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:26:38 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/03 15:59:19 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

# define ERR_MSG std::cout  << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl; return (1);

int main(int argc, char **argv)
{
    if (argc == 1)
        {ERR_MSG};
    while (++argv and *argv)
        for (char *ret = *argv; *ret; ret++)
            std::cout << toupper(*ret);
    std::cout << std::endl;
    return (EXIT_SUCCESS);
}