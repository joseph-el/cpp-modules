# include <iostream>

using namespace std;

class Vec{
    private :
        int num ;
        short index;

    public :
    Vec() : num(45), index(-8) {}

    Vec& operator +(const Vec &ST) ;
    void set()
    {
            num += 12,
        index += -3;
    }
    void pri(){
        cout << "num " << num << endl;
        cout << "inde " << index << endl;
    }

    bool operator ==(const Vec &ST) {
        if (this->num == ST.num){
            std::cout << "IAM HERE" << endl;
            return (true);
        }
        if (this->index != ST.num)
            return (false);
        return (true);
    }

    bool operator !=(const Vec &ST) {
        return (index != ST.index ? true : false);
    }

    bool operator *(const Vec &ST) {
        return false;
    }

    bool operator ==(const Vec &tytyt) {
        return 1;
    }

};

Vec& Vec::operator +(const Vec &ST)  {
    this->index += ST.index;
    this->num += ST.num;
    return (*this);
}


# include <cmath>
# include <math.h>

int main(void)
{


    {
        float x = 366.477001;
        int   y = (float)(x) * 256;

        y += (6 << 8);

        x = (float)(y) / 256;

        printf("check |%f|\n", x);
    
    
    }


    // return 1;
    float ret = 366.477001;
    cout << ret << endl;

    int set = (float)(ret) * 256;
    float total;
    
    printf("2 ^ 8 |%f|\n", set / pow(2, 8));

    printf("check |%d|\n", 14 << 8);
    set += (14 << 8);

    // total = (float)(set) / 256 | ENOBUFS & ~EMFILE;


    printf("ret |%f|\n",total);

    
    
    return 1;
    
    
    Vec RET;
    Vec SET;
    
    RET.set();

    Vec RES = RET + SET;

    RES == SET ? std::cout << "HE:OO\n" : cout << "HY:PO"<< endl;
    // kilo().den();

}