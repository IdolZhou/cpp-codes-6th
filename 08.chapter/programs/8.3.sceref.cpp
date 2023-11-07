/**
 * 📄FileName   : 8.3.sceref.cpp
 * ⏱CreateDate : 2023/08/06 10:20:30
 * 🧑Author     : master
 * 👆Version    : 1.0
 * 💭Description: defing and using a reference
 */

#include <iostream>

int main(void)
{
    using namespace std;
    int rats = 101;
    int &rodents = rats; // rodents is a reference
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    cout << "rats address = " << &rats;
    cout << ", rodents adress = " << &rodents << endl;

    int bunnies = 50;
    rodents = bunnies; // can we change the reference?
    cout << "bunnies = " << bunnies;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    cout << "bunnies address = " << &bunnies;
    cout << ", rodents adress = " << &rodents << endl;
    return 0;
}