#include <iostream>

using namespace std;

int main(void)
{
    double distanceInMiles, fuelInGallon, fuelConsume = 0;
    double distanceInKilometer, fuelInLitre = 0;

    cout << "Enter the distance in miles: ";
    cin >> distanceInMiles;
    cout << "Enter the fuel consume in gallon: ";
    cin >> fuelInGallon;

    fuelConsume = distanceInMiles / fuelInGallon;
    cout << "The fuel consume is " << fuelConsume << " miles/gallon." << endl;

    cout << "Enter the distance in kilometer: ";
    cin >> distanceInKilometer;
    cout << "Enter the fuel consume in litre: ";
    cin >> fuelInLitre;

    fuelConsume = fuelInLitre / distanceInKilometer * 100;
    cout << "The fuel consume is " << fuelConsume << " L/100km." << endl;

    return 0;
}