#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct patron
{
    string name;
    double donation;
};

int main(void)
{
    int num;
    bool empty = true;
    cout << "Please enter the number of patrons: ";
    cin >> num;

    vector<patron> patrons(num);

    for (int i = 0; i < num; i++)
    {
        cout << "donor: #" << i + 1 << endl;
        cout << "Please enter the name of the donor: ";
        cin >> patrons[i].name;
        cout << "Please enter the  donation amount: ";
        cin >> patrons[i].donation;
    }

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