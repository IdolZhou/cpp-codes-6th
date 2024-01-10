/**
 * 📄FileName   : Untitled-1
 * ⏱CreateDate : 2024/01/10 16:01:24
 * 🧑Author     : master
 * 👆Version    : 1.0
 * 💭Description: variables with external and internal linkage
 */

#include <iostream>

int tom = 3;
int dick = 30;
static int harry = 300;
void remote_access();

int main(void)
{
    using namespace std;

    cout << "main() reports the following addresses:\n";
    cout << &tom << " = &tom " << &dick << " = &dick, " << &harry << " = &harry\n";
    remote_access();

    return 0;
}
