// Concept of Reference Variable -> Demonstrate the use of reference variables as aliases for existing variables.

#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    int &ref = a;

    cout << "Original a: " << a << endl;
    cout << "Reference ref: " << ref << endl;

    ref = 20;

    cout << "\nAfter modifying ref:\n";
    cout << "a: " << a << endl;
    cout << "ref: " << ref << endl;

    return 0;
}