// Swap two numbers Using temp

#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10;
    cout << "Before Swapping: a = " << a << "\tb = " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "After Swapping: a = " << a << "\tb = " << b;
    return 0;
}