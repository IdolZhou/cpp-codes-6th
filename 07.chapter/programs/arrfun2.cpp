/**
 * 📄FileName   : 7.6 arrfun2.cpp
 * ⏱CreateDate : 2023/08/02 21:53:24
 * 🧑Author     : master
 * 👆Version    : 1.0
 * 💭Description: function with an array argument
 */

#include <iostream>

using namespace std;

const int ArSize = 8;
int sum_arr(int arr[], int n);

int main()
{
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
    // 这里的sizeof 计算的是数组的大小
    cout << cookies << " = cookies address, " << sizeof cookies << " = sizeof cookies" << endl;

    int sum = sum_arr(cookies, ArSize);
    cout << "Total cookies eaten: " << sum << " cookies." << endl;
    sum = sum_arr(cookies, 3);
    cout << "First three eaters ate " << sum << " cookies." << endl;
    sum = sum_arr(cookies + 4, 4);
    cout << "Last four eaters ate " << sum << " cookies." << endl;
    return 0;
}

int sum_arr(int arr[], int n)
{
    int total = 0;
    // 此处会有编译警告，这里的sizeof 计算的是指针的大小
    cout << arr << " = arr address, " << sizeof arr << " = sizeof arr" << endl;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }

    return total;
}