/* Program : modul_1_7.cpp
   Modul 1.7 Program Array Multidimensi 2
   Menginisialisasi array 3 dimensi dan menampilkan
   setiap nilai elemen beserta indeksnya */

#include <iostream>
using namespace std;

int main() {
    // Inisialisasi array 3 dimensi [2][3][4]
    int multiD[2][3][4] = {
        {
            {1, 3, 5, 0},
            {2, 3, 1, 2},
            {0, 1, 2, 0}
        },
        {
            {1, 0, 1, 2},
            {0, 1, 2, 1},
            {2, 0, 1, 2}
        }
    };

    // Tampilkan setiap nilai elemen beserta indeksnya
    for (int x = 0; x < 2; x++)
        for (int y = 0; y < 3; y++)
            for (int z = 0; z < 4; z++)
                printf("multiD[%d][%d][%d] = %d\n", x, y, z, multiD[x][y][z]);

    return 0;
}
