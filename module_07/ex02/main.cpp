
#include "Array.hpp"

struct ret {
    short U, Y;
    void (*func)(struct ret);
};

typedef struct ret t_;

void func(struct ret Toprint) {
    std::cout << "Time " << Toprint.U << " : " << Toprint.Y << std::endl;
}

int main(int, char**)
{
    Array<int> ret(CR7);
    Array<int> s = ret;

    srand(time(NULL));
    try {
        int i = 0;
        for (; i < CR7 ; i++)
        {
            ret[i] = rand() % MAX_NUMBERS;
            std::cout << "The Number: " << ret[i] << std::endl;
        }
        std::cout << ret[rand() % (MESSI + CR7)] << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    puts("🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥");
    
    Array<t_> messi(MESSI);
    try {
        for (short i = 0; i < (MESSI); i++)
        {
            messi[i].U = rand() % ' ';
            messi[i].Y = rand() % ' ';
            std::cout << "messi time " << messi[i].U << ": " << messi[i].Y << std::endl;
        }
        std::cout << "Random time of messi " << messi[rand() % (MESSI + CR7)].U << " : " << \
                                                messi[rand() % (MESSI + CR7)].Y << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    Array<t_> Zlatan_Ibrahimović(messi);
    
    for (short i = 0; i < MESSI; i++)
    {
        Zlatan_Ibrahimović[i].func = &func;
        Zlatan_Ibrahimović[i].func(Zlatan_Ibrahimović[i]);
    }
    // system("leaks Array");
    exit(EXIT_SUCCESS);
}