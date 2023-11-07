/**
 * 📄FileName   : 8.5.cubes.cpp
 * ⏱CreateDate : 2023/08/06 16:37:07
 * 🧑Author     : master
 * 👆Version    : 1.0
 * 💭Description: regular and reference arguments
 */

#include <iostream>

double cube(double a);
double refcube(double &ra);

int main(void)
{
    using namespace std;

    double x = 3.0;
    cout << cube(x);
    cout << " = cube of " << x << endl;
    cout << refcube(x);
    cout << " = cube of " << x << endl;
    return 0;
}

double cube(double a)
{
    a *= a * a;
    return a;
}

double refcube(double &ra)
{
    ra *= ra * ra;
    return ra;
}
