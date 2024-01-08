/**
 * 📄FileName   : 9.2.file1.cpp
 * ⏱CreateDate : 2024/01/08 16:06:11
 * 🧑Author     : master
 * 👆Version    : 1.0
 * 💭Description: example of a three-file program
 */

#include "9.1.coordin.h" // structure templates, function prototypes
#include <iostream>

using namespace std;

int main(void)
{
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two numbers(q to quit): ";
    }

    cout << "Bye!\n";
    return 0;
}