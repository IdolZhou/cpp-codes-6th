#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(void)
{

    ifstream inFile;
    string filename = "";
    char ch;
    int count = 0;
    cout << "Enter the file name: ";
    getline(cin, filename);
    inFile.open(filename);

    if (!inFile.is_open())
    {
        cout << "Failed to open the file!" << endl;
        exit(EXIT_FAILURE);
    }

    while (!inFile.eof())
    {
        inFile >> ch;
        count++;
    }

    cout << filename << " has " << count << " characters." << endl;
    inFile.close();
    inFile.clear();
    return 0;
}