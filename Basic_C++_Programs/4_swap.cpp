// swap two numbers without using temp

#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10;
    cout << "Before Swapping: a = " << a << "\tb = " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After Swapping: a = " << a << "\tb = " << b;
    return 0;
}