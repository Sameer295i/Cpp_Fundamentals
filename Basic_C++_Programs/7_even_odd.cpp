// Even or Odd -> Check if a number is even or odd

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n % 2 == 0)
        cout << n << " is Even number." << endl;
    else
        cout << n << " is a odd number." << endl;
    return 0;
}