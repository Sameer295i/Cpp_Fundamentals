// File Handling -> Perform read/write operations using fstream, ifstream, ofstream.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("61_data.txt");
    fout << "Hello World\n";
    fout << "C++ File Handling";
    fout.close();

    ifstream fin("61_data.txt");
    string line;

    cout << "Reading using ifstream:\n";
    while (getline(fin, line))
    {
        cout << line << endl;
    }
    fin.close();

    fstream file("61_data.txt", ios::in | ios::app);

    file << "\nAppending using fstream";

    file.seekg(0);
    cout << "\nReading using fstream:\n";
    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();

    return 0;
}