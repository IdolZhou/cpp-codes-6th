#include <iostream>

using namespace std;

const int MINUTE_TO_SECOND = 60;
const int HOUR_TO_SECOND = 3600;
const int DAY_TO_SECOND = 86400;

int main(void)
{
    long allSeconds = 0;
    cout << "Enter the number of seconds: ";
    cin >> allSeconds;

    long days = allSeconds / DAY_TO_SECOND;
    long hours = allSeconds % DAY_TO_SECOND / HOUR_TO_SECOND;
    long minutes = allSeconds % DAY_TO_SECOND % HOUR_TO_SECOND / MINUTE_TO_SECOND;
    long seconds = allSeconds % DAY_TO_SECOND % HOUR_TO_SECOND % MINUTE_TO_SECOND;

    cout
        << allSeconds
        << " seconds = "
        << days
        << " days, "
        << hours
        << " hours, "
        << minutes
        << " minutes, "
        << seconds
        << " seconds"
        << endl;

    return 0;
}