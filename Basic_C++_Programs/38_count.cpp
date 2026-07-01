// Count Lines/Words in File -> Process file content

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("37_data.txt");

    if (!file)
    {
        cout << "File not found!" << endl;
        return 0;
    }

    string line, word;
    int lineCount = 0, wordCount = 0;

    while (getline(file, line))
    {
        lineCount++;

        int i = 0;
        while (i < line.length())
        {
            while (i < line.length() && line[i] == ' ')
                i++;

            if (i < line.length())
            {
                wordCount++;

                while (i < line.length() && line[i] != ' ')
                    i++;
            }
        }
    }

    file.close();

    cout << "Lines: " << lineCount << endl;
    cout << "Words: " << wordCount << endl;

    return 0;
}