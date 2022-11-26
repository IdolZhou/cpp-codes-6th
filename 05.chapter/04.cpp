#include <iostream>
#include <math.h>

using namespace std;

const int PRINCIPAL = 100;

int main(void)
{

    double depositDaphne = PRINCIPAL;
    double depositCleo = PRINCIPAL;
    int year = 0;

    while (depositDaphne >= depositCleo)
    {
        depositDaphne += 0.1 * PRINCIPAL;
        depositCleo += 0.05 * depositCleo;

        year++;
    }

    cout << "After " << year << " years, Cleo has more money than Daphne." << endl;
    cout << "Daphne has " << depositDaphne << " dollars." << endl;
    cout << "Cleo has " << depositCleo << " dollars." << endl;
    return 0;
}