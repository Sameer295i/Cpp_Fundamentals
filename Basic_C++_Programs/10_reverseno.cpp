// Reverse a number -> Reverse using loop

#include <iostream>
using namespace std;

int main()
{
    int n, remainder, reverse = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0)
    {
        remainder = n % 10; 
        reverse = reverse * 10 + remainder; 
        n = n / 10;  
    }

    cout << "Reversed number: " << reverse << endl;
    return 0;
}