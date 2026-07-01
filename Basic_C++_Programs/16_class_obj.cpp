// Class and Object -> Create and use simple class

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1;   // object

    s1.name = "Sameer";
    s1.age = 18;

    s1.display();

    return 0;
}