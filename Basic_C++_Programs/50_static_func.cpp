// Static Member Function Program -> Create a function that can be called without any object and only accesses static members.

#include <iostream>
using namespace std;

class Student
{
private:
    static int count;

public:
    static void showCount()
    {
        cout << "Total Students: " << count << endl;
    }

    void addStudent()
    {
        count++;
    }
};

int Student::count = 0;

int main()
{
    Student s1, s2, s3;

    s1.addStudent();
    s2.addStudent();
    s3.addStudent();

    Student::showCount();

    return 0;
}

