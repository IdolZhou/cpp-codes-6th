#include <iostream>

using namespace std;

void printMovieName(void);
void printStr(void);

int main(void)
{
    for (int i = 0; i < 2; i++)
    {
        printMovieName();
    }

    printStr();
    printStr();

    return 0;
}

void printMovieName(void)
{
    cout << "Three blind mice" << endl;
}

void printStr(void)
{
    cout << "See how they run" << endl;
}
