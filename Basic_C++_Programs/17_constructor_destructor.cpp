// Constructor & Destructor -> Use default, parameterized, and copy constructors

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    Student() // Default Constructor
    {
        cout << "Default Constructor Called" << endl;
        name = "Unknown";
        age = 0;
    }
    Student(string n, int a) // Parameterized Constructor
    {
        cout << "Parameterized Constructor Called" << endl;
        name = n;
        age = a;
    }
    Student(const Student &s) // Copy Constructor
    {
        cout << "Copy Constructor Called" << endl;
        name = s.name;
        age = s.age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    ~Student() // Destructor
    {
        cout << "Destructor Called for " << name << endl;
    }
};

int main()
{
    Student s1;
    s1.display();
    cout << endl;
    Student s2("Sameer", 20);
    s2.display();
    cout << endl;
    Student s3 = s2;
    s3.display();

    return 0;
}