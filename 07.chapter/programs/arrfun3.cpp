/**
 * 📄FileName   : arrfun3.cpp
 * ⏱CreateDate : 2023/07/31 20:49:41
 * 🧑Author     : master
 * 👆Version    : 1.0
 * 💭Description: array functions and const
 */

#include <stdio.h>
#include <iostream>

using namespace std;

const int Max = 5;

int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);

int main(void)
{

    double properties[Max];
    int size = fill_array(properties, Max);
    show_array(properties, size);
    if (size > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Done" << endl;
    cin.get();
    cin.get();

    return 0;
}

int fill_array(double ar[], int limit)
{

    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }

            cout << "Bad input; input process terminated." << endl;
            break;
        }
        else if (temp < 0)
        {
            break;
        }
        ar[i] = temp;
    }
    return i;

    return 0;
}

void show_array(const double ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << ar[i] << endl;
    }
}

void revalue(double r, double ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        ar[i] *= r;
    }
}
