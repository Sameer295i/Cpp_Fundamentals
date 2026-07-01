// Hierarchical Inheritance -> One base, many derived classes

#include <iostream>
using namespace std;

class Base
{
public:
    void show()
    {
        cout << "Base class function" << endl;
    }
};

class Derived1 : public Base
{
public:
    void display1()
    {
        show();
    }
};

class Derived2 : public Base
{
public:
    void display2()
    {
        show();
    }
};

int main()
{
    Derived1 d1;
    Derived2 d2;

    d1.display1();
    d2.display2();

    return 0;
}