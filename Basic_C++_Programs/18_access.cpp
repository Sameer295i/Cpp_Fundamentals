// Access Modifiers -> Use of private, public, protected

#include <iostream>
using namespace std;

class Student
{
private:
    int marks; // only inside class
protected:
    int roll; // class + derived class
public:
    string name; // accessible everywhere

    void setData(int r, int m)
    {
        roll = r;
        marks = m;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

class Result : public Student
{
public:
    void show()
    {
        cout << "Accessing protected roll: " << roll << endl;
    }
};

int main()
{
    Student s;
    s.name = "Sameer";

    s.setData(1, 90);
    s.display();

    cout << endl;

    Result r;
    r.name = "sonu";
    r.setData(2, 85);
    r.show();

    return 0;
}