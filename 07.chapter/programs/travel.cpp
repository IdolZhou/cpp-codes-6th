// travel.cpp -- using structures with functions
#include <iostream>

using namespace std;

struct travel_time
{
    int hours;
    int mins;
};

const int Mins_per_hr = 60;
travel_time sum(travel_time d1, travel_time d2);
void show_time(travel_time t);

int main(void)
{

    travel_time day1 = {5, 45};
    travel_time day2 = {4, 55};
    travel_time day3 = {4, 32};
    travel_time trip = sum(day1, day2);
    cout << "Two-day total: ";
    show_time(trip);

    cout << "Three-day total: ";
    show_time(sum(trip, day3));
    return 0;
}

travel_time sum(travel_time d1, travel_time d2)
{
    travel_time total;
    total.mins = (d1.mins + d2.mins) % Mins_per_hr;
    total.hours = d1.hours + d2.hours + (d1.mins + d2.mins) / Mins_per_hr;

    return total;
}

void show_time(travel_time t)
{
    cout << t.hours << " hours, " << t.mins << " minutes" << endl;
}