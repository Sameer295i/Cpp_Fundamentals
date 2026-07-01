// Const Member Functions -> Declare member functions that don’t modify data

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
    }
};

int main()
{
    Student s;

    s.setMarks(95);
    s.showMarks();

    return 0;
}