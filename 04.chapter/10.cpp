#include <iostream>
#include <array>

using namespace std;

int main(void)
{

    float average;
    array<float, 3> recordList;
    cout << "Enter three records of 40 meters: " << endl;
    cout << "First record: ";
    cin >> recordList[0];
    cout << "Second record: ";
    cin >> recordList[1];
    cout << "Third record: ";
    cin >> recordList[2];

    cout << "1st: " << recordList[0]
         << "; "
         << "2nd: " << recordList[1]
         << "; "
         << "3th: " << recordList[2]
         << endl;
    average = (recordList[0] +
               recordList[1] +
               recordList[2]) /
              3;
    cout << "Average: " << average << endl;
    return 0;
}