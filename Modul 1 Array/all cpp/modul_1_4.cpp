/* Program : modul_1_4.cpp
   Modul 1.4 Program Array Dua Dimensi
   Membaca nilai bilangan bulat ke dalam array dimensi dua
   dan menampilkannya secara Row Major Order */

#include <iostream>
using namespace std;

int main() {
    int baris, kolom, matriks[3][4];

    // Input elemen array secara Row Major Order
    cout << "Input elemen Array : " << endl;
    for (baris = 0; baris < 3; baris++) {
        for (kolom = 0; kolom < 4; kolom++) {
            cout << "matriks[" << baris << "][" << kolom << "] = ";
            cin >> matriks[baris][kolom];
        }
    }

    // Tampilkan elemen Array secara Row Major Order
    cout << "\nIsi array (Row Major Order) : " << endl;
    for (baris = 0; baris < 3; baris++) {
        for (kolom = 0; kolom < 4; kolom++)
            cout << " " << matriks[baris][kolom];
        cout << endl;
    }

    return 0;
}
