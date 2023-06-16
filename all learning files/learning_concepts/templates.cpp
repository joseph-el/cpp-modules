# include <iostream>
# include <termios.h>
# include <memory>
# include <string>
# include <unistd.h>

using namespace std;

template<typename T>

void show(T value) {
    cout << value << endl;
}

template<typename S>

void Std(S yet) {
    std::cout << yet << endl;
}

void print(float to_ptr) {
    cout << "func with float " << to_ptr << endl;
}

template <typename ret>
void print(ret to_ptr) {
    cout << "Template func " << to_ptr << endl; 
}



int main(void) {

    
    print(2.33);
    // show<char>(65);

    // return 1;

    // show("HELLO");
    // show(33);
    // show(3.3);




}