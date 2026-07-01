// This Pointer -> Use this to resolve name conflicts

#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    void setMarks(int marks)
    {
        this->marks = marks;
    }

    void show()
    {
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;

    s.setMarks(90);
    s.show();

    return 0;
}