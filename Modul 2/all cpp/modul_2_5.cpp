#include <iostream>
using namespace std;

struct koordinat
{
    int x, y;
};

void tukar_xy(struct koordinat *pos_xy);

int main()
{
    struct koordinat posisi = {21, 34};
    cout << "x, y semula = " << posisi.x << ", " << posisi.y;
    tukar_xy(&posisi);
    cout << "\nx, y kini   = " << posisi.x << ", " << posisi.y << endl;
}

void tukar_xy(struct koordinat *pos_xy)
{
    int z;
    z = (*pos_xy).x;
    (*pos_xy).x = (*pos_xy).y;
    (*pos_xy).y = z;
}