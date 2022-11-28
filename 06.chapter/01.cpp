#include <iostream>
#include <cctype>

using namespace std;

int main(void)
{

    char ch;
    cout << "Enter chars (to stop, type the char @) : " << endl;
    while (ch != '@')
    {
        cin.get(ch);
        // 检查输入字符是否为数字或字母
        if (isalnum(ch) != 0)
        {
            // 检查是否为字母
            if (isalpha(ch) != 0)
            {
                // 检查是否为小写
                if (islower(ch) != 0)
                {
                    cout << (char)toupper(ch);
                }
                else if (isupper(ch) != 0)
                {
                    cout << (char)tolower(ch);
                }
            }
            else
            {
                // 数字不回显
                continue;
            }
        }
        else
        {
            // 其他直接回显
            cout << ch << endl;
        }
    }

    return 0;
}