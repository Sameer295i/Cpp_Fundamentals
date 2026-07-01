// Multilevel Inheritance -> Inheritance across 3+ levels

#include <iostream>
using namespace std;

class GrandParent
{
public:
    void showGrandParent()
    {
        cout << "GrandParent class function" << endl;
    }
};

class Parent : public GrandParent
{
public:
    void showParent()
    {
        cout << "Parent class function" << endl;
    }
};

class Child : public Parent
{
public:
    void showChild()
    {
        cout << "Child class function" << endl;
    }
};

int main()
{
    Child c;
    c.showGrandParent();
    c.showParent();
    c.showChild();

    return 0;
}