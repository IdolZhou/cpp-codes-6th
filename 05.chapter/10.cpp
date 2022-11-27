#include <iostream>

using namespace std;

int main(void)
{
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;

    for (int i = 0; i < row; i++)
    {
        // 因为.的数量和行数有关，并且是递减的，因此 j < row-i-1
        for (int j = 0; j < row - i - 1; j++)
        {
            cout << ".";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}