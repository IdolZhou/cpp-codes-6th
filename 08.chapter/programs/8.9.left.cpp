/**
 * 📄FileName   : 8.9.left.cpp
 * ⏱CreateDate : 2023/11/08 15:09:13
 * 🧑Author     : master
 * 👆Version    : 1.0
 * 💭Description: string function with a default argument
 */

#include <iostream>

using namespace std;

const int ArSize = 80;
char *left(const char *str, int n = 1);

int main(void)
{
    char sample[ArSize];
    cout << "Enter a string:" << endl;
    cin.get(sample, ArSize);
    char *ps = left(sample, 4);
    cout << ps << endl;
    // free old string
    delete[] ps;
    ps = left(sample);
    cout << ps << endl;
    delete[] ps;

    return 0;
}

/// @brief this function returns a pointer to a new string
///        consisting of the first n characters in the str string
/// @param str
/// @param n
/// @return
char *left(const char *str, int n)
{
    if (n < 0)
    {
        n = 0;
    }
    char *p = new char[n + 1];
    int i;
    for (i = 0; i < n && str[i]; i++)
    {
        // copy characters
        p[i] = str[i];
    }

    while (i <= n)
    {
        // set rest of string to '\0'
        p[i++] = '\0';
    }

    return p;
}
