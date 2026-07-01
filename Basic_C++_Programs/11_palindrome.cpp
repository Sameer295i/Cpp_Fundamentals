// Palindrome ->  Check numeric/string palindrome

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[20];
    cout << "Enter a number/string: ";
    cin.getline(str, 20);
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            cout << str << " is not a palindrome.";
            return 0;
        }
    }
    cout << str << " is a palindrome";
    return 0;
}