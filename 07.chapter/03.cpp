#include <iostream>

using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void calc_volume(box *p);
void show_box(box b);

int main(void)
{
    box b = {"cube", 3, 4, 5};
    calc_volume(&b);
    show_box(b);
    return 0;
}

void calc_volume(box *p)
{
    p->volume = (p->height) * (p->length) * (p->width);
}

void show_box(box b)
{
    cout << "maker: " << b.maker << endl;
    cout << "height: " << b.height << endl;
    cout << "width: " << b.width << endl;
    cout << "length: " << b.length << endl;
    cout << "volume: " << b.volume << endl;
}