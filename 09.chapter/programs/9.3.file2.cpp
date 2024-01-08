/**
 * 📄FileName   : 9.3.file2.cpp
 * ⏱CreateDate : 2024/01/08 16:48:13
 * 🧑Author     : master
 * 👆Version    : 1.0
 * 💭Description: contains function called in 9.1.file1.cpp
 */

#include "9.1.coordin.h" // structure template, function prototypes
#include <cmath>
#include <iostream>

using namespace std;

polar rect_to_polar(rect xypos)
{
    polar answer;

    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;
}

void show_polar(polar dapos)
{
    const double Rad_to_deg = 57.29577951;
    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Rad_to_deg;
    cout << " degrees" << endl;
}