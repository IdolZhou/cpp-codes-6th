#include <iostream>
#include <cstring>

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
    CandyBar *pt = new CandyBar[3];
    strcpy(pt[0].brand, "Mocha Munch1");
    pt[0].calorie = 2.3;
    pt[0].weight = 350;

    pt[1] = {"Mocha Munch2", 5, 650};
    pt[2] = {"Mocha Munch3", 4.5, 230};

    cout << "1 Brand: " << pt->brand << endl;
    cout << "1 Weight: " << pt->weight << endl;
    cout << "1 Calorie: " << pt->calorie << endl;

    cout << "2 Brand: " << (pt + 1)->brand << endl;
    cout << "2 Weight: " << (pt + 1)->weight << endl;
    cout << "2 Calorie: " << (pt + 1)->calorie << endl;

    cout << "3 Brand: " << (pt + 2)->brand << endl;
    cout << "3 Weight: " << (pt + 2)->weight << endl;
    cout << "3 Calorie: " << (pt + 2)->calorie << endl;

    // 释放数组 需要带“[]”
    delete[] pt;

    return 0;
}