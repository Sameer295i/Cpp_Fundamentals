// Const Member Function Program -> Define a member function that does not modify any class data members

#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    void setMarks(int m)
    {
        marks = m;
    }

    void showMarks() const
    {
        cout << "Marks: " << marks << endl;

        // marks = 100; ❌ Not allowed (because function is const)
    }
};

int main()
{
    Student s;

    s.setMarks(85);
    s.showMarks();

    return 0;
}