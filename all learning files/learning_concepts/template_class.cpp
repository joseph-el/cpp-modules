# include <iostream>
# include <unistd.h>


using namespace std;

template <typename T, typename N>

void showing(T var, N size)
{
    cout << var << " " << size << endl;
}

struct using_uff
{
    int x:1, y:2;
};

template <typename T, int N>

class alloc {
    private :
        struct using_uff ret[N];
        T some_arrays[N];
    public :
        alloc() {
            int i = 0;
            for (; i < N; i++)
                ret[i].x = i % 2, ret[i].y = i + 1 / 5;
            while (i--) 
                    some_arrays[i] = i * 10;
        }
        void display() const {
            std::cout << "PRINT" << std::endl;
            int i = 0;
            for (; i < N; i++)
                std::cout << "ret[i].x = " << ret[i].x << \
                        " ret[i].y = " << ret[i].y << endl;
            while (i--) {
                std::cout << "TAB[" << i << "] = " << some_arrays[i] << endl; 
            }            
        }
};


int main(int , char **) {

    alloc<int, 10> ret;

    ret.display();
    // alloc ret<int, 10>();\


    return 1;
    showing<short, int>(8, 4);





    exit(-2);
}