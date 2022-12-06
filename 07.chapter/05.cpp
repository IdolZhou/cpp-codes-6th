#include <iostream>

using namespace std;

long long factorial(int n);

int main(void)
{
    int n;
    cout << "Enter the number: ";
    if (cin >> n && n >= 0)
    {
        cout << n << "! = " << factorial(n) << endl;
    }
    else
    {
        cout << "Invalid input!" << endl;
    }

    return 0;
}

long long factorial(int n)
{
    long long result = -1;
    if (n == 0)
    {
        result = 1;
    }
    else if (n > 0)
    {
        result = n * factorial(n - 1);
    }
    else
    {
        // 小于0 错误
    }

    return result;
}