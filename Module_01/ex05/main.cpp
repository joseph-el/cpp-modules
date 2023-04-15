/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 12:42:51 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/15 13:38:58 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main(void)
{
    Harl ret;

    ret.complain("DEBUG");
    ret.complain("ERRddOR");
    ret.complain("INFO");
    ret.complain("ERROR");
    ret.complain("WARNING");
}