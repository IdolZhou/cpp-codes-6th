#include <iostream>

using namespace std;

int main(void)
{
    int firstNumber, secondNumber, sum = 0;
    cout << "Enter the number of first: ";
    cin >> firstNumber;
    cout << "Enter the number of second: ";
    cin >> secondNumber;

    for (int i = firstNumber; i < secondNumber + 1; i++)
    {
        sum += i;
    }

    cout << "The sum of all integers before "
         << firstNumber
         << " and "
         << secondNumber
         << " is "
         << sum
         << endl;

    return 0;
}