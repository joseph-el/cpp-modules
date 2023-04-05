# pragma once
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
            std::cout << str[i] << (char)32 << i + 1 << endl;
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
        *ptr = (char)22;
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
# pragma once
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
            std::cout << str[i] << (char)32 << i + 1 << endl;
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
        *ptr = (char)22;
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
# include "class.hpp"

using namespace std;

void    t_class::disp(void)
{
    std::cout << ret << endl;
    if (country & USA)
        std::cout << USA << " USA" << endl;
    else if (country & (ITALY | ISLAND))
        std::cout << (ITALY | ISLAND) << " ERP" << endl;
    t_list  *tmp = list;

    while (tmp)
    {
        std::cout << "-A-|" << tmp->a << "|" << endl;
        std::cout << "-B-|" << tmp->b << "|" << endl;
        std::cout << "-C-|" << (int)tmp->c << "|" << endl;
        tmp = tmp->object;
    }
}

void    t_class::init_()
{
    ret = 42;
    country = USA;
    t_list  *new_s;
    t_list  *new_p;
    new_s = new t_list;
    new_p = new t_list;
    new_s->object = new_p;
    new_p->object = NULL;
    (*new_s).a = 23;
    (*new_s).b = 24;
    (*new_s).c = 25;
    (*new_p).a = 13;
    (*new_p).b = 14;
    (*new_p).c = 15;
    list = new_s;
}

int   main(int argc, char **argv)
{
    t_class ret;
    
    ret.init_();
    ret.disp();

    exit(EXIT_SUCCESS);
}
