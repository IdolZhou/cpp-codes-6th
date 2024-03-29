/**
 * 📄FileName   : 7.14 topfive.cpp
 * ⏱CreateDate : 2023/08/02 21:57:39
 * 🧑Author     : master
 * 👆Version    : 1.0
 * 💭Description: handling an array of string objects
 */

#include <iostream>
#include <string>

using namespace std;

const int SIZE = 5;
void display(const string sa[], int n);

int main(void)
{
    string list[SIZE]; // an array holding 5 string object
    cout << "Enter your " << SIZE << " favorite astronomical sights;" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << i + 1 << ": ";
        getline(cin, list[i]);
    }

    cout << "Your list:" << endl;
    display(list, SIZE);

    return 0;
}

void display(const string sa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ": " << sa[i] << endl;
    }
}