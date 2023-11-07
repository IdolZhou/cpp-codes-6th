/**
 * 📄FileName   : 8.4.swaps.cpp
 * ⏱CreateDate : 2023/08/06 11:28:57
 * 🧑Author     : master
 * 👆Version    : 1.0
 * 💭Description: swapping with references and with pointers
 */

#include <iostream>

void swapr(int &a, int &b); // a, b are aliases for ints
void swapp(int *p, int *q); // p, q are addresses of ints
void swapv(int a, int b);   // a, b are new variables

int main(void)
{
    using namespace std;
    int wallet1 = 300;
    int wallet2 = 350;
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Using references to swap contents:\n";
    swapr(wallet1, wallet2); // pass variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Using pointers to swap contents again:\n";
    swapp(&wallet1, &wallet2); // pass addresses of variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Try to use passing by value:\n";
    swapv(wallet1, wallet2); // pass value of variables
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;
    return 0;
}

void swapr(int &a, int &b) // use references
{
    int temp;
    temp = a; // use a, b for values of variables
    a = b;
    b = temp;
}

void swapp(int *p, int *q) // use pointers
{
    int temp;
    temp = *p; // use *p, *q for values of variables
    *p = *q;
    *q = temp;
}

void swapv(int a, int b) // try using values
{
    int temp;
    temp = a; // using a, b for values of variables
    a = b;
    b = temp;
}
