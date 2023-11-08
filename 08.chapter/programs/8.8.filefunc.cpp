/**
 * 📄FileName   : 8.8.filefunc.cpp
 * ⏱CreateDate : 2023/11/08 13:54:39
 * 🧑Author     : master
 * 👆Version    : 1.0
 * 💭Description: function with ostream & parameter
 */

#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

void file_it(ostream &os, double fo, const double fe[], int n);
const int LIMIT = 5;

int main(void)
{
    ofstream fout;
    const char *fn = "ep-data.txt";
    fout.open(fn);
    if (!fout.is_open())
    {
        cout << "Can't open " << fn << ". Bye." << endl;
        exit(EXIT_FAILURE);
    }

    double objective;
    cout << "Enter the focal length of your telescope objective in mm: ";
    cin >> objective;
    double eps[LIMIT];
    cout << "Enter the focal lengths, in mm, of " << LIMIT << " eyepieces:" << endl;
    for (int i = 0; i < LIMIT; i++)
    {
        cout << "Eyepiece #" << i + 1 << ": ";
        cin >> eps[i];
    }

    /**
     * 同一个函数，通过传入的参数不同，能实现两种功能
     * 因为 ofstream 和 cout 都派生自ostream对象
     */
    // 写入文件ep-data.txt
    file_it(fout, objective, eps, LIMIT);
    // 输出在屏幕中
    file_it(cout, objective, eps, LIMIT);
    cout << "Done" << endl;

    return 0;
}

void file_it(ostream &os, double fo, const double fe[], int n)
{
    // 缓存一份默认的格式状态
    ios_base::fmtflags initial;

    // save initial formatting state
    // 设置定点表示法模式
    initial = os.setf(ios_base::fixed);
    os.precision(0);
    os << "Focal length of objective: " << fo << " mm" << endl;
    // 设置显示小数点模式
    os.setf(ios::showpoint);
    // 设置显示的小数点位数
    os.precision(1);
    os.width(12);
    os << "f.l. eyepiece";
    os.width(15);
    os << "magnification" << endl;
    for (int i = 0; i < n; i++)
    {
        os.width(12);
        os << fe[i];
        os.width(15);
        os << int(fo / fe[i] + 0.5) << endl;
    }

    // restore initial formatting state
    os.setf(initial);
}
