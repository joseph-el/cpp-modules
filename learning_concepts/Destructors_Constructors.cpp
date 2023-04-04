# include <unistd.h>
# include <iostream>
# include <stdio.h>
# include "Colors.hpp"

#if !defined(SIG)
    using namespace std;
    # define SIG(x, sepf) cout << x << endl; if (sepf) {cout << sepf << endl};
    # define MAX_uf_string 16
#endif

# if !defined(ADDRESS_PTR)
    #define ADDRESS_PTR(p1, p2, p3, p4) puts("-----------------------"); printf( "set address <%p>\n" \
            "ret address <%p>\n" \
            "leet address <%p>\n" \
            "match address <%p>\n", p1, p2, p3, p4 \
    ); puts("-----------------------");
#endif

    #define clearScreen_const 1000
    void clearScreen(useconds_t time_sleep){
        usleep(time_sleep); const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
            write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);}

struct vec1{
    long
        in_r:10, in_s:10;
};

class vec{
    public :
        size_t  *set;
        short   *ret;
        struct vec1 *leet;
        char        *mach_port_t_s;
    
    public :
             vec();   // constructor
            ~vec();   // destructor
    void     (*clearScreen_)(useconds_t);
    void     (*_ufpull_)(struct vec1 &, short); // function *()
    bool        ufcheck(class vec &, int16_t); // member function in this class
    friend      int16_t uf_display(class vec , short uf_what_display); //friend function
};

# define uf_string (1<<3)
# define uf_struct (1<<4)
# define uf_var (1<<1)
# define UF_EXIT std::cout << "UF_EXIT -1", exit(-1);

int16_t uf_display(class vec my_Class, short uf_what_display){
    if (uf_what_display & ~(uf_string | uf_struct | uf_var))
        {UF_EXIT};
    std::cout << "-----------------------------------" << endl;
    if (uf_what_display & uf_string){
        std::cout << RED"UF_STRING"WHITE << endl;
        std::cout << my_Class.mach_port_t_s << endl;
    }
    if (uf_what_display & uf_struct){
        std::cout << YELLOW"UF_STURCT"WHITE << endl;
        std::cout << "leet->in_r " << my_Class.leet->in_r << endl;
        std::cout << "leet->in_s " << my_Class.leet->in_s << endl;
    }
    if (uf_what_display & uf_var){
        std::cout << GREEN"UF_VAR"WHITE << endl;
        std::cout << "*my_Class.set " << *my_Class.set << endl;
        std::cout << "*my_Class.ret " << *my_Class.ret << endl;
    }
    std::cout << "-----------------------------------" << endl;
    return (-1);
}

# define uf_set (1<<2)
# define uf_ret (1<<3)
# define uf_limit (1<<4)

void    ufpull(struct vec1 &target, short uf_flag){
    using namespace std; cout << "UF_PULL" << endl;
    if (uf_flag & ~(uf_set | uf_limit | uf_ret))
        return ;
    if (uf_flag & uf_set)
        target.in_r = -42, target.in_s = 42;
    if (uf_flag & uf_limit)
        target.in_r = 13, target.in_s = -13;
    if (uf_flag & uf_ret)
        target.in_r = 'A', target.in_s = 'Z';
}

bool    vec::ufcheck(class vec &myClass, int16_t uf_flag){
    using namespace std;

    if (uf_flag & uf_string) {
        cout << "INIT STRING" << endl;
        memmove(myClass.mach_port_t_s, "Match Eroupe °|°", sizeof("Match Eroupe °|°") + 1);
    }
    if (uf_flag & uf_var){
        cout << "INIT VAR" << endl;
        *myClass.ret = '1';
        *myClass.set = '7';
    }
    if (uf_flag & uf_struct){
        myClass.leet->in_r = -1;
        myClass.leet->in_s = -7;
    }
    return (uf_flag == uf_limit * true);
}

vec::~vec(){
    delete   this->set;
    delete   this->ret;
    delete   this->leet;
    delete[] this->mach_port_t_s;
    memset(this, 0, sizeof(vec));
    std::cout << GREEN"Delete successefly" << WHITE << std::endl;
}

vec::vec(){
    memset(this, 0, sizeof(vec));
    this->_ufpull_ = &ufpull;
    this->clearScreen_ = &clearScreen;
    ADDRESS_PTR(this->set, this->ret, this->leet, this->mach_port_t_s);
    {
        // scope alloc bytes
        this->set = new size_t;
        this->leet = new struct vec1;
        this->ret = new short;
        this->mach_port_t_s = new char[MAX_uf_string];
    }
    ADDRESS_PTR(this->set, this->ret, this->leet, this->mach_port_t_s); 
}


int main() { 

    vec myClass;

    myClass.ufcheck(myClass, uf_string | uf_struct | uf_var);
    
    myClass._ufpull_(*myClass.leet, uf_set | uf_ret);
    
    uf_display(myClass, uf_string | uf_struct | uf_var);
    myClass.clearScreen_(4200000);
    system("leaks a.out");

    exit(-2);
}