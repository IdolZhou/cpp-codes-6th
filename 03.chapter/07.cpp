#include <iostream>

using namespace std;

const double CALLON_TO_LITRE = 3.875;
const double HKM_TO_MTLE = 62.14;

int main(void)
{
    double fuelConsumeEU, fuelCosumeUS = 0;
    cout << "Enter the fuel consume in europe(L/100km): ";
    cin >> fuelConsumeEU;

    fuelCosumeUS = (CALLON_TO_LITRE * HKM_TO_MTLE) / fuelConsumeEU;

    cout << "The fuel consume is " << fuelCosumeUS << " mile/gall" << endl;
    return 0;
}