#include <iostream>

using namespace std;

const int ARRARY_SIZE_MAX = 10;
int Fill_array(double arr[], int size);
void Show_array(double arr[], int size);
void Reverse_array(double arr[], int size);
void Reverse_array2(double arr[], int size);

int main(void)
{

    double arr[ARRARY_SIZE_MAX];
    int size = Fill_array(arr, ARRARY_SIZE_MAX);
    Show_array(arr, size);

    Reverse_array(arr, size);

    Reverse_array2(arr, size);
    return 0;
}

int Fill_array(double arr[], int size)
{
    int count = 0;
    cout << "Enter the number: ";
    while (cin >> arr[count] && count < size)
    {
        cout << "next: ";
        count++;
    }

    cout << "input " << count << " numbers." << endl;
    return count;
}

void Show_array(double arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Reverse_array(double arr[], int size)
{
    double result[size];
    for (int i = 0; i < size; i++)
    {
        result[size - 1 - i] = arr[i];
    }

    cout << "Reverse array : " << endl;
    Show_array(result, size);
}

void Reverse_array2(double arr[], int size)
{
    double result[size];
    for (int i = 0; i < size; i++)
    {
        if (i == 0 || i == size - 1)
        {
            result[i] = arr[i];
        }
        else
        {
            result[size - 1 - i] = arr[i];
        }
    }

    cout << "Reverse array except first and last number: " << endl;
    Show_array(result, size);
}