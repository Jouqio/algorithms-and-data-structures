#include <iostream>
using namespace std;

int i, j, k;

/*
 * Algoritma dan Struktur Data
 * Modul 1.6 - Program Array Multi-Dimensi
 *
 * Program ini menampilkan huruf menggunakan array 3 dimensi.
 * Dimensi array: [jumlah_huruf][baris][kolom]
 *
 * Catatan karakter blok:
 *   - Windows console: gunakan '\xDB' (karakter ASCII penuh)
 *   - Linux/Mac      : gunakan '#' atau u8"\u2588" (█)
 */

static int data_huruf[2][8][8] = {
    {   // Huruf ke-1: A
        {0, 0, 1, 1, 0, 0, 0, 0},
        {0, 1, 0, 0, 1, 0, 0, 0},
        {0, 1, 0, 0, 1, 0, 0, 0},
        {0, 1, 1, 1, 1, 0, 0, 0},
        {0, 1, 0, 0, 1, 0, 0, 0},
        {0, 1, 0, 0, 1, 0, 0, 0},
        {0, 1, 0, 0, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0}
    },
    {   // Huruf ke-2: B
        {0, 1, 1, 1, 0, 0, 0, 0},
        {0, 1, 0, 0, 1, 0, 0, 0},
        {0, 1, 0, 0, 1, 0, 0, 0},
        {0, 1, 1, 1, 0, 0, 0, 0},
        {0, 1, 0, 0, 1, 0, 0, 0},
        {0, 1, 0, 0, 1, 0, 0, 0},
        {0, 1, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0}
    }
};

int main() {
    // Tampilkan huruf
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 8; j++) {
            for(k = 0; k < 8; k++) {
                if(data_huruf[i][j][k])
                    cout << '\xDB';   // karakter blok penuh (Windows console)
                    // Untuk Linux/Mac: ganti '\xDB' dengan '#'
                else
                    cout << ' ';      // spasi
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}