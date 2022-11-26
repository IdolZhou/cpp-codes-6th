#include <iostream>
#include <array>

using namespace std;

const int ArSize = 16;
const int BrSize = 100;
int main(void)
{
#pragma region 5.4 程序清单 formore.cpp
    // long long factorials[ArSize];
    // factorials[1] = factorials[0] = 1LL;
    // for (int i = 2; i < ArSize; i++)
    // {
    //     factorials[i] = i * factorials[i - 1];
    // }

    // for (int i = 0; i < ArSize; i++)
    // {
    //     cout << i << "! = " << factorials[i] << endl;
    // }
#pragma endregion

#pragma region 改为array对象
    array<long double, BrSize> factorials;
    factorials[1] = factorials[0] = 1ULL;
    for (int i = 2; i < BrSize + 1; i++)
    {
        factorials[i] = i * factorials[i - 1];

        if (i == BrSize)
        {
            cout << BrSize << "! = " << factorials[i - 1] << endl;
        }
    }

#pragma endregion

    return 0;
}