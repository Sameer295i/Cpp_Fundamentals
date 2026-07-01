// Prime Number -> Check for prime

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n == 0 || n == 1)
        cout << n << " is not a Prime number." << endl;
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                cout << n << " is not a Prime number." << endl;
                return 0;
            }
        }
        cout << n << " is a Prime number." << endl;
    }
    return 0;
}