#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{

    const int SIZE = 20;
    char firstName[SIZE], lastName[SIZE];
    char fullName[SIZE * 2 + 2];
    cout << "Enter your first name: ";
    cin.getline(firstName, SIZE);
    cout << "Enter your last name: ";
    cin.getline(lastName, SIZE);
    // 字符串拷贝，参数1：目标字符串，参数2：源字符串
    strcpy(fullName, lastName);
    // 字符串末尾追加
    strcat(fullName, ", ");
    strcat(fullName, firstName);
    cout << "Here's the information in a single string: " << fullName << endl;
    return 0;
}