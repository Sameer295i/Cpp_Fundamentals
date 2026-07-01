// Function and Class Templates -> Create generic functions and classes using template.

#include <iostream>
using namespace std;

template <typename T> // Function Template
T add(T a, T b)
{
    return a + b;
}

template <class T> // Class Template
class Calculator
{
private:
    T a, b;

public:
    Calculator(T x, T y)
    {
        a = x;
        b = y;
    }

    T multiply()
    {
        return a * b;
    }
};

int main()
{
    cout << "Function Template (int): " << add(10, 20) << endl;
    cout << "Function Template (float): " << add(2.5f, 3.5f) << endl;

    cout << endl;

    Calculator<int> c1(10, 20);
    cout << "Class Template (int multiply): " << c1.multiply() << endl;

    Calculator<float> c2(2.5, 3.5);
    cout << "Class Template (float multiply): " << c2.multiply() << endl;

    return 0;
}