#include <iostream>
#include <deque>


using namespace std;

void printDeque(deque<int> d)
{
    cout << "Deque : ";
    for(deque<int>::const_iterator i = d.begin(); i != d.end(); i++)
        cout << *i << " ";
    cout << "\n";
}

int main() 
{

    deque<int> d = {10, 20, 30, 40, 50, 60};

    printDeque(d);
    cout << "Inserting 0 at the front\n";
    d.push_front(0);
    printDeque(d);
    cout << "Inserting 70 at the back\n";
    d.push_back(70);
    printDeque(d);
}
