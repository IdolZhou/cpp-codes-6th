#include <iostream>

using namespace std;

int main(void)
{
    double donations[10];
    double sum, average = 0.0;
    int num = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> donations[i];

        if (cin.fail())
        {
            // 非数字，退出循环
            break;
        }

        sum += donations[i];
        average = sum / i;
    }

    for (int i = 0; i < 10; i++)
    {
        if (donations[i] > average)
        {
            num++;
        }
    }
    cout << "average = " << average << endl;
    cout << "In this array has " << num << " value(s) larger than average." << endl;
    return 0;
}