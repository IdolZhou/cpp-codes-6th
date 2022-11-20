#include <iostream>

using namespace std;

int main(void)
{
    long long population, usPopulation = 0;
    cout << "Enter the world's population: ";
    cin >> population;

    cout << "Enter the population of the US: ";
    cin >> usPopulation;

    cout << "The population of the US is "
         << (double)usPopulation / population * 100
         << "% of the world population."
         << endl;

    return 0;
}