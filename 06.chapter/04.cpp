#include <iostream>

using namespace std;

const int strsize = 20;
const int usersize = 9;
struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

void print_by_fullname(bop users[usersize]);
void print_by_title(bop users[usersize]);
void print_by_bopname(bop users[usersize]);
void print_by_preference(bop users[usersize]);

int main(void)
{

    char input;
    cout << "Benevolent Order of Programmers Report" << endl;
    cout << "a. display by name\tb. display by title" << endl;
    cout << "c. display by bopname\td.display by preference" << endl;
    cout << "q. quit" << endl;

    bop users[usersize] = {
        {"Wimp Macho", "A", "WM", 1},
        {"Raki Rhodes", "B", "RR", 0},
        {"Celia Laiter", "C", "CL", 2},
        {"Hoppy Hipman", "D", "HH", 0},
        {"Pat Hand", "A", "PH", 2},
        {"Junior Programmer", "A", "JP", 1},
        {"MIPS", "A", "MS", 1},
        {"Analyst Trainee", "A", "AT", 1},
        {"LOOPY", "A", "LY", 1}};

    cout << "Enter your choice: ";
    cin.get(input).get();
    while (input != 'q')
    {
        switch (input)
        {
        case 'a':
            print_by_fullname(users);
            break;
        case 'b':
            print_by_title(users);
            break;
        case 'c':
            print_by_bopname(users);
            break;
        case 'd':
            print_by_preference(users);
            break;
        default:
            cout << "Please enter character a, b, c, d, q" << endl;
            break;
        }

        cout << "Next choice: ";
        cin.get(input).get();
    }

    cout << "Bye!";
    return 0;
}

/// @brief 打印fullname
/// @param users bop结构数组
void print_by_fullname(bop users[usersize])
{
    for (int i = 0; i < usersize; i++)
    {
        cout << users[i].fullname << endl;
    }
}

/// @brief 打印title
/// @param users bop结构数组
void print_by_title(bop users[usersize])
{
    for (int i = 0; i < usersize; i++)
    {
        cout << users[i].title << endl;
    }
}

/// @brief 打印bopname
/// @param users bop结构数组
void print_by_bopname(bop users[usersize])
{
    for (int i = 0; i < usersize; i++)
    {
        cout << users[i].bopname << endl;
    }
}

/// @brief 打印preference
/// @param users bop结构数组
void print_by_preference(bop users[usersize])
{
    for (int i = 0; i < usersize; i++)
    {
        switch (users[i].preference)
        {
        case 0:
            cout << users[i].fullname << endl;
            break;
        case 1:
            cout << users[i].title << endl;
            break;
        case 2:
            cout << users[i].bopname << endl;
            break;
        default:
            break;
        }
    }
}