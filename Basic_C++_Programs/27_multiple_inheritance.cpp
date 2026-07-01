// Multiple Inheritance -> A class inherits from two classes

#include <iostream>
using namespace std;

class Base1
{
public:
    void show1()
    {
        cout << "Base class 1 function" << endl;
    }
};

class Base2
{
public:
    void show2()
    {
        cout << "Base class 2 function" << endl;
    }
};

class Derived : public Base1, public Base2
{
public:
    void display()
    {
        show1();
        show2();
    }
};

int main()
{
    Derived d;
    d.display();

    return 0;
}