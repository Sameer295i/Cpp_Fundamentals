// Overloading Unary Operator - -> Negate object's values using overloaded unary - operator.

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

    Number operator - ()
    {
        Number temp;
        temp.value = -value;
        return temp;
    }

    void show()
    {
        cout << "Value: " << value << endl;
    }
};

int main()
{
    Number n1(10);

    Number n2 = -n1;  

    n2.show();

    return 0;
}

