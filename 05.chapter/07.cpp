#include <iostream>
#include <string>

using namespace std;

struct car
{
    string maker;
    int year;
};

int main(void)
{
    int carNumber;

    cout << "How many cars do you wish to catalog? ";
    cin >> carNumber;
    // 去掉空字符，防止读取不到下面的生产厂商字符串
    cin.get();
    car *cars = new car[carNumber];
    for (int i = 0; i < carNumber; i++)
    {
        cout << "Car #" << i + 1 << " : " << endl;
        cout << "Please enter the maker: ";
        getline(cin, cars[i].maker);
        cout << "Please enter the year made: ";
        cin >> cars[i].year;
        // 去掉空字符，防止读取不到下一次的生产厂商字符串
        cin.get();
    }

    cout << "Here is your collection: " << endl;
    for (int i = 0; i < carNumber; i++)
    {
        cout << cars[i].year << " " << cars[i].maker << endl;
    }

    delete[] cars;
    return 0;
}