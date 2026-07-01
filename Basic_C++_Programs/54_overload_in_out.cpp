// Overloading << and >> Operators -> Enable object input/output with cin and cout.

#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    friend istream &operator>>(istream &in, Student &s);
    friend ostream &operator<<(ostream &out, Student s);
};

istream &operator>>(istream &in, Student &s)
{
    cout << "Enter marks: ";
    in >> s.marks;
    return in;
}

ostream &operator<<(ostream &out, Student s)
{
    out << "Marks: " << s.marks;
    return out;
}

int main()
{
    Student s;

    cin >> s;
    cout << s;

    return 0;
}