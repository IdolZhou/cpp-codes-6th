#include <iostream>
#include <string>
#define openUnderline "\033[4m"
#define closeUnderline "\033[0m"

using namespace std;

const string months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sept", "Oct", "Nov", "Dec"};

int main(void)
{
    cout << "Enter the monthly sales of "
         << openUnderline
         << "C++ For Fools"
         << closeUnderline
         << endl;

    int saleSum = 0;
    int sales[3][12];
    for (int year = 0; year < 3; year++)
    {
        cout << year + 1 << endl;
        for (int month = 0; month < 12; month++)
        {
            cout << months[month] << ": ";
            cin >> sales[year][month];
            saleSum += sales[year][month];
        }
    }

    cout << "SUM = " << saleSum << endl;
    return 0;
}