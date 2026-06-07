/* Program : modul_1_5.cpp
   Modul 1.5 Program Penjumlahan Matriks Dua Dimensi
   Menginputkan dua buah matriks 3x4, menjumlahkannya,
   lalu menampilkan matriks A, B, dan hasil A+B */

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int A[3][4], B[3][4], H[3][4], i, j;

    // Masukan matriks A
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++) {
            cout << "Input data matriks A[" << i + 1 << "][" << j + 1 << "] = ";
            fflush(stdin);
            cin >> A[i][j];
        }

    // Masukan matriks B
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++) {
            cout << "Input data matriks B[" << i + 1 << "][" << j + 1 << "] = ";
            fflush(stdin);
            cin >> B[i][j];
        }

    // Cetak matriks A
    cout << "\nIn Matriks A\n";
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++)
            cout << " " << A[i][j];
        cout << endl;
    }

    // Cetak matriks B
    cout << "\nIn Matriks B\n";
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++)
            cout << " " << B[i][j];
        cout << endl;
    }

    // Penjumlahan matriks A dan B
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            H[i][j] = A[i][j] + B[i][j];

    // Cetak hasil penjumlahan matriks A dan B
    cout << "\nIn matriks penjumlahan A+B\n";
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++)
            cout << " " << H[i][j];
        cout << endl;
    }

    return 0;
}
