#include <iostream>

using namespace std;

const int MAX = 10;

int input_scorce(double scorces[], int size);
void show_scorce(double scorces[], int size);
double mean(double scorces[], int size);

int main(void)
{
    double golf_scores[MAX];

    int size = input_scorce(golf_scores, MAX);

    if (size > 0)
    {
        show_scorce(golf_scores, size);
        cout << "Average: " << mean(golf_scores, size) << endl;
    }
    else
    {
        cout << "There is no scores!" << endl;
    }

    return 0;
}

int input_scorce(double scorces[], int size)
{
    int count = 0;
    double temp;
    for (int i = 0; i < MAX; i++)
    {
        cout << "Enter golf socre, #" << i + 1 << ": " << endl;
        if (!(cin >> temp))
        {
            cin.clear();
            while (cin.get() != '\n')
            {
                cout << "Invalid Input, terminate." << endl;
            }

            break;
        }
        else if (temp < 0)
        {
            break;
        }
        else
        {
            scorces[i] = temp;
            count++;
        }
    }

    return count;
}

void show_scorce(double scorces[], int size)
{
    cout << "golf result: ";
    for (int i = 0; i < size; i++)
    {
        cout << scorces[i] << " ";
    }

    cout << endl;
}

double mean(double scorces[], int size)
{
    double sum;
    for (int i = 0; i < size; i++)
    {
        sum += scorces[i];
    }

    return sum / size;
}