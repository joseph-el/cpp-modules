# include <iostream>
# include <memory>

using namespace std;

int main(void ) {

    // int x = 45;
    // char r = static_cast<char>(x);

    // cout << r << endl;

    const int ret = 22;
    int* x = const_cast<int *>(&ret);

    
    cout << "x = " << *x << endl;
    
    
    cout << "ret = " << ret << endl;

    *x = 333;
    cout << " A x = " << *x << endl;
    cout << " A ret = " << ret << endl;
}