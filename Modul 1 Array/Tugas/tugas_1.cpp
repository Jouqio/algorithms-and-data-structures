/* Program : tugas_1.cpp
   Tugas 1 – Mencari Elemen Maksimum pada Matriks
   Pengguna memasukkan ukuran dan isi matriks, kemudian program
   mencari nilai maksimum beserta posisi MAT[baris][kolom]-nya */

#include <iostream>
using namespace std;

int main() {
    int m, n;

    cout << "Masukkan jumlah baris  : "; cin >> m;
    cout << "Masukkan jumlah kolom  : "; cin >> n;

    int MAT[m][n];

    // Input elemen matriks
    cout << "\nInput elemen matriks :" << endl;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            cout << "MAT[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> MAT[i][j];
        }

    // Tampilkan matriks
    cout << "\nMatriks yang diinputkan :" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << "\t" << MAT[i][j];
        cout << endl;
    }

    // Cari elemen maksimum
    int maks      = MAT[0][0];
    int maksBaris = 1;
    int maksKolom = 1;

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (MAT[i][j] > maks) {
                maks      = MAT[i][j];
                maksBaris = i + 1;
                maksKolom = j + 1;
            }

    cout << "\nElemen maksimum        : " << maks << endl;
    cout << "Terletak pada posisi   : MAT["
         << maksBaris << "][" << maksKolom << "]" << endl;

    return 0;
}
