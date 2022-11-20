#include <iostream>

using namespace std;

float astronomyUnitConvert(float lightYears);

int main(void)
{
    float lightYears = 0.0;
    cout << "Enter the number of light years: ";
    cin >> lightYears;
    cout << lightYears
         << " light years = "
         << astronomyUnitConvert(lightYears)
         << " astronomical units."
         << endl;

    return 0;
}

float astronomyUnitConvert(float lightYears)
{
    return lightYears * 63240;
}