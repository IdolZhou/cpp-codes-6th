#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
    string conpanyName;
    float diameter;
    float weight;
};

int main(void)
{

    // new 返回内存地址，因此使用指针接收
    // 并且pizza是一个结构体类型的指针
    Pizza *pizza = new Pizza;

    cout << "Enter the Pizza's company: ";
    // 指针的操作的运算符将变为“->”而不再是“.”
    getline(cin, pizza->conpanyName);
    cout << "Enter the size of pizza in inches: ";
    cin >> pizza->diameter;
    cout << "Enter the weight of pizza in pounds: ";
    cin >> pizza->weight;

    cout << "pizza company: " << pizza->conpanyName << endl;
    cout << "diameter in inches: " << pizza->diameter << endl;
    cout << "weight in pounds: " << pizza->weight << endl;

    // new 用完后，一定要使用delete释放空间
    delete pizza;
    return 0;
}