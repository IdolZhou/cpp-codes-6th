/**
 * 📄FileName   : 9.9.static.cpp
 * ⏱CreateDate : 2024/01/10 16:22:35
 * 🧑Author     : master
 * 👆Version    : 1.0
 * 💭Description: using a static local variable
 */

#include <iostream>

const int ArSize = 10;
void strcount(const char *str);

int main(void)
{
    using namespace std;
    char input[ArSize];
    char next;
    cout << "Enter a line: \n";
    cin.get(input, ArSize);
    while (cin)
    {
        cin.get(next);
        while (next != '\n')
        {
            cin.get(next);
        }
        strcount(input);
        cout << "Enter next line (empty lin to quit): \n";
        cin.get(input, ArSize);
    }
    cout << "Bye\n";

    return 0;
}

void strcount(const char *str)
{
    using namespace std;
    static int total = 0;
    int count = 0;

    cout << "\"" << str << "\" contains";
    while (*str++)
    {
        count++;
    }

    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}
