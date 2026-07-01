// Dynamic Memory Allocation (new and delete) -> Allocate and deallocate memory dynamically using new and delete.

#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int; 

    *ptr = 10;
    cout << "Value: " << *ptr << endl;

    delete ptr;   

    int n = 3;
    int *arr = new int[n];   

    cout << "Enter 3 numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;  

    return 0;
}