#include <iostream>

using namespace std;

double harmean(double a, double b);

int main(void)
{
    double a, b;
    cout << "Enter two numbers, until one of them is zero: ";
    while (cin >> a && a != 0 && cin >> b && b != 0)
    {
        cout << a << ", " << b << " HARMEAN = " << harmean(a, b) << endl;
        cout << "Next: " << endl;
    }

    return 0;
}

double harmean(double a, double b)
{
    return 2.0 * a * b / (a + b);
}