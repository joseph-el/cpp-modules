# include <stdio.h>
# include <stdlib.h>

# include<termios.h> 
struct vec{
    short ret;
    struct vec *calloc_;
    void    (*uf_open)(void *, short *s_uf);
};

void    uf_(void *ptr, short *s_uf){
    struct vec *cast;
    cast = (struct vec *)ptr;
    ptr = (struct vec *)malloc(sizeof(struct vec));
    *s_uf = 12;
    puts("Call Here");
}

int main(){
    struct vec ret;
    ret.uf_open = &uf_;
    short set;
    ret.uf_open(&ret.calloc_, &set);
    rename("HELLO", PARENB);
}
