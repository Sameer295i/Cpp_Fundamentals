// Stack/Queue from STL -> Use stack, queue, priority_queue

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack Top: " << s.top() << endl;
    s.pop();
    cout << "Stack Top after pop: " << s.top() << endl;

    cout << endl;

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Queue Front: " << q.front() << endl;
    q.pop();
    cout << "Queue Front after pop: " << q.front() << endl;

    cout << endl;

    priority_queue<int> pq;
    pq.push(10);
    pq.push(50);
    pq.push(20);

    cout << "Priority Queue Top: " << pq.top() << endl;
    pq.pop();
    cout << "Priority Queue Top after pop: " << pq.top() << endl;

    return 0;
}