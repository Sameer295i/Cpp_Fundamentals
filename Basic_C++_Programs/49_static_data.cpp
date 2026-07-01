// Static Data Member Program -> Share a data member across all instances of a class.

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

    void show()
    {
        cout << name << endl;
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
    Student s2("Harry");
    Student s3("Vikas");

    s1.show();
    s2.show();
    s3.show();

    Student::showCount(); 

    return 0;
}