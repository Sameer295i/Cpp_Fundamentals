// Class Templates -> Generic class using templates

#include <iostream>
using namespace std;    

template <typename T>
class MyClass
{
private:
    T value;

public:
    MyClass(T v) : value(v) {}

    T getValue()
    {
        return value;
    }
};

int main()
{
    MyClass<int> obj1(10);
    MyClass<double> obj2(3.14);

    cout << "Value of obj1: " << obj1.getValue() << endl;
    cout << "Value of obj2: " << obj2.getValue() << endl;

    return 0;
}