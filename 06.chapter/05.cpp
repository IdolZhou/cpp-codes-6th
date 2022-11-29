#include <iostream>
#include <cctype>

using namespace std;

float calcTax(int money);

int main(void)
{

    int money;

    cin >> money;
    cin.get();
    while (isalnum(money) && money > 0)
    {
        cout << calcTax(money) << endl;
        cin >> money;
        cin.get();
    }

    return 0;
}

float calcTax(int money)
{
    float result = 0.0;
    if (money < 5000)
    {
        // cout << "no taxes are charged" << endl;
    }
    else if (5001 <= money && money < 15000)
    {
        result = (money - 5000) * 0.1;
    }
    else if (15001 <= money && money < 35000)
    {
        result = (money - 15000) * 0.15 + (15000 - 5000) * 0.1;
    }
    else
    {
        result = (money - 35000) * 0.2 + 20000 * 0.15 + 10000 * 0.1;
    }

    return result;
}