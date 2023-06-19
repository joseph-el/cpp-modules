#include <iostream>
#include <list>
using namespace std;

void printList(list<int> l)
{
    for(list<int>::const_iterator i = l.begin(); i != l.end(); i++)
        cout << *i << " ";
    cout << "\n";
}

int main() {
    
    list<int> l1 = {5, 2, 1, 10, 3, 4, 7, 6, 9, 8}, l2 = {13, 14, 12, 15};

    cout << "Unsorted List l1 : ";
    printList(l1);
    cout << "Unsorted List l2 : ";
    printList(l2);
    l1.sort();
    cout << "Sorted List l1   : ";
    printList(l1);
    l2.sort();
    cout << "Sorted List l2   : ";
    printList(l2);
    l1.merge(l2);
    cout << "Merged List l1   : ";
    printList(l1);
}