// Static Data Members & Functions -> Use shared variables across objects

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    static int count;

    Student(string n)
    {
        name = n;
        count++; 
    }

    static void showCount()   
    {
        cout << "Total Students: " << count << endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1("Sameer");
    Student s2("Vikas");
    Student s3("Rohit");

    cout << "Count using object: " << s1.count << endl;

    Student::showCount(); 
    return 0;
}