// 7.4 lotto.cpp -- probability of winning
#include <iostream>

using namespace std;
long double probability(unsigned numbers, unsigned picks);

int main(void)
{
    double total, choices;
    cout << "Enter the total number of choices on the game card and the number of picks allowed: " << endl;
    while ((cin >> total >> choices) && choices <= total)
    {
        cout << "You have one chance in ";
        cout << 1 / probability(total, choices);
        cout << " of winning." << endl;
        cout << "Next two numbers (q to quit): ";
    }

    cout << "bye" << endl;

    return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
    {
        result = result * n / p;
    }

    return result;
}