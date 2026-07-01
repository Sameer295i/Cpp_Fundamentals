// Nested Exception -> Multiple catch blocks

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try
    {
        if (b == 0)
            throw 0;          
        if (a < 0)
            throw "Negative number not allowed";

        cout << "Result: " << a / b << endl;
    }

    catch (int x)
    {
        cout << "Error: Division by zero!" << endl;
    }

    catch (const char *msg)
    {
        cout << "Error: " << msg << endl;
    }

    return 0;
}