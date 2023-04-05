/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:18:27 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/04/05 11:44:44 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
// # include <protocols/routed.h>

void clear_()
{

    // system("clear");
    const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";

    write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
}

int main(){
    
    // void    *ptr = pthread_setugid_np;

    // while (1){
        write(1, "RUN |", 8);
        usleep(35000), clear_();
        write(1, "ADD /", 8);
        usleep(35000), clear_();
        write(1, "COMMIT --", 8);
        usleep(35000), clear_();
        write(1, "PUSH \\", 8);
        usleep(35000), clear_();
        clear_();
    // }
    return (-1);
}