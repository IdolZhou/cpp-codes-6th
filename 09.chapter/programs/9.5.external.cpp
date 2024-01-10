/**
 * 📄FileName   : 9.5.external.cpp
 * ⏱CreateDate : 2024/01/09 15:11:15
 * 🧑Author     : master
 * 👆Version    : 1.0
 * 💭Description: external variables
 */

#include <iostream>

using namespace std;

double warming = 0.3; // warming defined
void update(double dt);
void local();

int main(void)
{
    cout << "Global waring is " << warming << " degree" << endl;
    update(0.1);
    cout << "Global warming is " << warming << " degrees" << endl;
    local();
    cout << "Global warming is " << warming << " degrees" << endl;

    return 0;
}