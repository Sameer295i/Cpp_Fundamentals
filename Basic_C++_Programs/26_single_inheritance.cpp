// Single Inheritance -> One class inherits another

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

class Derived : public Base
{
public:
    void display()
    {
        show();
    }
};

int main()
{
    Derived d;
    d.display();

    return 0;
}