// Write and Read from File -> Basic file I/O using fstream

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Writing to file
    ofstream outFile("37_data.txt");

    outFile << "Hello World!" << endl;
    outFile << "This is file handling in C++" << endl;

    outFile.close();

    // Reading from file
    ifstream inFile("37_data.txt");

    string line;

    cout << "File Content:" << endl;

    while (getline(inFile, line))
    {
        cout << line << endl;
    }

    inFile.close();

    return 0;
}