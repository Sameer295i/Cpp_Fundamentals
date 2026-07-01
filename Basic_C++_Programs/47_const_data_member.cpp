// Constant Data Member Program -> Define a constant data member initialized using constructor initializer list.

#include <iostream>
using namespace std;

class Test
{
private:
    const int x;  

public:
    Test(int val) : x(val)
    {
        cout << "Constructor called" << endl;
    }

    void show()
    {
        cout << "Value of x: " << x << endl;
    }
};

int main()
{
    Test t(50);

    t.show();

    return 0;
}