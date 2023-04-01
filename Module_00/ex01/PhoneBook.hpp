/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:37:26 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/03/31 22:50:48 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <errno.h>
# include <iostream>
# include <stdbool.h>

typedef struct s_PhoneBook
{
    std::string phone[8];
    std::string nickname[8];
    std::string last_name[8];
    std::string first_name[8];
    std::string darkest_secre[8];
}               t_phonebook;

class PhoneBook
{
    private :
        std::string phone;
        std::string nickname;
        std::string last_name;
        std::string first_name;
        std::string darkest_secre;
        t_phonebook p_books;
    public  :
        // virtual void    init();
        virtual void    adding_contact();
        virtual void    search();
};