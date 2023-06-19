/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:29:18 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/03/31 17:29:59 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>
# include <stdlib.h>
# include <errno.h>
# include <stdalign.h>
# include <sandbox.h>
# include <stdio.h>

typedef struct s_list
{
    short   a;
    int32_t b;
    int8_t  c;
    struct s_list *object;
}               t_list;

typedef enum s_country
{
    USA = (1<<1),
    ISLAND = (1<<2),
    ITALY = (1<<3),
    RUSSIAN = (1<<4)
}               t_country;

typedef class s_Class
{
    private :
    short       ret;
    t_country   country;
    t_list      *list;

    public :
    void    init_(void);
    // void    set_(int *, int *);
    // void    disp(short *, int16_t& temp);
    void    disp(void);

}               t_class;