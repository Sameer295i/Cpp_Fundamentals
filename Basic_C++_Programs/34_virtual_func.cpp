// Virtual Functions -> Use runtime polymorphism

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
    Base *b;  

    Derived1 d1;
    Derived2 d2;

    b = &d1;
    b->display();

    b = &d2;
    b->display();
    return 0;
}