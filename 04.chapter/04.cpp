#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string firstName, lastName, fullName;

    cout << "Enter your first name: ";
    getline(cin, firstName);
    cout << "Enter your last name: ";
    getline(cin, lastName);

    fullName = lastName + ", " + firstName;
    cout << "Here's the information in a single string: " << fullName << endl;
    return 0;
}