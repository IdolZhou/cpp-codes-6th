/**
 * 📄FileName   : 8.11.funtemp.cpp
 * ⏱CreateDate : 2023/11/09 10:29:54
 * 🧑Author     : master
 * 👆Version    : 1.0
 * 💭Description: using a function template
 */

#include <iostream>

using namespace std;

// function template prototype.
// or class T
template <typename T> void Swap(T &a, T &b);

int main(void)
{
    int i = 10;
    int j = 20;
    cout << "i, j = " << i << ", " << j << endl;
    // generates void Swap(int &, int &)
    Swap(i, j);
    cout << "Now i,j = " << i << ", " << j << endl;

    double x = 24.5;
    double y = 81.7;
    cout << "x, y = " << x << ", " << y << endl;
    cout << "Using compiler-generated double swapper: " << endl;
    // generates void Swap(double &, double &)
    Swap(x, y);
    cout << "Now x,y = " << x << ", " << y << endl;

    return 0;
}

/// @brief 交换两个参数的值
/// @tparam T 泛型
/// @param a
/// @param b
template <typename T> void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
