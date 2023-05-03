# include <stdlib.h>
# include <string.h>
# include <stdio.h>



typedef struct uu{
    char *str;
    short in;
}           t_op;


void dds(t_op UI) {

    puts("____________DDS________________");
    printf("value of str |%s|\n", UI.str);
    printf("value of in |%d|\n", UI.in);
    printf("t_op : in side dds |%p|\n",  &UI);
    printf("str : in side dds |%p|\n",  &UI.str);
    printf("in : in side dds |%p|\n",  &UI.in);
    puts("_______________________________");
    UI.str = strdup("LOLOLO");
    UI.in = 109;
    printf("OO value of str |%s|\n", UI.str);

}

int main()
{
    t_op UI;

    UI.str = strdup("HELLO");
    UI.in = 2003;

    puts("____________OUTSIDE________________");
    printf("value of str |%s|\n", UI.str);
    printf("value of in |%d|\n", UI.in);
    printf("t_op : in side dds |%p|\n",  &UI);
    printf("str : in side dds |%p|\n",  &UI.str);
    printf("in : in side dds |%p|\n",  &UI.in);
    puts("_______________________________");puts("");
    dds(UI);
    puts("_______________________________");puts("");

    printf("value of str |%s|\n", UI.str);
    printf("value of in |%d|\n", UI.in);
}