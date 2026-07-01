// Virtual Function with Base and Derived Class -> Demonstrate dynamic binding using virtual functions in base and derived classes.

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

class Derived1 : public Base
{
public:
    void display()
    {
        cout << "Display of Derived1 class" << endl;
    }
};

class Derived2 : public Base
{
public:
    void display()
    {
        cout << "Display of Derived2 class" << endl;
    }
};

int main()
{
    Base *bptr;

    Derived1 d1;
    Derived2 d2;

    bptr = &d1;
    bptr->display();

    bptr = &d2;
    bptr->display();
    return 0;
}