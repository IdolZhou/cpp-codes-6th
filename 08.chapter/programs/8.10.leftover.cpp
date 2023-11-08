/**
 * 📄FileName   : 8.10.leftover.cpp
 * ⏱CreateDate : 2023/11/08 18:16:16
 * 🧑Author     : master
 * 👆Version    : 1.0
 * 💭Description: overloading the left() function
 */

#include <iostream>

using namespace std;

// 无符号整型
unsigned long left(unsigned long num, unsigned ct);
char *left(const char *str, int n = 1);

int main(void)
{
    // test value
    char const *trip = "Hawaii!!";
    // test value
    unsigned long n = 12345678;
    int i;
    char *temp;
    for (i = 0; i < 10; i++)
    {
        cout << left(n, 1) << endl;
        temp = left(trip, i);
        cout << temp << endl;
        delete[] temp;
    }

    return 0;
}

unsigned long left(unsigned long num, unsigned ct)
{
    unsigned digits = 1;
    unsigned long n = num;
    if (ct == 0 || num == 0)
    {
        return 0;
    }

    while (n /= 10)
    {
        digits++;
    }

    if (digits > ct)
    {
        ct = digits - ct;
        while (ct--)
        {
            num /= 10;
        }

        // return left ct digits
        return num;
    }
    else
    {
        return num;
    }
}

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