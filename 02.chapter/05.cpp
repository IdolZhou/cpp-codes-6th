#include <iostream>

using namespace std;

float tempUnitConvert(float celsius);

int main(void)
{
    float fahrenheit = 0.0;
    cout << "Please enter a Celsius value: ";
    cin >> fahrenheit;
    cout << fahrenheit << " degrees Celsius is " << tempUnitConvert(fahrenheit) << " degrees Fahrenheit." << endl;
    return 0;
}

float tempUnitConvert(float celsius)
{
    return celsius * 1.8 + 32;
}