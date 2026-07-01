// Data Abstraction -> Expose essential features only

#include <iostream>
using namespace std;

class Car
{
public:
    void start()
    {
        cout << "Car started" << endl;
    }
    void drive()
    {
        cout << "Car is running" << endl;
    }
};

int main()
{
    Car c;
    c.start();
    c.drive();
    return 0;
}