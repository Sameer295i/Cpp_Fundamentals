// Hybrid Inheritance -> Combination of multiple types

#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "Class A" << endl;
    }
};
class B : public A
{
public:
    void display()
    {
        cout << "Class B" << endl;
    }
};
class C : public A
{
public:
    void display()
    {
        cout << "Class C" << endl;
    }
};
class D : public B, public C
{
public:
    void display()
    {
        cout << "Class D" << endl;
    }
};
int main()
{
    D obj;
    obj.display();
    obj.B::display();
    obj.C::display();
    // obj.A::display();
    return 0;
}
