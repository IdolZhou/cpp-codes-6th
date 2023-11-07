/**
 * 📄FileName   : 8.1.inline.cpp
 * ⏱CreateDate : 2023/08/05 22:37:10
 * 🧑Author     : master
 * 👆Version    : 1.0
 * 💭Description: using an inline function
 */

#include <iostream>

// inline function definition
inline double square(double x) { return x * x; }

int main(void)
{
    using namespace std;

    double a, b;
    double c = 13.0;
    a = square(5.0);
    b = square(4.5 + 7.5); // can pass expressions
    cout << "a = " << a << ", b = " << b << "\n";
    cout << "c = " << c;
    cout << ", c suqared = " << square(c++) << "\n";
    cout << "Now c = " << c << "\n";

    return 0;
}