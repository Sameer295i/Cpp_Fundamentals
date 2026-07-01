// Stream Classes (cin, cout, ifstream, ofstream) -> Demonstrate usage of stream classes for I/O operations.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int num;
    string text;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter a word: ";
    cin >> text;

    cout << "You entered: " << num << " and " << text << endl;

    ofstream fout("60_data.txt");
    fout << num << " " << text;
    fout.close();

    ifstream fin("60_data.txt");
    int n;
    string t;

    fin >> n >> t;
    cout << "Read from file: " << n << " and " << t << endl;

    fin.close();

    return 0;
}