#include <iostream>    
#include <sstream>   
#include <string>       
using namespace std;
 
 
int main () {
    stringstream ss;
    string s;
 
    cout << "Enter your first name\n";
    cin >> s;
    ss.str(s);
    cout << "Enter your last name\n";
    cin >> s;
    ss.str(ss.str() + " " + s);
    cout << "Hello " << ss.str() << "!\n";
}