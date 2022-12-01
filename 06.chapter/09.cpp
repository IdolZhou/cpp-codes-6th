#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <direct.h>

using namespace std;

struct patron
{
    string name;
    double donation;
};

int main(void)
{
    int num;
    int i = 0;
    bool empty = true;
    string filename = "";
    cout << "Enter the file name: ";
    getline(cin, filename);
    ifstream file;
    file.open(filename);
    if (!file.is_open())
    {
        cout << "open the file of '" << filename << "' filed." << endl;
        exit(EXIT_FAILURE);
    }

    file >> num;

    if (num <= 0)
    {
        exit(EXIT_FAILURE);
    }

    file.get();

    vector<patron> patrons(num);

    while (!file.eof() && i < num)
    {
        getline(file, patrons[i].name);
        file >> patrons[i].donation;
        i++;
        file.get();
    }

    file.close();

    cout << "Grand Patrons: " << endl;
    for (int i = 0; i < num; i++)
    {
        if (patrons[i].donation > 10000)
        {
            empty = false;
            cout << patrons[i].name << ": $" << patrons[i].donation << endl;
        }
    }

    if (empty)
    {
        cout << "none" << endl;
    }

    empty = true;
    cout << "Patrons: " << endl;
    for (int i = 0; i < num; i++)
    {
        if (patrons[i].donation <= 10000)
        {
            empty = false;
            cout << patrons[i].name << ": $" << patrons[i].donation << endl;
        }
    }

    if (empty)
    {
        cout << "none" << endl;
    }

    return 0;
}