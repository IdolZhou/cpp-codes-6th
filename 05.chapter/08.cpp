#include <iostream>
#include <cstring>

using namespace std;

const char DONE[] = "done";
int main(void)
{
    char words[20];
    int count = 0;
    cout << "Enter words (to stop, type the word done) :" << endl;

    while (strcmp(words, DONE) != 0)
    {
        cin >> words;
        count++;
    }

    // count - 1为了不包括done
    cout << "You entered a total of " << count - 1 << " words." << endl;

    return 0;
}