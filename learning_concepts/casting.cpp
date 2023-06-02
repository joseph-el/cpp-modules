# include <iostream>
# include <memory>

using namespace std;

class re {
    public :
        int ctype;
        virtual ~re(){
            cout << "D" << endl;
        };
};

class ye : public re {
    public :
        ~ye(){
            cout << "S" << endl;
        }
};

int main(void ) {

    // int x = 45;
    // char r = static_cast<char>(x);

    // cout << r << endl;
    {
        re *r = new re;

        ye *set = dynamic_cast<ye *>(r);

        if (set){
            cout << "No Null" << endl;
            set->ctype = 1;
        }
        else {
            set->ctype = 1;
    
            cout << "Null" << endl;
        }


        delete r;
    }

    return 1;
    const int ret = 22;
    int* x = const_cast<int *>(&ret);

    
    cout << "x = " << *x << endl;
    
    
    cout << "ret = " << ret << endl;

    *x = 333;
    cout << " A x = " << *x << endl;
    cout << " A ret = " << ret << endl;
}