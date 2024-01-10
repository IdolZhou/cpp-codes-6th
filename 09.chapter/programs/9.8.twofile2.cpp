/**
 * 📄FileName   : 9.8.twofile2.cpp
 * ⏱CreateDate : 2024/01/10 16:06:08
 * 🧑Author     : master
 * 👆Version    : 1.0
 * 💭Description: variables with internal and external linkage
 */

#include <iostream>
extern int tom;       // tom defined elsewhere
static int dick = 10; // overrides external dick
int harry = 200;      // external variable definition
                      // no conflict with twofile1 harry
void remote_access()
{
    using namespace std;
    cout << "remote_access() reports the following addresses:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, " << &harry << " = &harry\n";
}