#include <iostream>

using namespace std;

double convertToDegrees(int degrees, int minutes, int seconds);

const int DEGREE_FACTOR = 60;

int main(void)
{
    int degrees, minutes, seconds = 0;

    cout << "Enter a latitude in degree, minutes, and seconds: " << endl;
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the mintes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;
    cout << degrees << " degrees, "
         << minutes << " minutes, "
         << seconds << " seconds = "
         << convertToDegrees(degrees, minutes, seconds)
         << " degrees" << endl;

    return 0;
}

double convertToDegrees(int degrees, int minutes, int seconds)
{
    return degrees + (double)minutes / DEGREE_FACTOR + (double)seconds / DEGREE_FACTOR / DEGREE_FACTOR;
}