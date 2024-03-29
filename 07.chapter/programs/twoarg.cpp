/**
 * 📄FileName   : twoarg.cpp 7.4
 * ⏱CreateDate : 2023/08/02 21:28:57
 * 🧑Author     : master
 * 👆Version    : 1.0
 * 💭Description: a function with 2 arguments
 */

#include <iostream>

using namespace std;
void n_chars(char, int);
int main()
{

    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    while (ch != 'q')
    {
        cout << "Enter an integer: ";
        cin >> times;
        n_chars(ch, times); // function with two arguments
        cout << "\nEnter another character or press the q-key to quit: ";
        cin >> ch;
    }
    cout << "The value of times is " << times << ".\n";
    cout << "Bye\n";
    return 0;
}

/// @brief displays c n times
/// @param c
/// @param n
void n_chars(char c, int n)
{

    // continue until n reaches 0
    while (n-- > 0)
    {
        cout << c;
    }
}