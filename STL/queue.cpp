#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> q;

    q.push(string("George"));
    q.push(string("John"));
    q.push(string("Roger"));
    q.push(string("Fred"));
    cout << "The queue consists of " << q.size() << " people.\n";
    cout << q.front() << " is at the front of the queue.\n";
    cout << q.back() << " is at the back of the queue.\n"
}