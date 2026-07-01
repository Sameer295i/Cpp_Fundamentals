// Try-Catch Block -> Handle division by zero

#include <iostream>
using namespace std;

int main()
{
    double a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try
    {
        if (b == 0)
        {
            throw "Division by zero error!";
        }

        cout << "Result: " << a / b << endl;
    }
    catch (const char *msg)
    {
        cout << "Error: " << msg << endl;
    }

    return 0;
}