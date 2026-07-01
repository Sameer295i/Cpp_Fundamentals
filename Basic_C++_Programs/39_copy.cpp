// Copy One File to Another -> Read and write from files

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile("39_source.txt");   // file to read from
    ofstream outFile("39_copy.txt");    // file to write to

    if (!inFile)
    {
        cout << "Source file not found!" << endl;
        return 0;
    }

    string line;

    while (getline(inFile, line))
    {
        outFile << line << endl;
    }

    inFile.close();
    outFile.close();

    cout << "File copied successfully!" << endl;

    return 0;
}