# include <iostream>
# include <stdio.h>
# include <vector>

# if !defined(LOG_)
    #define LOG_(X) std::cout << X << std::endl
#endif


struct vec1
{
    int i, s;
    void    set(struct vec1 &ref, int set1, int set2){
        ref.i = set1;
        ref.s = set2;
    }
    void    disp(std::string showed, struct vec1 target){
        using namespace std;
        std::cout << showed << endl;
        std::cout << target.i << endl;
        std::cout << target.s << endl;
    }
    void    (*init)(struct vec1 &);
};


void    inti(struct vec1 &ret){
    // LOG_(ret.i);
    // LOG_(ret.s);
    ret.i = 42;
    ret.s = -42;
}

int main(void){
    struct vec1 ret; memset(&ret, 0, sizeof(ret));
    ret.init = &inti;

    ret.init(ret);
    ret.disp("First display", ret);
    std::cout << std::endl;
    ret.set(ret, 1337, -1337);
    ret.disp("Last Display", ret);
}