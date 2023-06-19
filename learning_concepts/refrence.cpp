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