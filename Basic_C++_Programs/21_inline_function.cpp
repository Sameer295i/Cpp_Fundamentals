// Inline Functions in Class -> Declare and define inline functions inside a class

#include <iostream>
using namespace std;

class Calculator
{
public:
    inline int add(int a, int b)
    {
        return a + b;
    }
};

int main()
{
    Calculator c;

    cout << "Sum: " << c.add(4, 6) << endl;

    return 0;
}