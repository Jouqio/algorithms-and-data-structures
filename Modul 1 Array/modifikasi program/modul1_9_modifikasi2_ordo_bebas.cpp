/* Modifikasi Modul 1.4 - Program menginput nilai (bilangan) ke dalam
   array dimensi dua dengan ordo yang ditentukan user
   dan menampilkannya secara Row Major Order */

#include <iostream>
using namespace std;

int main()
{
    int baris, kolom, maxBaris, maxKolom;
    int matriks[10][10]; // Ukuran maksimum 10x10

    // Input ukuran matriks dari user
    cout << "=== Tentukan Ukuran Matriks ===" << endl;
    cout << "Jumlah baris  (maks 10) : ";
    cin >> maxBaris;
    cout << "Jumlah kolom  (maks 10) : ";
    cin >> maxKolom;

    // Validasi input
    if (maxBaris < 1 || maxBaris > 10 || maxKolom < 1 || maxKolom > 10)
    {
        cout << "\nUkuran tidak valid! Baris dan kolom harus antara 1 - 10." << endl;
        return 1;
    }

    cout << "\nMatriks yang akan dibuat: " << maxBaris << " x " << maxKolom << endl;

    // Input elemen array secara Row Major Order
    cout << "\nInput elemen Array : \n";
    for (baris = 0; baris < maxBaris; baris++)
    {
        for (kolom = 0; kolom < maxKolom; kolom++)
        {
            cout << "matriks[" << baris + 1 << "][" << kolom + 1 << "] = ";
            cin >> matriks[baris][kolom];
        }
        cout << endl;
    }

    // Tampilkan elemen Array secara Row Major Order
    cout << "Isi array : \n";
    for (baris = 0; baris < maxBaris; baris++)
    {
        for (kolom = 0; kolom < maxKolom; kolom++)
            cout << "\t" << matriks[baris][kolom];
        cout << endl;
    }

    return 0;
}
