# include <iostream>
#include <iomanip>

int main(){
    float x = 44;
    std::cout << std::fixed << std::setprecision(x) << std::endl;
}