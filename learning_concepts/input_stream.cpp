#include <iostream>
#include <string>
#include <sstream>
using namespace std;
 
void print(const string& places)
{
    string s;
    istringstream is(places);
    int count = 0;
 
    while(is >> s)
        cout << (++count) << ". " << s << endl;
    if(count > 0)
        cout << "You have visited " << count << " places!" << endl;
    else
        cout << "You went nowhere!" << endl;
}

int main()
{
    string places;
 
    cout << "Enter the places you visited    : ";
    getline(cin, places);
    cout << "Printing the places you visited :-" << endl;
    print(places);
}