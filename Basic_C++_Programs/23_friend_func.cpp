// Friend Function -> Access private members using friend

#include <iostream>
using namespace std;

class Test
{
private:
    int num;

public:
    Test()
    {
        num = 10;
    }

    friend void show(Test t);
};

void show(Test t)
{
    cout << "Value: " << t.num << endl;
}

int main()
{
    Test t1;
    show(t1);

    return 0;
}