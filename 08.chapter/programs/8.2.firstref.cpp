/**
 * 📄FileName   : 8.2.firstref.cpp
 * ⏱CreateDate : 2023/08/05 22:53:39
 * 🧑Author     : master
 * 👆Version    : 1.0
 * 💭Description: defining and using a reference
 */

#include <iostream>

int main(void)
{
    using namespace std;
    int rats = 101;
    int &rodents = rats; // rodents is reference
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    rodents++;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    // some implementations require type casting the following
    // addresses to type unsigned
    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;
    return 0;
}