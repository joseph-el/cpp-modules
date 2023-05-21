# include <iostream>

using namespace std;

class Ui{
    int x;
    public :
        Ui() : x(10) {}
        void Ds(void) {
            cout << "X " << x << endl;
        }
};



int main() {

    void *str;
    
    str = malloc(-1);

    try {
        if (!str) 
            throw exception();
        else {
            std::cout << "IAM HERE" << std::endl;
            str = malloc(2);
        }
    }
    catch (exception &e) {
        cout << e.what() << endl;
    }

}