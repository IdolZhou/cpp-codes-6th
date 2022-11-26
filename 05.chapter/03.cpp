#include <iostream>

using namespace std;

int main(void)
{
    int number, sum = 0;
    do
    {
        cout << "Enter a number to add: ";
        cin >> number;
        sum += number;
        cout << "sum = " << sum << endl;
    } while (number != 0);

    return 0;
}