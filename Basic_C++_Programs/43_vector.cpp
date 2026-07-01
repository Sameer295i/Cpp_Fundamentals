// Vector Operations -> Insert, delete, sort

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;

    // 🔹 Insert elements
    v.push_back(50);
    v.push_back(20);
    v.push_back(40);
    v.push_back(10);

    cout << "After insertion: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // 🔹 Delete element (remove 2nd element index 1)
    v.erase(v.begin() + 1);

    cout << "After deletion: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // 🔹 Sort vector
    sort(v.begin(), v.end());

    cout << "After sorting: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    return 0;
}