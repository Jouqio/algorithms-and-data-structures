/* Program : modul_1_6.cpp
   Modul 1.6 Program Array Multi-Dimensi
   Menggunakan array 3 dimensi untuk menyimpan pola dot-matrix huruf
   dan menampilkannya sebagai karakter '*' dan ' ' */

#include <iostream>
using namespace std;

int main() {
    int b, y, k;

    /* Array 3 dimensi: [2 huruf][13 baris][7 kolom]
       Huruf 0 = 'A', Huruf 1 = 'B' */
    static int data_huruf[2][13][7] = {
        { /* Huruf A */
            {0, 0, 1, 1, 1, 0, 0},
            {0, 1, 0, 0, 0, 1, 0},
            {1, 0, 0, 0, 0, 0, 1},
            {1, 0, 0, 0, 0, 0, 1},
            {1, 1, 1, 1, 1, 1, 1},
            {1, 0, 0, 0, 0, 0, 1},
            {1, 0, 0, 0, 0, 0, 1},
            {1, 0, 0, 0, 0, 0, 1},
            {1, 0, 0, 0, 0, 0, 1},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
        },
        { /* Huruf B */
            {1, 1, 1, 1, 1, 0, 0},
            {1, 0, 0, 0, 0, 1, 0},
            {1, 0, 0, 0, 0, 1, 0},
            {1, 1, 1, 1, 1, 0, 0},
            {1, 0, 0, 0, 0, 1, 0},
            {1, 0, 0, 0, 0, 1, 0},
            {1, 1, 1, 1, 1, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0},
        }
    };

    // Tampilkan huruf
    for (b = 0; b < 2; b++) {
        cout << "Huruf ke-" << b + 1 << " :" << endl;
        for (y = 0; y < 13; y++) {
            for (k = 0; k < 7; k++) {
                if (data_huruf[b][y][k])
                    cout << "*";
                else
                    cout << " "; // spasi
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
