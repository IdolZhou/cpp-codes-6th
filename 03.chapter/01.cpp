#include <iostream>

using namespace std;

const int FOOT_TO_INCH = 12;

int main(void)
{
    int height = 0;
    cout << "Enter your height int inches_";
    cin >> height;
    int feet = height / FOOT_TO_INCH;
    int inches = height % FOOT_TO_INCH;

    cout << "Your height convert to "
         << feet << " foot and "
         << inches << " inch."
         << endl;

    return 0;
}