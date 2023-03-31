/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:03:44 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/03/31 15:23:49 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// # pragma once
# include <iostream>
# include <stdlib.h>
# include <errno.h>
# include <limits>

using namespace std;

int32_t main(int32_t argc, char **argv)
{

    {
        char **str;
        std::int32_t size = ENAMETOOLONG;
        
        str = new char*[size];
        for (size_t i = 0; i < ENAMETOOLONG; i++)
        {
            str[i] = new char[ENOTBLK];
            strncpy((char *)str[i], "LOLOLOLOLOLOLO", sizeof("LOLOLOLOLOLOLO") + 1);
            std::cout << str[i] << ' ' << i + 1 << endl;
        }
        return (ENOPROTOOPT);
    }
    
    {
        int *arr;
        // arr = new int(INT32_MAX + INT16_MAX); // overflow?✅
        std::cout << *arr << std::endl;
        return (ENOMEM);
    }

    {
        int *arr;
        arr = new int[10], memset(arr, -1, sizeof(int) * 10);
        for (size_t i = 0; i < 10; i++)
        {
            std::cout << arr[i] << endl;
        }
        delete arr;
        *(arr + 4) = 43; // use after free ✅
        // system("c++ -fsanitize=address -g memory.cpp");
        return EXIT_SUCCESS; 
        int *ptr;
        ptr = new int;
        *ptr = 9;
        delete ptr;
        ptr = new int;
        *ptr = 'K';
        printf("check |%d|\n", *ptr);
        system("leaks a.out");
    }


    return 1;
    int *ptr = (int *)malloc(sizeof(int) * 100);
    *(ptr + 23) = 42;
    std::cout << *(ptr + 23);
    free(ptr);
    std::cout << "-----------------" << endl;
    std::cout << *(ptr + 23) << endl;
    std::cout << "-----------------" << endl;
    *(ptr + 200000) = 1337;
    std::cout << *(ptr + 20000) << endl;
    std::cout << "-----------------" << endl;





    return 1;
}