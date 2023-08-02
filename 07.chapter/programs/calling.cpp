/**
 * 📄FileName   : calling.cpp 7.1
 * ⏱CreateDate : 2023/08/02 21:02:09
 * 🧑Author     : master
 * 👆Version    : 1.0
 * 💭Description: definding, prototyping, and calling a function
 */

#include <iostream>

void simple(); // function prototype

int main()
{
    using namespace std;

    cout << "main() will call the simple() function:\n";
    simple(); // function call
    cout << "main() is finished with the simple() function. \n";

    return 0;
}

// function definition
void simple()
{
    using namespace std;

    cout << "I'm but a simple function.\n";
}