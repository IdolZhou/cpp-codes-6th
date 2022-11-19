#include <iostream>

using namespace std;

void toTime(int hours, int minutes);

int main(void)
{
    int hours = 0;
    int minutes = 0;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    toTime(hours, minutes);
}

void toTime(int hours, int minutes)
{
    cout << "Time: " << hours << ":" << minutes;
}