#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    cout << "Enter words (to stop, type the word done) : " << endl;
    string words = "";
    int count = 0;
    while (words != "done")
    {
        cin >> words;
        count++;
    }
    // cout - 1 为了去除统计done
    cout << "You entered a total of " << count - 1 << " words." << endl;
    return 0;
}