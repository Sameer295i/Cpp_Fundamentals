// Custom Exception -> Use throw, try, catch for user-defined errors

#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter age: ";
    cin >> age;

    try
    {
        if (age < 18)
        {
            throw "Not eligible to vote!";
        }

        cout << "Eligible to vote" << endl;
    }
    catch (const char *msg)
    {
        cout << "Error: " << msg << endl;
    }

    return 0;
}