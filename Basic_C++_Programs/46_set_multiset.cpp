// Set/Multiset -> Store unique elements

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(10);
    s.insert(30);
    s.insert(20);
    s.insert(10);

    cout << "Set: ";
    for (int x : s)
        cout << x << " ";

    cout << endl;

    multiset<int> ms;

    ms.insert(10);
    ms.insert(30);
    ms.insert(10);
    ms.insert(20);

    cout << "Multiset: ";
    for (int x : ms)
        cout << x << " ";

    cout << endl;

    return 0;
}