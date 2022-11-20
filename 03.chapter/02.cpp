#include <iostream>

using namespace std;

const int FOOT_TO_INCH = 12;
const double INCH_TO_METER = 0.0254;
const double KILLOGRAM_TO_POUND = 2.2;

double bodyMassIndex(double heightFeet, double heightInches, double weightPound);

int main(void)
{
    int heightFeet, heightInches = 0;
    double weightPound;
    cout << "Please enter your height foot: ";
    cin >> heightFeet;
    cout << "Please enter your height inch: ";
    cin >> heightInches;

    cout << "Please enter your weight in pounds: ";
    cin >> weightPound;

    cout << "Your BMI is " << bodyMassIndex(heightFeet, heightInches, weightPound) << endl;

    return 0;
}

double bodyMassIndex(double heightFeet, double heightInches, double weightPound)
{
    double height = (heightFeet * FOOT_TO_INCH + heightInches) * INCH_TO_METER;
    double weight = weightPound / KILLOGRAM_TO_POUND;

    return weight / (height * height);
}