# include <iostream>
# include <stdio.h>

# if !defined(LOG_)
    #define LOG_(X) std::cout << X << std::endl
#endif

void    set_(int &data) {
    data = 12;
}

struct refrence {
    int i;
    short s;
    char *nn;
};

typedef struct refrence t_ref;
# define FILL (1 << 4)

void    fill(t_ref &leet, int32_t flag){
    if (flag & ~FILL){
        using namespace std;
        std::cout << "leet.i = " << leet.i << endl;
        std::cout << "leet.s = " << leet.s << endl;
        std::cout << "leet.nn = " << leet.nn << endl;
        return ;
    }
    leet.i = 42;
    leet.nn = strdup("Hello World Iam joseph");
    leet.s = -42;
}

int main(){

{
    // try for structs
    t_ref ref ; memset(&ref, 0, sizeof(ref));
    ref.nn = nullptr;
    ref.i = -2;
    ref.s = -4;
    fill(ref, FILL);
    fill(ref, 0);

    return (ENETDOWN);
}

    {
        // try for Var
        int x;
        x = -33;
        LOG_(x);
        set_(x);
        using namespace std;
        std::cout << "after" << endl;
        LOG_(x);

        return EXIT_SUCCESS;
    }

    int x;
    int *ptr;

    x = 10;
    ptr = &x;

    printf("CHECK ADDRESS |%p|\n", &x);
    int& ret = x;
    printf("CHECK ADDRESS |%p|\n", &ret);
    
    exit(EXIT_SUCCESS);
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
