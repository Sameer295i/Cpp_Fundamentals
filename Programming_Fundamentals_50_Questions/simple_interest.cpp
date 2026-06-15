//  Write a program to calculate Simple Interest.

#include <iostream>
using namespace std;
int main()
{
    float P, R, T, SI;
    cin >> P >> R >> T;
    SI = (P * R * T) / 100;
    cout << "Simple Interest = " << SI;
    return 0;
}