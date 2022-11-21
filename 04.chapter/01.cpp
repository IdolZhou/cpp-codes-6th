#include <iostream>

using namespace std;

int main(void)
{
    const int size = 20;
    char firstName[size], lastName[size];
    char grade;
    int age = 0;
    cout << "What is your first name? ";
    // cin.getline 允许读取包含空格的字符串
    cin.getline(firstName, size);
    cout << "What is your last name? ";
    cin.getline(lastName, size);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;

    cout << "Name: " << lastName << ", " << firstName << endl;
    cout << "Grade: " << char(grade + 1) << endl;
    cout << "Age: " << age << endl;
    return 0;
}