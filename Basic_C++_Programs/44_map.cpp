// Map (Key-Value) -> Use dictionary-like structure

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> m;
    m["Harry"] = 30;
    m["Sameer"] = 18;
    m["Lokesh"] = 19;

    cout << "Age of Sameer: " << m["Sameer"] << endl;

    cout << "All data:" << endl;
    for (auto x : m)
    {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}