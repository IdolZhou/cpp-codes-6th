/**
 * 📄FileName   : 9.4.auto.cpp
 * ⏱CreateDate : 2024/01/09 11:15:31
 * 🧑Author     : master
 * 👆Version    : 1.0
 * 💭Description: illustrating scope of automatic variables
 */

#include <iostream>

using namespace std;

void oil(int x);

int main(void)
{
    int texas = 31;
    int year = 2001;
    cout << "In main(), texas = " << texas << ", &texas = " << &texas << endl;
    cout << "In main(), year = " << year << ", &year = " << &year << endl;
    oil(texas);
    cout << "In main(), texas = " << texas << ", &texas = " << &texas << endl;
    cout << "In main(), year = " << year << ", &year = " << &year << endl;

    return 0;
}

void oil(int x)
{
    int texas = 5;
    cout << "In oil(), texas = " << texas << ", &texas = " << &texas << endl;
    cout << "In oil(), x = " << x << ", &x = " << &x << endl;
    {
        int texas = 113;
        cout << "In block, texas = " << texas << ", &texas = " << &texas << endl;
        cout << "In block, x = " << x << ", &x = " << &x << endl;
    }

    cout << "Post-block texas = " << texas << ", &texas = " << &texas << endl;
}
