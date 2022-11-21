#include <iostream>

using namespace std;

// 定义结构体
struct CandyBar
{
    char brand[20];
    float weight;
    unsigned int calorie;
};

int main(void)
{
    CandyBar snack[3] = {
        {"Mocha Munch1", 2.3, 350},
        {"Mocha Munch2", 5, 650},
        {"Mocha Munch3", 4.5, 230},
    };
    cout << "1 Brand: " << snack[0].brand << endl;
    cout << "1 Weight: " << snack[0].weight << endl;
    cout << "1 Calorie: " << snack[0].calorie << endl;

    cout << "2 Brand: " << snack[1].brand << endl;
    cout << "2 Weight: " << snack[1].weight << endl;
    cout << "2 Calorie: " << snack[1].calorie << endl;

    cout << "3 Brand: " << snack[2].brand << endl;
    cout << "3 Weight: " << snack[2].weight << endl;
    cout << "3 Calorie: " << snack[2].calorie << endl;
    return 0;
}