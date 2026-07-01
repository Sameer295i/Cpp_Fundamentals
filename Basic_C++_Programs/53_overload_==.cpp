// Overloading == Operator -> Compare two objects for equality using ==.

#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    Number(int v = 0)
    {
        value = v;
    }

    bool operator == (Number obj)
    {
        return value == obj.value;
    }
};

int main()
{
    Number n1(10), n2(10), n3(20);

    if (n1 == n2)
        cout << "n1 and n2 are equal" << endl;
    else
        cout << "n1 and n2 are not equal" << endl;

    if (n1 == n3)
        cout << "n1 and n3 are equal" << endl;
    else
        cout << "n1 and n3 are not equal" << endl;

    return 0;
}