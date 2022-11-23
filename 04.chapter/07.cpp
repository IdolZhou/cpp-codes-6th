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

    Pizza pizza;

    cout << "Enter the Pizza's company: ";
    getline(cin, pizza.conpanyName);
    cout << "Enter the size of pizza in inches: ";
    cin >> pizza.diameter;
    cout << "Enter the weight of pizza in pounds: ";
    cin >> pizza.weight;

    cout << "pizza company: " << pizza.conpanyName << endl;
    cout << "diameter in inches: " << pizza.diameter << endl;
    cout << "weight in pounds: " << pizza.weight << endl;

    return 0;
}