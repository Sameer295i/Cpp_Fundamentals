// Calculator -> Basic arithmetic operations

#include <iostream>
using namespace std;

int main()
{
    float x, y, result;
    char op;
    cout << "Enter two numbers: ";
    cin >> x;
    cin >> op;
    cin >> y;
    if (op == '+')
        result = x + y;
    else if (op == '-')
        result = x - y;
    else if (op == '*')
        result = x * y;
    else if (op == '/')
        result = x / y;
    cout << x << op << y << " = " << result << endl;
    return 0;
}