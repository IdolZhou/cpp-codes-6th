/**
 * 📄FileName   : 9.1.coordin.h
 * ⏱CreateDate : 2024/01/08 14:13:26
 * 🧑Author     : master
 * 👆Version    : 1.0
 * 💭Description: structure templates and function prototypes
 */

#ifndef COORDIN_H_
#define COORDIN_H_

struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif