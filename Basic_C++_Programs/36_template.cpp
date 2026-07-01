// Template with Multiple Types -> Use multiple parameters

#include <iostream>
using namespace std;

template <typename T, typename U>
class Pair
{
private:
    T first;
    U second;

public:
    Pair(T f, U s) : first(f), second(s) {}

    T getFirst()
    {
        return first;
    }

    U getSecond()
    {
        return second;
    }
};

int main()
{
    Pair<int, double> p1(10, 3.14);
    Pair<string, int> p2("Hello", 5);

    cout << "Pair 1: " << p1.getFirst() << ", " << p1.getSecond() << endl;
    cout << "Pair 2: " << p2.getFirst() << ", " << p2.getSecond() << endl;

    return 0;
}
