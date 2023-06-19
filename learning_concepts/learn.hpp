/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   learn.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:34:41 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/03/30 13:34:43 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class s_Rectangle 
{
    int width, height;
    
public:

    void set_values (int,int);
    int area() {return width * height;}
};