// Virtual Function with Pointer to Base Class -> Call derived class method using base class pointer with a virtual function (demonstrating dynamic dispatch).

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void display()
    {
        cout << "Display of Base class" << endl;
    }
};

class Derived : public Base
{
public:
    void display()
    {
        cout << "Display of Derived class" << endl;
    }
};

int main()
{
    Base *ptr;

    Derived d;

    ptr = &d;

    ptr->display();
    return 0;
}