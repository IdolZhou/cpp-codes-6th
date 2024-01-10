/**
 * 📄FileName   : 9.6.support.cpp
 * ⏱CreateDate : 2024/01/09 15:19:29
 * 🧑Author     : master
 * 👆Version    : 1.0
 * 💭Description: use external variable
 */

#include <iostream>

extern double warming;

void update(double dt);
void local();

using std::cout;

void update(double dt)
{
    extern double warming;
    warming += dt;
    cout << "Updating global warming to " << warming << " degrees.\n";
}

void local()
{
    double warming = 0.8;
    cout << "Local warming = " << warming << " degrees.\n";
    cout << "But global warming = " << ::warming << " degress.\n";
}
