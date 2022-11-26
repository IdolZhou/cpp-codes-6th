#include <iostream>
#include <string>

using namespace std;

const int MONTH = 12;

int main(void)
{
    const string months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sept", "Oct", "Nov", "Dec"};
    int sales[MONTH];
    int saleSum = 0;
    cout << "Enter the monthly sales of《C++ For Fools》" << endl;

    for (int i = 0; i < MONTH; i++)
    {
        cout << months[i] << ": ";
        cin >> sales[i];
        saleSum += sales[i];
    }

    cout << "Sum = " << saleSum << endl;

    return 0;
}